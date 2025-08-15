

#include "../../../include/SensorDataGenerator.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SensorDataGenerator.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19SensorDataGeneratorE_t {};
} 


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN19SensorDataGeneratorE = QtMocHelpers::stringData(
    "SensorDataGenerator",
    "runningChanged",
    "",
    "samplingRateChanged",
    "temperatureChanged",
    "pressureChanged",
    "dataReady",
    "temperature",
    "pressure",
    "timestamp",
    "generateData",
    "start",
    "stop",
    "isRunning",
    "samplingRate"
);
#else 
#error "qtmochelpers.h not found or too old."
#endif 

Q_CONSTINIT static const uint qt_meta_data_ZN19SensorDataGeneratorE[] = {

 
      12,       
       0,       
       0,    0, 
       8,   14, 
       4,   76, 
       0,    0, 
       0,    0, 
       0,       
       5,       


       1,    0,   62,    2, 0x06,    5 ,
       3,    0,   63,    2, 0x06,    6 ,
       4,    0,   64,    2, 0x06,    7 ,
       5,    0,   65,    2, 0x06,    8 ,
       6,    3,   66,    2, 0x06,    9 ,

 
      10,    0,   73,    2, 0x08,   13 ,


      11,    0,   74,    2, 0x02,   14 ,
      12,    0,   75,    2, 0x02,   15 ,


    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::QString,    7,    8,    9,

 
    QMetaType::Void,


    QMetaType::Bool,
    QMetaType::Void,


      13, QMetaType::Bool, 0x00015001, uint(0), 0,
      14, QMetaType::Double, 0x00015103, uint(1), 0,
       7, QMetaType::Double, 0x00015001, uint(2), 0,
       8, QMetaType::Double, 0x00015001, uint(3), 0,

       0        
};

Q_CONSTINIT const QMetaObject SensorDataGenerator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN19SensorDataGeneratorE.offsetsAndSizes,
    qt_meta_data_ZN19SensorDataGeneratorE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN19SensorDataGeneratorE_t,
        
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        
        QtPrivate::TypeAndForceComplete<SensorDataGenerator, std::true_type>,
       
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
       
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SensorDataGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SensorDataGenerator *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->runningChanged(); break;
        case 1: _t->samplingRateChanged(); break;
        case 2: _t->temperatureChanged(); break;
        case 3: _t->pressureChanged(); break;
        case 4: _t->dataReady((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 5: _t->generateData(); break;
        case 6: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->stop(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (SensorDataGenerator::*)();
            if (_q_method_type _q_method = &SensorDataGenerator::runningChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (SensorDataGenerator::*)();
            if (_q_method_type _q_method = &SensorDataGenerator::samplingRateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (SensorDataGenerator::*)();
            if (_q_method_type _q_method = &SensorDataGenerator::temperatureChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (SensorDataGenerator::*)();
            if (_q_method_type _q_method = &SensorDataGenerator::pressureChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (SensorDataGenerator::*)(double , double , const QString & );
            if (_q_method_type _q_method = &SensorDataGenerator::dataReady; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRunning(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->samplingRate(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->temperature(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->pressure(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setSamplingRate(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *SensorDataGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SensorDataGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN19SensorDataGeneratorE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SensorDataGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}


void SensorDataGenerator::runningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}


void SensorDataGenerator::samplingRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}


void SensorDataGenerator::temperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}


void SensorDataGenerator::pressureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}


void SensorDataGenerator::dataReady(double _t1, double _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
