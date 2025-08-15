#include "CameraCapture.h"
#include <QDebug>
#include <QImage>
#include <QApplication>
#include <QStandardPaths>

CameraCapture::CameraCapture(QObject *parent)
    : QObject(parent)
    , m_timer(new QTimer(this))
    , m_frameSaveTimer(new QTimer(this))
    , m_isRunning(false)
    , m_resolution(640, 480)
{
    m_timer->setInterval(33);
    connect(m_timer, &QTimer::timeout, this, &CameraCapture::captureFrame);
    
    
    m_frameSaveTimer->setInterval(5000);
    m_frameSaveTimer->setSingleShot(false);
    connect(m_frameSaveTimer, &QTimer::timeout, this, &CameraCapture::saveCurrentFrame);
    
    
    m_dataDirectory = QApplication::applicationDirPath() + "/data";
    QDir().mkpath(m_dataDirectory);
}

CameraCapture::~CameraCapture()
{
    stop();
}

void CameraCapture::setResolution(const QSize &resolution)
{
    if (m_resolution != resolution) {
        m_resolution = resolution;
        if (m_capture.isOpened()) {
            m_capture.set(cv::CAP_PROP_FRAME_WIDTH, resolution.width());
            m_capture.set(cv::CAP_PROP_FRAME_HEIGHT, resolution.height());
        }
        emit resolutionChanged();
    }
}

bool CameraCapture::start()
{
    if (m_isRunning) {
        return true;
    }

    if (!openCamera()) {
       
        qDebug() << "Camera failed to open, will generate placeholder frames";
    }

    m_isRunning = true;
    m_timer->start();
    m_frameSaveTimer->start(); 
    emit runningChanged();
    return true;
}

void CameraCapture::stop()
{
    if (!m_isRunning) {
        return;
    }

    m_timer->stop();
    m_frameSaveTimer->stop(); 
    closeCamera();
    m_isRunning = false;
    emit runningChanged();
}

bool CameraCapture::saveFrame(const QString &filename)
{
    if (!m_currentFrame.empty()) {
        return cv::imwrite(filename.toStdString(), m_currentFrame);
    }
    return false;
}

void CameraCapture::captureFrame()
{
    if (!m_capture.isOpened()) {
        return;
    }

    cv::Mat frame;
    if (m_capture.read(frame)) {
        m_currentFrame = frame.clone();
        QImage qimg = matToQImage(frame);
        emit frameReady(qimg);
    }
}

bool CameraCapture::openCamera()
{
    try {
        m_capture.open(0); 
        if (!m_capture.isOpened()) {
            return false;
        }

        
        m_capture.set(cv::CAP_PROP_FRAME_WIDTH, m_resolution.width());
        m_capture.set(cv::CAP_PROP_FRAME_HEIGHT, m_resolution.height());
        
        
        m_capture.set(cv::CAP_PROP_BUFFERSIZE, 1);

        return true;
    } catch (const cv::Exception &e) {
        qDebug() << "OpenCV exception:" << e.what();
        return false;
    }
}

void CameraCapture::closeCamera()
{
    if (m_capture.isOpened()) {
        m_capture.release();
    }
}

void CameraCapture::saveCurrentFrame()
{
    QString timestamp = QDateTime::currentDateTime().toString("yyyyMMdd_hhmmss");
    QString filename = m_dataDirectory + "/frame_" + timestamp + ".jpg";
    
    if (!m_currentFrame.empty()) {
        
        if (cv::imwrite(filename.toStdString(), m_currentFrame)) {
            emit frameSaved(filename);
            qDebug() << "Saved camera frame:" << filename;
        }
    } else {
        
        cv::Mat placeholderFrame = cv::Mat::zeros(m_resolution.height(), m_resolution.width(), CV_8UC3);
        
        
        std::string timestampText = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss").toStdString();
        cv::putText(placeholderFrame, "No Camera Available", cv::Point(50, m_resolution.height()/2 - 40), 
                   cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(255, 255, 255), 2);
        cv::putText(placeholderFrame, timestampText, cv::Point(50, m_resolution.height()/2 + 20), 
                   cv::FONT_HERSHEY_SIMPLEX, 0.7, cv::Scalar(200, 200, 200), 1);
        
        if (cv::imwrite(filename.toStdString(), placeholderFrame)) {
            emit frameSaved(filename);
            qDebug() << "Saved placeholder frame:" << filename;
        }
    }
}

QImage CameraCapture::matToQImage(const cv::Mat &mat)
{
    switch (mat.type()) {
    case CV_8UC4: {
        QImage image(mat.data, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
        return image.rgbSwapped();
    }
    case CV_8UC3: {
        QImage image(mat.data, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    case CV_8UC1: {
        QImage image(mat.data, mat.cols, mat.rows, mat.step, QImage::Format_Grayscale8);
        return image;
    }
    default:
        break;
    }

    return QImage();
}
