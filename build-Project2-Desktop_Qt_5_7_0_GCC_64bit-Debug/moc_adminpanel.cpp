/****************************************************************************
** Meta object code from reading C++ file 'adminpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Project2/adminpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_adminpanel_t {
    QByteArrayData data[7];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_adminpanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_adminpanel_t qt_meta_stringdata_adminpanel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "adminpanel"
QT_MOC_LITERAL(1, 11, 37), // "on_admin_pushButton_customers..."
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 34), // "on_admin_pushButton_logout_cl..."
QT_MOC_LITERAL(4, 85, 39), // "on_admin_pushButton_addCustom..."
QT_MOC_LITERAL(5, 125, 42), // "on_admin_pushButton_deleteCus..."
QT_MOC_LITERAL(6, 168, 40) // "on_admin_pushButton_keyCustom..."

    },
    "adminpanel\0on_admin_pushButton_customers_clicked\0"
    "\0on_admin_pushButton_logout_clicked\0"
    "on_admin_pushButton_addCustomer_clicked\0"
    "on_admin_pushButton_deleteCustomer_clicked\0"
    "on_admin_pushButton_keyCustomers_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adminpanel[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void adminpanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        adminpanel *_t = static_cast<adminpanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_admin_pushButton_customers_clicked(); break;
        case 1: _t->on_admin_pushButton_logout_clicked(); break;
        case 2: _t->on_admin_pushButton_addCustomer_clicked(); break;
        case 3: _t->on_admin_pushButton_deleteCustomer_clicked(); break;
        case 4: _t->on_admin_pushButton_keyCustomers_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject adminpanel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_adminpanel.data,
      qt_meta_data_adminpanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *adminpanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adminpanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_adminpanel.stringdata0))
        return static_cast<void*>(const_cast< adminpanel*>(this));
    return QDialog::qt_metacast(_clname);
}

int adminpanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
