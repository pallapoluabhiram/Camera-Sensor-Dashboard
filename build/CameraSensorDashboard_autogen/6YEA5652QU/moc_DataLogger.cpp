

#include "../../../include/DataLogger.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataLogger.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10DataLoggerE_t {};
} 


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10DataLoggerE = QtMocHelpers::stringData(
    "DataLogger",
    "loggingChanged",
    "",
    "currentLogFileChanged",
    "dataLoaded",
    "error",
    "message",
    "startLogging",
    "stopLogging",
    "loadLogFile",
    "filename",
    "getDataDirectory",
    "getReadings",
    "QList<SensorReading>",
    "isLogging",
    "currentLogFile"
);
#else  
#error "qtmochelpers.h not found or too old."
#endif 

Q_CONSTINIT static const uint qt_meta_data_ZN10DataLoggerE[] = {


      12,       
       0,       
       0,    0, 
       9,   14, 
       2,   81, 
       0,    0, 
       0,    0, 
       0,       
       4,       

 
       1,    0,   68,    2, 0x06,    3 ,
       3,    0,   69,    2, 0x06,    4 ,
       4,    0,   70,    2, 0x06,    5 ,
       5,    1,   71,    2, 0x06,    6 ,


       7,    0,   74,    2, 0x02,    8 ,
       8,    0,   75,    2, 0x02,    9 ,
       9,    1,   76,    2, 0x02,   10 ,
      11,    0,   79,    2, 0x02,   12 ,
      12,    0,   80,    2, 0x102,   13 ,


    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,


    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   10,
    QMetaType::QString,
    0x80000000 | 13,


      14, QMetaType::Bool, 0x00015001, uint(0), 0,
      15, QMetaType::QString, 0x00015001, uint(1), 0,

       0        
};

Q_CONSTINIT const QMetaObject DataLogger::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN10DataLoggerE.offsetsAndSizes,
    qt_meta_data_ZN10DataLoggerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10DataLoggerE_t,
    
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        
        QtPrivate::TypeAndForceComplete<DataLogger, std::true_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
       
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
       
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<QList<SensorReading>, std::false_type>
    >,
    nullptr
} };

void DataLogger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DataLogger *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->loggingChanged(); break;
        case 1: _t->currentLogFileChanged(); break;
        case 2: _t->dataLoaded(); break;
        case 3: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: { bool _r = _t->startLogging();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->stopLogging(); break;
        case 6: { bool _r = _t->loadLogFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->getDataDirectory();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QList<SensorReading> _r = _t->getReadings();
            if (_a[0]) *reinterpret_cast< QList<SensorReading>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (DataLogger::*)();
            if (_q_method_type _q_method = &DataLogger::loggingChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (DataLogger::*)();
            if (_q_method_type _q_method = &DataLogger::currentLogFileChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (DataLogger::*)();
            if (_q_method_type _q_method = &DataLogger::dataLoaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (DataLogger::*)(const QString & );
            if (_q_method_type _q_method = &DataLogger::error; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isLogging(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->currentLogFile(); break;
        default: break;
        }
    }
}

const QMetaObject *DataLogger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataLogger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10DataLoggerE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataLogger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}


void DataLogger::loggingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}


void DataLogger::currentLogFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}


void DataLogger::dataLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}


void DataLogger::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
