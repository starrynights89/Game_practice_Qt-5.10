/****************************************************************************
** Meta object code from reading C++ file 'tictactoewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tictactoe/tictactoewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tictactoewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TicTacToeWidget_t {
    QByteArrayData data[8];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TicTacToeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TicTacToeWidget_t qt_meta_stringdata_TicTacToeWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TicTacToeWidget"
QT_MOC_LITERAL(1, 16, 20), // "currentPlayerChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "Player"
QT_MOC_LITERAL(4, 45, 8), // "gameOver"
QT_MOC_LITERAL(5, 54, 23), // "TicTacToeWidget::Player"
QT_MOC_LITERAL(6, 78, 17), // "handleButtonClick"
QT_MOC_LITERAL(7, 96, 5) // "index"

    },
    "TicTacToeWidget\0currentPlayerChanged\0"
    "\0Player\0gameOver\0TicTacToeWidget::Player\0"
    "handleButtonClick\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TicTacToeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void TicTacToeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TicTacToeWidget *_t = static_cast<TicTacToeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentPlayerChanged((*reinterpret_cast< Player(*)>(_a[1]))); break;
        case 1: _t->gameOver((*reinterpret_cast< TicTacToeWidget::Player(*)>(_a[1]))); break;
        case 2: _t->handleButtonClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TicTacToeWidget::*_t)(Player );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TicTacToeWidget::currentPlayerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TicTacToeWidget::*_t)(TicTacToeWidget::Player );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TicTacToeWidget::gameOver)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TicTacToeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TicTacToeWidget.data,
      qt_meta_data_TicTacToeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TicTacToeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TicTacToeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TicTacToeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TicTacToeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void TicTacToeWidget::currentPlayerChanged(Player _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TicTacToeWidget::gameOver(TicTacToeWidget::Player _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
