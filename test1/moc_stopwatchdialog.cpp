/****************************************************************************
** Meta object code from reading C++ file 'stopwatchdialog.h'
**
** Created: Fri Nov 26 17:27:49 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stopwatchdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stopwatchdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StopWatchDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      42,   16,   16,   16, 0x08,
      66,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StopWatchDialog[] = {
    "StopWatchDialog\0\0on_startButton_pressed()\0"
    "on_stopButton_pressed()\0showTime()\0"
};

const QMetaObject StopWatchDialog::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_StopWatchDialog,
      qt_meta_data_StopWatchDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StopWatchDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StopWatchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StopWatchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StopWatchDialog))
        return static_cast<void*>(const_cast< StopWatchDialog*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int StopWatchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_startButton_pressed(); break;
        case 1: on_stopButton_pressed(); break;
        case 2: showTime(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
