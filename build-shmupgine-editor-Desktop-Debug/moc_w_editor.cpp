/****************************************************************************
** Meta object code from reading C++ file 'w_editor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../shmupgine-editor/w_editor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'w_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_w_editor_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_w_editor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_w_editor_t qt_meta_stringdata_w_editor = {
    {
QT_MOC_LITERAL(0, 0, 8), // "w_editor"
QT_MOC_LITERAL(1, 9, 18), // "handle_file_choice"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "QAction*"
QT_MOC_LITERAL(4, 38, 19), // "handle_build_choice"
QT_MOC_LITERAL(5, 58, 20), // "handle_config_choice"
QT_MOC_LITERAL(6, 79, 24), // "handle_ressources_choice"
QT_MOC_LITERAL(7, 104, 13), // "enable_editor"
QT_MOC_LITERAL(8, 118, 6), // "enable"
QT_MOC_LITERAL(9, 125, 11) // "export_code"

    },
    "w_editor\0handle_file_choice\0\0QAction*\0"
    "handle_build_choice\0handle_config_choice\0"
    "handle_ressources_choice\0enable_editor\0"
    "enable\0export_code"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_w_editor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       9,    0,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

void w_editor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        w_editor *_t = static_cast<w_editor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handle_file_choice((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->handle_build_choice((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->handle_config_choice((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->handle_ressources_choice((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->enable_editor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->export_code(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject w_editor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_w_editor.data,
      qt_meta_data_w_editor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *w_editor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *w_editor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_w_editor.stringdata0))
        return static_cast<void*>(const_cast< w_editor*>(this));
    if (!strcmp(_clname, "Singleton<w_editor>"))
        return static_cast< Singleton<w_editor>*>(const_cast< w_editor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int w_editor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
