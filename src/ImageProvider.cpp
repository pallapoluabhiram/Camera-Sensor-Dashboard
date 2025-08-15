#include "ImageProvider.h"
#include <QMutexLocker>

ImageProvider::ImageProvider()
    : QQuickImageProvider(QQuickImageProvider::Image)
{
}

QImage ImageProvider::requestImage(const QString &id, QSize *size, const QSize &requestedSize)
{
    Q_UNUSED(id)
    Q_UNUSED(requestedSize)
    
    QMutexLocker locker(&m_mutex);
    
    if (size) {
        *size = m_currentImage.size();
    }
    
    return m_currentImage;
}

void ImageProvider::updateImage(const QImage &image)
{
    QMutexLocker locker(&m_mutex);
    m_currentImage = image;
}
