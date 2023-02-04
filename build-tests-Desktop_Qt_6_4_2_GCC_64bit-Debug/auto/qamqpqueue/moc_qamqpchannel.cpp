/****************************************************************************
** Meta object code from reading C++ file 'qamqpchannel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/qamqpchannel.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qamqpchannel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QAmqpChannel_t {
    uint offsetsAndSizes[34];
    char stringdata0[13];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[8];
    char stringdata5[7];
    char stringdata6[6];
    char stringdata7[13];
    char stringdata8[11];
    char stringdata9[6];
    char stringdata10[7];
    char stringdata11[7];
    char stringdata12[8];
    char stringdata13[16];
    char stringdata14[7];
    char stringdata15[5];
    char stringdata16[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QAmqpChannel_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QAmqpChannel_t qt_meta_stringdata_QAmqpChannel = {
    {
        QT_MOC_LITERAL(0, 12),  // "QAmqpChannel"
        QT_MOC_LITERAL(13, 6),  // "opened"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 6),  // "closed"
        QT_MOC_LITERAL(28, 7),  // "resumed"
        QT_MOC_LITERAL(36, 6),  // "paused"
        QT_MOC_LITERAL(43, 5),  // "error"
        QT_MOC_LITERAL(49, 12),  // "QAMQP::Error"
        QT_MOC_LITERAL(62, 10),  // "qosDefined"
        QT_MOC_LITERAL(73, 5),  // "close"
        QT_MOC_LITERAL(79, 6),  // "reopen"
        QT_MOC_LITERAL(86, 6),  // "resume"
        QT_MOC_LITERAL(93, 7),  // "_q_open"
        QT_MOC_LITERAL(101, 15),  // "_q_disconnected"
        QT_MOC_LITERAL(117, 6),  // "number"
        QT_MOC_LITERAL(124, 4),  // "open"
        QT_MOC_LITERAL(129, 4)   // "name"
    },
    "QAmqpChannel",
    "opened",
    "",
    "closed",
    "resumed",
    "paused",
    "error",
    "QAMQP::Error",
    "qosDefined",
    "close",
    "reopen",
    "resume",
    "_q_open",
    "_q_disconnected",
    "number",
    "open",
    "name"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QAmqpChannel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,   93, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    4 /* Public */,
       3,    0,   81,    2, 0x06,    5 /* Public */,
       4,    0,   82,    2, 0x06,    6 /* Public */,
       5,    0,   83,    2, 0x06,    7 /* Public */,
       6,    1,   84,    2, 0x06,    8 /* Public */,
       8,    0,   87,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   88,    2, 0x0a,   11 /* Public */,
      10,    0,   89,    2, 0x0a,   12 /* Public */,
      11,    0,   90,    2, 0x0a,   13 /* Public */,
      12,    0,   91,    2, 0x09,   14 /* Protected */,
      13,    0,   92,    2, 0x09,   15 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00015401, uint(-1), 0,
      15, QMetaType::Bool, 0x00015401, uint(-1), 0,
      16, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QAmqpChannel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QAmqpChannel.offsetsAndSizes,
    qt_meta_data_QAmqpChannel,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QAmqpChannel_t,
        // property 'number'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'open'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAmqpChannel, std::true_type>,
        // method 'opened'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resumed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAMQP::Error, std::false_type>,
        // method 'qosDefined'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reopen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_open'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QAmqpChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAmqpChannel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->opened(); break;
        case 1: _t->closed(); break;
        case 2: _t->resumed(); break;
        case 3: _t->paused(); break;
        case 4: _t->error((*reinterpret_cast< std::add_pointer_t<QAMQP::Error>>(_a[1]))); break;
        case 5: _t->qosDefined(); break;
        case 6: _t->close(); break;
        case 7: _t->reopen(); break;
        case 8: _t->resume(); break;
        case 9: _t->d_func()->_q_open(); break;
        case 10: _t->d_func()->_q_disconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAMQP::Error >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QAmqpChannel::*)();
            if (_t _q_method = &QAmqpChannel::opened; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QAmqpChannel::*)();
            if (_t _q_method = &QAmqpChannel::closed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QAmqpChannel::*)();
            if (_t _q_method = &QAmqpChannel::resumed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QAmqpChannel::*)();
            if (_t _q_method = &QAmqpChannel::paused; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QAmqpChannel::*)(QAMQP::Error );
            if (_t _q_method = &QAmqpChannel::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QAmqpChannel::*)();
            if (_t _q_method = &QAmqpChannel::qosDefined; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QAmqpChannel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->channelNumber(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isOpen(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QAmqpChannel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QAmqpChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAmqpChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAmqpChannel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAmqpChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QAmqpChannel::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QAmqpChannel::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QAmqpChannel::resumed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QAmqpChannel::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QAmqpChannel::error(QAMQP::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAmqpChannel::qosDefined()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
