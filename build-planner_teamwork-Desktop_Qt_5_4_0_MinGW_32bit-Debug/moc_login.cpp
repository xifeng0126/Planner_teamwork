/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../planner_teamwork/login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_login_t {
<<<<<<< Updated upstream
    QByteArrayData data[7];
    char stringdata0[57];
=======
    QByteArrayData data[8];
    char stringdata0[68];
>>>>>>> Stashed changes
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_login_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_login_t qt_meta_stringdata_login = {
    {
QT_MOC_LITERAL(0, 0, 5), // "login"
<<<<<<< Updated upstream
QT_MOC_LITERAL(1, 6, 8), // "appStart"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 5), // "check"
QT_MOC_LITERAL(4, 22, 13), // "buttonClicked"
QT_MOC_LITERAL(5, 36, 16), // "QAbstractButton*"
QT_MOC_LITERAL(6, 53, 3) // "btn"

    },
    "login\0appStart\0\0check\0buttonClicked\0"
    "QAbstractButton*\0btn"
=======
QT_MOC_LITERAL(1, 6, 10), // "checkStart"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "appStart"
QT_MOC_LITERAL(4, 27, 5), // "check"
QT_MOC_LITERAL(5, 33, 13), // "buttonClicked"
QT_MOC_LITERAL(6, 47, 16), // "QAbstractButton*"
QT_MOC_LITERAL(7, 64, 3) // "btn"

    },
    "login\0checkStart\0\0appStart\0check\0"
    "buttonClicked\0QAbstractButton*\0btn"
>>>>>>> Stashed changes
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_login[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
<<<<<<< Updated upstream
       3,   14, // methods
=======
       4,   14, // methods
>>>>>>> Stashed changes
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
<<<<<<< Updated upstream
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   30,    2, 0x0a /* Public */,
       4,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
=======
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   36,    2, 0x0a /* Public */,
       5,    1,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
>>>>>>> Stashed changes

       0        // eod
};

void login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        login *_t = static_cast<login *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
<<<<<<< Updated upstream
        case 0: _t->appStart(); break;
        case 1: _t->check((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
=======
        case 0: _t->checkStart(); break;
        case 1: _t->appStart(); break;
        case 2: { bool _r = _t->check((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
>>>>>>> Stashed changes
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
<<<<<<< Updated upstream
        case 2:
=======
        case 3:
>>>>>>> Stashed changes
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
            typedef void (login::*_t)();
<<<<<<< Updated upstream
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::appStart)) {
=======
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::checkStart)) {
>>>>>>> Stashed changes
                *result = 0;
                return;
            }
        }
<<<<<<< Updated upstream
=======
        {
            typedef void (login::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::appStart)) {
                *result = 1;
                return;
            }
        }
>>>>>>> Stashed changes
    }
}

const QMetaObject login::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_login.data,
      qt_meta_data_login,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_login.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
<<<<<<< Updated upstream
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
=======
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
>>>>>>> Stashed changes
    }
    return _id;
}

// SIGNAL 0
<<<<<<< Updated upstream
void login::appStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
=======
void login::checkStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void login::appStart()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
>>>>>>> Stashed changes
QT_WARNING_POP
QT_END_MOC_NAMESPACE
