/****************************************************************************
** Meta object code from reading C++ file 'w_new_project.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../shmupgine-editor/w_new_project.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'w_new_project.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_w_new_project_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_w_new_project_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_w_new_project_t qt_meta_stringdata_w_new_project = {
    {
QT_MOC_LITERAL(0, 0, 13), // "w_new_project"
QT_MOC_LITERAL(1, 14, 12), // "show_details"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "show"
QT_MOC_LITERAL(4, 33, 23), // "switch_create_btn_state"
QT_MOC_LITERAL(5, 57, 18), // "create_new_project"
QT_MOC_LITERAL(6, 76, 13) // "refill_fields"

    },
    "w_new_project\0show_details\0\0show\0"
    "switch_create_btn_state\0create_new_project\0"
    "refill_fields"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_w_new_project[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void w_new_project::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        w_new_project *_t = static_cast<w_new_project *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_details((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->switch_create_btn_state(); break;
        case 2: _t->create_new_project(); break;
        case 3: _t->refill_fields(); break;
        default: ;
        }
    }
}

const QMetaObject w_new_project::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_w_new_project.data,
      qt_meta_data_w_new_project,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *w_new_project::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *w_new_project::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_w_new_project.stringdata0))
        return static_cast<void*>(const_cast< w_new_project*>(this));
    if (!strcmp(_clname, "Singleton<w_new_project>"))
        return static_cast< Singleton<w_new_project>*>(const_cast< w_new_project*>(this));
    return QDialog::qt_metacast(_clname);
}

int w_new_project::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
