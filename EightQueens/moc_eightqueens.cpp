/****************************************************************************
** Meta object code from reading C++ file 'eightqueens.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "eightqueens.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eightqueens.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EightQueens_t {
    QByteArrayData data[8];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EightQueens_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EightQueens_t qt_meta_stringdata_EightQueens = {
    {
QT_MOC_LITERAL(0, 0, 11), // "EightQueens"
QT_MOC_LITERAL(1, 12, 26), // "on_HS_Popsize_valueChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "value"
QT_MOC_LITERAL(4, 46, 25), // "on_HS_MaxGen_valueChanged"
QT_MOC_LITERAL(5, 72, 21), // "on_HS_Pc_valueChanged"
QT_MOC_LITERAL(6, 94, 21), // "on_HS_Pm_valueChanged"
QT_MOC_LITERAL(7, 116, 14) // "on_Run_clicked"

    },
    "EightQueens\0on_HS_Popsize_valueChanged\0"
    "\0value\0on_HS_MaxGen_valueChanged\0"
    "on_HS_Pc_valueChanged\0on_HS_Pm_valueChanged\0"
    "on_Run_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EightQueens[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    1,   45,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void EightQueens::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EightQueens *_t = static_cast<EightQueens *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_HS_Popsize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_HS_MaxGen_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_HS_Pc_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_HS_Pm_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_Run_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject EightQueens::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_EightQueens.data,
      qt_meta_data_EightQueens,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EightQueens::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EightQueens::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EightQueens.stringdata0))
        return static_cast<void*>(const_cast< EightQueens*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int EightQueens::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
