/****************************************************************************
** Meta object code from reading C++ file 'notewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../planner_teamwork/notewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_noteWindow_t {
    QByteArrayData data[16];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_noteWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_noteWindow_t qt_meta_stringdata_noteWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "noteWindow"
QT_MOC_LITERAL(1, 11, 5), // "tasks"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 3), // "com"
QT_MOC_LITERAL(4, 22, 4), // "note"
QT_MOC_LITERAL(5, 27, 7), // "addNote"
QT_MOC_LITERAL(6, 35, 22), // "on_tasksButton_clicked"
QT_MOC_LITERAL(7, 58, 20), // "on_comButton_clicked"
QT_MOC_LITERAL(8, 79, 21), // "on_noteButton_clicked"
QT_MOC_LITERAL(9, 101, 18), // "on_addnote_clicked"
QT_MOC_LITERAL(10, 120, 15), // "on_save_clicked"
QT_MOC_LITERAL(11, 136, 22), // "on_radioButton_toggled"
QT_MOC_LITERAL(12, 159, 7), // "checked"
QT_MOC_LITERAL(13, 167, 24), // "on_radioButton_2_toggled"
QT_MOC_LITERAL(14, 192, 17), // "on_cancel_clicked"
QT_MOC_LITERAL(15, 210, 23) // "on_openCalendar_clicked"

    },
    "noteWindow\0tasks\0\0com\0note\0addNote\0"
    "on_tasksButton_clicked\0on_comButton_clicked\0"
    "on_noteButton_clicked\0on_addnote_clicked\0"
    "on_save_clicked\0on_radioButton_toggled\0"
    "checked\0on_radioButton_2_toggled\0"
    "on_cancel_clicked\0on_openCalendar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_noteWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      13,    1,   91,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void noteWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<noteWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tasks(); break;
        case 1: _t->com(); break;
        case 2: _t->note(); break;
        case 3: _t->addNote(); break;
        case 4: _t->on_tasksButton_clicked(); break;
        case 5: _t->on_comButton_clicked(); break;
        case 6: _t->on_noteButton_clicked(); break;
        case 7: _t->on_addnote_clicked(); break;
        case 8: _t->on_save_clicked(); break;
        case 9: _t->on_radioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_radioButton_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_cancel_clicked(); break;
        case 12: _t->on_openCalendar_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (noteWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&noteWindow::tasks)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (noteWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&noteWindow::com)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (noteWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&noteWindow::note)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (noteWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&noteWindow::addNote)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject noteWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_noteWindow.data,
    qt_meta_data_noteWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *noteWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *noteWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_noteWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int noteWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void noteWindow::tasks()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void noteWindow::com()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void noteWindow::note()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void noteWindow::addNote()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
