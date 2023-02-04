/****************************************************************************
** Meta object code from reading C++ file 'qamqpchannelhash_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/qamqpchannelhash_p.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qamqpchannelhash_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_QAmqpChannelHash_t {
    uint offsetsAndSizes[10];
    char stringdata0[17];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QAmqpChannelHash_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QAmqpChannelHash_t qt_meta_stringdata_QAmqpChannelHash = {
    {
        QT_MOC_LITERAL(0, 16),  // "QAmqpChannelHash"
        QT_MOC_LITERAL(17, 16),  // "channelDestroyed"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 6),  // "object"
        QT_MOC_LITERAL(42, 13)   // "queueDeclared"
    },
    "QAmqpChannelHash",
    "channelDestroyed",
    "",
    "object",
    "queueDeclared"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QAmqpChannelHash[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x08,    1 /* Private */,
       4,    0,   29,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QAmqpChannelHash::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QAmqpChannelHash.offsetsAndSizes,
    qt_meta_data_QAmqpChannelHash,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QAmqpChannelHash_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAmqpChannelHash, std::true_type>,
        // method 'channelDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'queueDeclared'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QAmqpChannelHash::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAmqpChannelHash *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->channelDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 1: _t->queueDeclared(); break;
        default: ;
        }
    }
}

const QMetaObject *QAmqpChannelHash::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAmqpChannelHash::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAmqpChannelHash.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAmqpChannelHash::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
