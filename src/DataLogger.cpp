#include "DataLogger.h"
#include <QDebug>
#include <QFileInfo>
#include <QDir>
#include <QApplication>

DataLogger::DataLogger(QObject *parent)
    : QObject(parent)
    , m_logFile(nullptr)
    , m_stream(nullptr)
    , m_isLogging(false)
    , m_frameTimer(new QTimer(this))
{
    
    m_dataDirectory = QApplication::applicationDirPath() + "/data";
    QDir().mkpath(m_dataDirectory);
    
    
    m_frameTimer->setInterval(5000);
    m_frameTimer->setSingleShot(false);
}

DataLogger::~DataLogger()
{
    stopLogging();
}

bool DataLogger::startLogging()
{
    if (m_isLogging) {
        return true;
    }

    if (!createLogFile()) {
        emit error("Failed to create log file");
        return false;
    }

    m_isLogging = true;
    emit loggingChanged();
    
    qDebug() << "Started logging to:" << m_currentLogFile;
    return true;
}

void DataLogger::stopLogging()
{
    if (!m_isLogging) {
        return;
    }

    if (m_stream) {
        delete m_stream;
        m_stream = nullptr;
    }

    if (m_logFile) {
        m_logFile->close();
        delete m_logFile;
        m_logFile = nullptr;
    }

    m_isLogging = false;
    emit loggingChanged();
    
    qDebug() << "Stopped logging";
}

bool DataLogger::loadLogFile(const QString &filename)
{
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        emit error("Cannot open file: " + filename);
        return false;
    }

    m_readings.clear();
    QTextStream in(&file);
    
    
    QString header = in.readLine();
    
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(',');
        
        if (parts.size() >= 3) {
            SensorReading reading;
            reading.timestamp = QDateTime::fromString(parts[0], Qt::ISODate);
            reading.temperature = parts[1].toDouble();
            reading.pressure = parts[2].toDouble();
            if (parts.size() > 3) {
                reading.frameFilename = parts[3];
            }
            
            m_readings.append(reading);
        }
    }
    
    file.close();
    emit dataLoaded();
    
    qDebug() << "Loaded" << m_readings.size() << "readings from" << filename;
    return true;
}

QString DataLogger::getDataDirectory()
{
    return m_dataDirectory;
}

void DataLogger::logSensorData(double temperature, double pressure, const QString &timestamp)
{
    if (!m_isLogging || !m_stream) {
        return;
    }

    
    QString isoTimestamp = timestamp;
    if (!timestamp.contains('T')) {
        
        isoTimestamp = QDateTime::currentDateTime().toString(Qt::ISODate);
    }
    
    QString frameFile = m_lastFrameFilename.isEmpty() ? "" : m_lastFrameFilename;
    *m_stream << isoTimestamp << "," << QString::number(temperature, 'f', 4) << "," 
              << QString::number(pressure, 'f', 3) << "," << frameFile << "\n";
    m_stream->flush();
    
    
    SensorReading reading;
    reading.timestamp = QDateTime::fromString(isoTimestamp, Qt::ISODate);
    reading.temperature = temperature;
    reading.pressure = pressure;
    reading.frameFilename = frameFile;
    m_readings.append(reading);
}

void DataLogger::logFrame(const QString &frameFilename)
{
    m_lastFrameFilename = frameFilename;
}

bool DataLogger::createLogFile()
{
    QString timestamp = QDateTime::currentDateTime().toString("yyyyMMdd_hhmmss");
    QString filename = m_dataDirectory + "/sensor_log_" + timestamp + ".csv";
    
    m_logFile = new QFile(filename);
    if (!m_logFile->open(QIODevice::WriteOnly | QIODevice::Text)) {
        delete m_logFile;
        m_logFile = nullptr;
        return false;
    }

    m_stream = new QTextStream(m_logFile);
    m_currentLogFile = filename;
    emit currentLogFileChanged();
    
    writeHeader();
    return true;
}

void DataLogger::writeHeader()
{
    if (m_stream) {
        *m_stream << "Timestamp,Temperature(C),Pressure(hPa),FrameFile\n";
        m_stream->flush();
    }
}
