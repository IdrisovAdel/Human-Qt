/****************************************************************************
** Meta object code from reading C++ file 'fillhuman.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../human/fillhuman.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fillhuman.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FillHuman_t {
    QByteArrayData data[6];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FillHuman_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FillHuman_t qt_meta_stringdata_FillHuman = {
    {
QT_MOC_LITERAL(0, 0, 9), // "FillHuman"
QT_MOC_LITERAL(1, 10, 25), // "on_savePushButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 34), // "on_enterDeathDayPushButton_cl..."
QT_MOC_LITERAL(4, 72, 43), // "on_cancelEnteringDeathDayPush..."
QT_MOC_LITERAL(5, 116, 27) // "on_cancelPushButton_clicked"

    },
    "FillHuman\0on_savePushButton_clicked\0"
    "\0on_enterDeathDayPushButton_clicked\0"
    "on_cancelEnteringDeathDayPushButton_clicked\0"
    "on_cancelPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FillHuman[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FillHuman::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FillHuman *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_savePushButton_clicked(); break;
        case 1: _t->on_enterDeathDayPushButton_clicked(); break;
        case 2: _t->on_cancelEnteringDeathDayPushButton_clicked(); break;
        case 3: _t->on_cancelPushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FillHuman::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_FillHuman.data,
    qt_meta_data_FillHuman,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FillHuman::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FillHuman::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FillHuman.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FillHuman::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
