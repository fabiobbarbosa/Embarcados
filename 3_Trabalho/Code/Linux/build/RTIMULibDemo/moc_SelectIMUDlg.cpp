/****************************************************************************
** Meta object code from reading C++ file 'SelectIMUDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RTIMULibDemo/SelectIMUDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SelectIMUDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SelectIMUDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   20,   20,   20, 0x0a,
      21,   20,   20,   20, 0x0a,
      32,   54,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SelectIMUDlg[] = {
    "SelectIMUDlg\0onOk()\0\0onCancel()\0"
    "setSelectAddress(int)\0imuType\0"
};

void SelectIMUDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SelectIMUDlg *_t = static_cast<SelectIMUDlg *>(_o);
        switch (_id) {
        case 0: _t->onOk(); break;
        case 1: _t->onCancel(); break;
        case 2: _t->setSelectAddress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SelectIMUDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SelectIMUDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SelectIMUDlg,
      qt_meta_data_SelectIMUDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SelectIMUDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SelectIMUDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SelectIMUDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SelectIMUDlg))
        return static_cast<void*>(const_cast< SelectIMUDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int SelectIMUDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
