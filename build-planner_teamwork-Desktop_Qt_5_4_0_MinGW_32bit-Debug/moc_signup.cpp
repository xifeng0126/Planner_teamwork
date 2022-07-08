/****************************************************************************
** Meta object code from reading C++ file 'signup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../planner_teamwork/signup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_signup_t {
<<<<<<< Updated upstream
    QByteArrayData data[1];
    char stringdata0[7];
=======
    QByteArrayData data[7];
    char stringdata0[63];
>>>>>>> Stashed changes
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_signup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_signup_t qt_meta_stringdata_signup = {
    {
<<<<<<< Updated upstream
QT_MOC_LITERAL(0, 0, 6) // "signup"

    },
    "signup"
=======
QT_MOC_LITERAL(0, 0, 6), // "signup"
QT_MOC_LITERAL(1, 7, 10), // "checkStart"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "appStart"
QT_MOC_LITERAL(4, 28, 13), // "buttonClicked"
QT_MOC_LITERAL(5, 42, 16), // "QAbstractButton*"
QT_MOC_LITERAL(6, 59, 3) // "btn"

    },
    "signup\0checkStart\0\0appStart\0buttonClicked\0"
    "QAbstractButton*\0btn"
>>>>>>> Stashed changes
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_signup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
<<<<<<< Updated upstream
       0,    0, // methods
=======
       3,   14, // methods
>>>>>>> Stashed changes
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
<<<<<<< Updated upstream
       0,       // signalCount
=======
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
>>>>>>> Stashed changes

       0        // eod
};

void signup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
<<<<<<< Updated upstream
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
=======
    if (_c == QMetaObject::InvokeMetaMethod) {
        signup *_t = static_cast<signup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkStart(); break;
        case 1: _t->appStart(); break;
        case 2: _t->buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (signup::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&signup::checkStart)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (signup::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&signup::appStart)) {
                *result = 1;
                return;
            }
        }
    }
>>>>>>> Stashed changes
}

const QMetaObject signup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_signup.data,
      qt_meta_data_signup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *signup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *signup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_signup.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int signup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
<<<<<<< Updated upstream
    return _id;
}
=======
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void signup::checkStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void signup::appStart()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
>>>>>>> Stashed changes
QT_WARNING_POP
QT_END_MOC_NAMESPACE
