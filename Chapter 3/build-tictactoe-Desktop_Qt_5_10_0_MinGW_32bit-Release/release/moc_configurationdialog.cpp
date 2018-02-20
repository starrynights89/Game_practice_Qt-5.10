/****************************************************************************
** Meta object code from reading C++ file 'configurationdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tictactoe/configurationdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configurationdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConfigurationDialog_t {
    QByteArrayData data[9];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConfigurationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConfigurationDialog_t qt_meta_stringdata_ConfigurationDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ConfigurationDialog"
QT_MOC_LITERAL(1, 20, 19), // "updateOKButtonState"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "setPlayer1Name"
QT_MOC_LITERAL(4, 56, 6), // "p1name"
QT_MOC_LITERAL(5, 63, 14), // "setPlayer2Name"
QT_MOC_LITERAL(6, 78, 6), // "p2name"
QT_MOC_LITERAL(7, 85, 11), // "player1Name"
QT_MOC_LITERAL(8, 97, 11) // "player2Name"

    },
    "ConfigurationDialog\0updateOKButtonState\0"
    "\0setPlayer1Name\0p1name\0setPlayer2Name\0"
    "p2name\0player1Name\0player2Name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConfigurationDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       5,    1,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095103,

       0        // eod
};

void ConfigurationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConfigurationDialog *_t = static_cast<ConfigurationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateOKButtonState(); break;
        case 1: _t->setPlayer1Name((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setPlayer2Name((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ConfigurationDialog *_t = static_cast<ConfigurationDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->player1Name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->player2Name(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ConfigurationDialog *_t = static_cast<ConfigurationDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlayer1Name(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPlayer2Name(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ConfigurationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ConfigurationDialog.data,
      qt_meta_data_ConfigurationDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ConfigurationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigurationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigurationDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConfigurationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
