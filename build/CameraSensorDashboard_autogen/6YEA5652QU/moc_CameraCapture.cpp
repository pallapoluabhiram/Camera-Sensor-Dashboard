#include "../../../include/CameraCapture.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraCapture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN13CameraCaptureE_t {};
} 


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13CameraCaptureE = QtMocHelpers::stringData(
    "CameraCapture",
    "frameReady",
    "",
    "frame",
    "runningChanged",
    "resolutionChanged",
    "error",
    "message",
    "frameSaved",
    "filename",
    "captureFrame",
    "saveCurrentFrame",
    "start",
    "stop",
    "saveFrame",
    "isRunning",
    "resolution"
);
#else  
#error "qtmochelpers.h not found or too old."
#endif 

Q_CONSTINIT static const uint qt_meta_data_ZN13CameraCaptureE[] = {

 
      12,       
       0,       
       0,    0, 
      10,   14, 
       2,   92, 
       0,    0, 
       0,    0, 
       0,       
       5,       


       1,    1,   74,    2, 0x06,    3 ,
       4,    0,   77,    2, 0x06,    5 ,
       5,    0,   78,    2, 0x06,    6 ,
       6,    1,   79,    2, 0x06,    7 ,
       8,    1,   82,    2, 0x06,    9 ,

 
      10,    0,   85,    2, 0x08,   11 ,
      11,    0,   86,    2, 0x08,   12 ,


      12,    0,   87,    2, 0x02,   13 ,
      13,    0,   88,    2, 0x02,   14 ,
      14,    1,   89,    2, 0x02,   15 ,

 
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,


    QMetaType::Void,
    QMetaType::Void,


    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    9,


      15, QMetaType::Bool, 0x00015001, uint(1), 0,
      16, QMetaType::QSize, 0x00015103, uint(2), 0,

       0        
};

Q_CONSTINIT const QMetaObject CameraCapture::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN13CameraCaptureE.offsetsAndSizes,
    qt_meta_data_ZN13CameraCaptureE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13CameraCaptureE_t,
        
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        
        QtPrivate::TypeAndForceComplete<CameraCapture, std::true_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void CameraCapture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CameraCapture *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->frameReady((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1]))); break;
        case 1: _t->runningChanged(); break;
        case 2: _t->resolutionChanged(); break;
        case 3: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->frameSaved((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->captureFrame(); break;
        case 6: _t->saveCurrentFrame(); break;
        case 7: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->stop(); break;
        case 9: { bool _r = _t->saveFrame((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (CameraCapture::*)(const QImage & );
            if (_q_method_type _q_method = &CameraCapture::frameReady; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (CameraCapture::*)();
            if (_q_method_type _q_method = &CameraCapture::runningChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (CameraCapture::*)();
            if (_q_method_type _q_method = &CameraCapture::resolutionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (CameraCapture::*)(const QString & );
            if (_q_method_type _q_method = &CameraCapture::error; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (CameraCapture::*)(const QString & );
            if (_q_method_type _q_method = &CameraCapture::frameSaved; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRunning(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = _t->resolution(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setResolution(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *CameraCapture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraCapture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13CameraCaptureE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraCapture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}


void CameraCapture::frameReady(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}


void CameraCapture::runningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}


void CameraCapture::resolutionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}


void CameraCapture::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}


void CameraCapture::frameSaved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
