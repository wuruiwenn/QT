/****************************************************************************
** Meta object code from reading C++ file 'DrawWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DrawDemo/DrawWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DrawWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DrawWidget_t {
    QByteArrayData data[10];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawWidget_t qt_meta_stringdata_DrawWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DrawWidget"
QT_MOC_LITERAL(1, 11, 11), // "SetPenStyle"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "Qt::PenStyle"
QT_MOC_LITERAL(4, 37, 5), // "style"
QT_MOC_LITERAL(5, 43, 11), // "SetPenWidth"
QT_MOC_LITERAL(6, 55, 8), // "penWidth"
QT_MOC_LITERAL(7, 64, 11), // "SetPenColor"
QT_MOC_LITERAL(8, 76, 5), // "color"
QT_MOC_LITERAL(9, 82, 8) // "ClearAll"

    },
    "DrawWidget\0SetPenStyle\0\0Qt::PenStyle\0"
    "style\0SetPenWidth\0penWidth\0SetPenColor\0"
    "color\0ClearAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawWidget[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       9,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QColor,    8,
    QMetaType::Void,

       0        // eod
};

void DrawWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DrawWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetPenStyle((*reinterpret_cast< Qt::PenStyle(*)>(_a[1]))); break;
        case 1: _t->SetPenWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SetPenColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->ClearAll(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DrawWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DrawWidget.data,
    qt_meta_data_DrawWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DrawWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrawWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DrawWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
