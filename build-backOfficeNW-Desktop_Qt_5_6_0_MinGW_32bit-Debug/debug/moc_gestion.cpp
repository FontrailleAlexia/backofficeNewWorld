/****************************************************************************
** Meta object code from reading C++ file 'gestion.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../backOfficeNW/gestion.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gestion_t {
    QByteArrayData data[12];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gestion_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gestion_t qt_meta_stringdata_gestion = {
    {
QT_MOC_LITERAL(0, 0, 7), // "gestion"
QT_MOC_LITERAL(1, 8, 30), // "on_pushButtonAddRayons_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 62, 36), // "on_pushButtonSupprimerRayons_..."
QT_MOC_LITERAL(5, 99, 38), // "on_pushButtonSupprimerProduit..."
QT_MOC_LITERAL(6, 138, 33), // "on_pushButtonModifierProd_cli..."
QT_MOC_LITERAL(7, 172, 35), // "on_pushButtonModifierRayons_c..."
QT_MOC_LITERAL(8, 208, 31), // "on_pushButtonAddProduit_clicked"
QT_MOC_LITERAL(9, 240, 26), // "on_tableViewRayons_clicked"
QT_MOC_LITERAL(10, 267, 5), // "index"
QT_MOC_LITERAL(11, 273, 28) // "on_tableViewProduits_clicked"

    },
    "gestion\0on_pushButtonAddRayons_clicked\0"
    "\0on_pushButton_clicked\0"
    "on_pushButtonSupprimerRayons_clicked\0"
    "on_pushButtonSupprimerProduits_clicked\0"
    "on_pushButtonModifierProd_clicked\0"
    "on_pushButtonModifierRayons_clicked\0"
    "on_pushButtonAddProduit_clicked\0"
    "on_tableViewRayons_clicked\0index\0"
    "on_tableViewProduits_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gestion[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void, QMetaType::QModelIndex,   10,

       0        // eod
};

void gestion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gestion *_t = static_cast<gestion *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonAddRayons_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButtonSupprimerRayons_clicked(); break;
        case 3: _t->on_pushButtonSupprimerProduits_clicked(); break;
        case 4: _t->on_pushButtonModifierProd_clicked(); break;
        case 5: _t->on_pushButtonModifierRayons_clicked(); break;
        case 6: _t->on_pushButtonAddProduit_clicked(); break;
        case 7: _t->on_tableViewRayons_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_tableViewProduits_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject gestion::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gestion.data,
      qt_meta_data_gestion,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gestion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gestion::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gestion.stringdata0))
        return static_cast<void*>(const_cast< gestion*>(this));
    return QDialog::qt_metacast(_clname);
}

int gestion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
