/****************************************************************************
** Meta object code from reading C++ file 'AedInstruction.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../AED_SIM/AedInstruction.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AedInstruction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAedInstructionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAedInstructionENDCLASS = QtMocHelpers::stringData(
    "AedInstruction",
    "updateStepDisplay",
    "",
    "message",
    "highlightStep",
    "step",
    "attemptRescue",
    "makeStatusLightsRed",
    "startInstructionCycle",
    "proceedToNextStep"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAedInstructionENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[15];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[14];
    char stringdata5[5];
    char stringdata6[14];
    char stringdata7[20];
    char stringdata8[22];
    char stringdata9[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAedInstructionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAedInstructionENDCLASS_t qt_meta_stringdata_CLASSAedInstructionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "AedInstruction"
        QT_MOC_LITERAL(15, 17),  // "updateStepDisplay"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 7),  // "message"
        QT_MOC_LITERAL(42, 13),  // "highlightStep"
        QT_MOC_LITERAL(56, 4),  // "step"
        QT_MOC_LITERAL(61, 13),  // "attemptRescue"
        QT_MOC_LITERAL(75, 19),  // "makeStatusLightsRed"
        QT_MOC_LITERAL(95, 21),  // "startInstructionCycle"
        QT_MOC_LITERAL(117, 17)   // "proceedToNextStep"
    },
    "AedInstruction",
    "updateStepDisplay",
    "",
    "message",
    "highlightStep",
    "step",
    "attemptRescue",
    "makeStatusLightsRed",
    "startInstructionCycle",
    "proceedToNextStep"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAedInstructionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    1,   53,    2, 0x06,    3 /* Public */,
       6,    0,   56,    2, 0x06,    5 /* Public */,
       7,    0,   57,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   58,    2, 0x0a,    7 /* Public */,
       9,    0,   59,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AedInstruction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAedInstructionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAedInstructionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAedInstructionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AedInstruction, std::true_type>,
        // method 'updateStepDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'highlightStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'attemptRescue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'makeStatusLightsRed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startInstructionCycle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'proceedToNextStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AedInstruction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AedInstruction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateStepDisplay((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->highlightStep((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->attemptRescue(); break;
        case 3: _t->makeStatusLightsRed(); break;
        case 4: _t->startInstructionCycle(); break;
        case 5: _t->proceedToNextStep(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AedInstruction::*)(const QString & );
            if (_t _q_method = &AedInstruction::updateStepDisplay; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AedInstruction::*)(int );
            if (_t _q_method = &AedInstruction::highlightStep; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AedInstruction::*)();
            if (_t _q_method = &AedInstruction::attemptRescue; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AedInstruction::*)();
            if (_t _q_method = &AedInstruction::makeStatusLightsRed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *AedInstruction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AedInstruction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAedInstructionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AedInstruction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AedInstruction::updateStepDisplay(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AedInstruction::highlightStep(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AedInstruction::attemptRescue()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AedInstruction::makeStatusLightsRed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
