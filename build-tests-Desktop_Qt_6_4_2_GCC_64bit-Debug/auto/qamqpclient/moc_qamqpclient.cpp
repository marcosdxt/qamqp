/****************************************************************************
** Meta object code from reading C++ file 'qamqpclient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/qamqpclient.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qamqpclient.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QAmqpClient_t {
    uint offsetsAndSizes[64];
    char stringdata0[12];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[10];
    char stringdata5[6];
    char stringdata6[13];
    char stringdata7[12];
    char stringdata8[29];
    char stringdata9[19];
    char stringdata10[29];
    char stringdata11[6];
    char stringdata12[10];
    char stringdata13[17];
    char stringdata14[7];
    char stringdata15[16];
    char stringdata16[19];
    char stringdata17[22];
    char stringdata18[13];
    char stringdata19[15];
    char stringdata20[13];
    char stringdata21[11];
    char stringdata22[14];
    char stringdata23[5];
    char stringdata24[5];
    char stringdata25[12];
    char stringdata26[5];
    char stringdata27[9];
    char stringdata28[14];
    char stringdata29[11];
    char stringdata30[9];
    char stringdata31[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QAmqpClient_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QAmqpClient_t qt_meta_stringdata_QAmqpClient = {
    {
        QT_MOC_LITERAL(0, 11),  // "QAmqpClient"
        QT_MOC_LITERAL(12, 9),  // "connected"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 12),  // "disconnected"
        QT_MOC_LITERAL(36, 9),  // "heartbeat"
        QT_MOC_LITERAL(46, 5),  // "error"
        QT_MOC_LITERAL(52, 12),  // "QAMQP::Error"
        QT_MOC_LITERAL(65, 11),  // "socketError"
        QT_MOC_LITERAL(77, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(106, 18),  // "socketStateChanged"
        QT_MOC_LITERAL(125, 28),  // "QAbstractSocket::SocketState"
        QT_MOC_LITERAL(154, 5),  // "state"
        QT_MOC_LITERAL(160, 9),  // "sslErrors"
        QT_MOC_LITERAL(170, 16),  // "QList<QSslError>"
        QT_MOC_LITERAL(187, 6),  // "errors"
        QT_MOC_LITERAL(194, 15),  // "ignoreSslErrors"
        QT_MOC_LITERAL(210, 18),  // "_q_socketConnected"
        QT_MOC_LITERAL(229, 21),  // "_q_socketDisconnected"
        QT_MOC_LITERAL(251, 12),  // "_q_readyRead"
        QT_MOC_LITERAL(264, 14),  // "_q_socketError"
        QT_MOC_LITERAL(279, 12),  // "_q_heartbeat"
        QT_MOC_LITERAL(292, 10),  // "_q_connect"
        QT_MOC_LITERAL(303, 13),  // "_q_disconnect"
        QT_MOC_LITERAL(317, 4),  // "port"
        QT_MOC_LITERAL(322, 4),  // "host"
        QT_MOC_LITERAL(327, 11),  // "virtualHost"
        QT_MOC_LITERAL(339, 4),  // "user"
        QT_MOC_LITERAL(344, 8),  // "password"
        QT_MOC_LITERAL(353, 13),  // "autoReconnect"
        QT_MOC_LITERAL(367, 10),  // "channelMax"
        QT_MOC_LITERAL(378, 8),  // "frameMax"
        QT_MOC_LITERAL(387, 14)   // "heartbeatDelay"
    },
    "QAmqpClient",
    "connected",
    "",
    "disconnected",
    "heartbeat",
    "error",
    "QAMQP::Error",
    "socketError",
    "QAbstractSocket::SocketError",
    "socketStateChanged",
    "QAbstractSocket::SocketState",
    "state",
    "sslErrors",
    "QList<QSslError>",
    "errors",
    "ignoreSslErrors",
    "_q_socketConnected",
    "_q_socketDisconnected",
    "_q_readyRead",
    "_q_socketError",
    "_q_heartbeat",
    "_q_connect",
    "_q_disconnect",
    "port",
    "host",
    "virtualHost",
    "user",
    "password",
    "autoReconnect",
    "channelMax",
    "frameMax",
    "heartbeatDelay"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QAmqpClient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       9,  131, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,   10 /* Public */,
       3,    0,  105,    2, 0x06,   11 /* Public */,
       4,    0,  106,    2, 0x06,   12 /* Public */,
       5,    1,  107,    2, 0x06,   13 /* Public */,
       7,    1,  110,    2, 0x06,   15 /* Public */,
       9,    1,  113,    2, 0x06,   17 /* Public */,
      12,    1,  116,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    1,  119,    2, 0x0a,   21 /* Public */,
      16,    0,  122,    2, 0x08,   23 /* Private */,
      17,    0,  123,    2, 0x08,   24 /* Private */,
      18,    0,  124,    2, 0x08,   25 /* Private */,
      19,    1,  125,    2, 0x08,   26 /* Private */,
      20,    0,  128,    2, 0x08,   28 /* Private */,
      21,    0,  129,    2, 0x08,   29 /* Private */,
      22,    0,  130,    2, 0x08,   30 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    5,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      23, QMetaType::UInt, 0x00015103, uint(-1), 0,
      24, QMetaType::QString, 0x00015103, uint(-1), 0,
      25, QMetaType::QString, 0x00015103, uint(-1), 0,
      26, QMetaType::QString, 0x00015003, uint(-1), 0,
      27, QMetaType::QString, 0x00015103, uint(-1), 0,
      28, QMetaType::Bool, 0x00015103, uint(-1), 0,
      29, QMetaType::Short, 0x00015103, uint(-1), 0,
      30, QMetaType::Int, 0x00015103, uint(-1), 0,
      31, QMetaType::Short, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QAmqpClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QAmqpClient.offsetsAndSizes,
    qt_meta_data_QAmqpClient,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QAmqpClient_t,
        // property 'port'
        QtPrivate::TypeAndForceComplete<quint32, std::true_type>,
        // property 'host'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'virtualHost'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'user'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'password'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'autoReconnect'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'channelMax'
        QtPrivate::TypeAndForceComplete<qint16, std::true_type>,
        // property 'frameMax'
        QtPrivate::TypeAndForceComplete<qint32, std::true_type>,
        // property 'heartbeatDelay'
        QtPrivate::TypeAndForceComplete<qint16, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAmqpClient, std::true_type>,
        // method 'connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'heartbeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAMQP::Error, std::false_type>,
        // method 'socketError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'socketStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>,
        // method 'sslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        // method 'ignoreSslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        // method '_q_socketConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_socketDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_readyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_socketError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method '_q_heartbeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_connect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_disconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QAmqpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAmqpClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->heartbeat(); break;
        case 3: _t->error((*reinterpret_cast< std::add_pointer_t<QAMQP::Error>>(_a[1]))); break;
        case 4: _t->socketError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 5: _t->socketStateChanged((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1]))); break;
        case 6: _t->sslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 7: _t->ignoreSslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 8: _t->d_func()->_q_socketConnected(); break;
        case 9: _t->d_func()->_q_socketDisconnected(); break;
        case 10: _t->d_func()->_q_readyRead(); break;
        case 11: _t->d_func()->_q_socketError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 12: _t->d_func()->_q_heartbeat(); break;
        case 13: _t->d_func()->_q_connect(); break;
        case 14: _t->d_func()->_q_disconnect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAMQP::Error >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QAmqpClient::*)();
            if (_t _q_method = &QAmqpClient::connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QAmqpClient::*)();
            if (_t _q_method = &QAmqpClient::disconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QAmqpClient::*)();
            if (_t _q_method = &QAmqpClient::heartbeat; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QAmqpClient::*)(QAMQP::Error );
            if (_t _q_method = &QAmqpClient::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QAmqpClient::*)(QAbstractSocket::SocketError );
            if (_t _q_method = &QAmqpClient::socketError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QAmqpClient::*)(QAbstractSocket::SocketState );
            if (_t _q_method = &QAmqpClient::socketStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QAmqpClient::*)(const QList<QSslError> & );
            if (_t _q_method = &QAmqpClient::sslErrors; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QAmqpClient *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->port(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->host(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->virtualHost(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->username(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->password(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->autoReconnect(); break;
        case 6: *reinterpret_cast< qint16*>(_v) = _t->channelMax(); break;
        case 7: *reinterpret_cast< qint32*>(_v) = _t->frameMax(); break;
        case 8: *reinterpret_cast< qint16*>(_v) = _t->heartbeatDelay(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QAmqpClient *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPort(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setHost(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setVirtualHost(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setAutoReconnect(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setChannelMax(*reinterpret_cast< qint16*>(_v)); break;
        case 7: _t->setFrameMax(*reinterpret_cast< qint32*>(_v)); break;
        case 8: _t->setHeartbeatDelay(*reinterpret_cast< qint16*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QAmqpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAmqpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAmqpClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAmqpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QAmqpClient::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QAmqpClient::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QAmqpClient::heartbeat()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QAmqpClient::error(QAMQP::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAmqpClient::socketError(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAmqpClient::socketStateChanged(QAbstractSocket::SocketState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QAmqpClient::sslErrors(const QList<QSslError> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
