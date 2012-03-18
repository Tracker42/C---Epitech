/****************************************************************************
** Meta object code from reading C++ file 'QtNibblerWindow.hh'
**
** Created: Sun Mar 18 14:47:28 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Qt/QtNibblerWindow.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtNibblerWindow.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtNibblerWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      45,   16,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QtNibblerWindow[] = {
    "QtNibblerWindow\0\0updateDirection(NDirection)\0"
    "close()\0"
};

const QMetaObject QtNibblerWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtNibblerWindow,
      qt_meta_data_QtNibblerWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtNibblerWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtNibblerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtNibblerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtNibblerWindow))
        return static_cast<void*>(const_cast< QtNibblerWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtNibblerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateDirection((*reinterpret_cast< NDirection(*)>(_a[1]))); break;
        case 1: close(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QtNibblerWindow::updateDirection(NDirection _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtNibblerWindow::close()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
