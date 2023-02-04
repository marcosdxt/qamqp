QT += network

SOURCES += \
        $$PWD/src/qamqpauthenticator.cpp \
        $$PWD/src/qamqpchannel.cpp \
        $$PWD/src/qamqpchannelhash.cpp \
        $$PWD/src/qamqpclient.cpp \
        $$PWD/src/qamqpexchange.cpp \
        $$PWD/src/qamqpframe.cpp \
        $$PWD/src/qamqpmessage.cpp \
        $$PWD/src/qamqpqueue.cpp \
        $$PWD/src/qamqptable.cpp \

HEADERS += \
        $$PWD/src/qamqpauthenticator.h \
        $$PWD/src/qamqpchannelhash_p.h \
        $$PWD/src/qamqpclient.h \
        $$PWD/src/qamqpexchange.h \
        $$PWD/src/qamqpframe_p.h \
        $$PWD/src/qamqpmessage.h \
        $$PWD/src/qamqpqueue.h \
        $$PWD/src/qamqptable.h \
        $$PWD/src/qamqpchannel.h \
        $$PWD/src/qamqpchannel_p.h \
        $$PWD/src/qamqpclient_p.h \
        $$PWD/src/qamqpexchange_p.h \
        $$PWD/src/qamqpglobal.h \
        $$PWD/src/qamqpmessage_p.h \
        $$PWD/src/qamqpqueue_p.h \

INCLUDEPATH += \
        $$PWD/src


#QAMQP_VERSION = 0.5.0

#isEmpty(QAMQP_LIBRARY_TYPE) {
#    QAMQP_LIBRARY_TYPE = shared
#}

#QT += network
#QAMQP_INCLUDEPATH = $${PWD}/src
#QAMQP_LIBS = -lqamqp
#CONFIG(debug, debug|release){
#    QAMQP_LIBS = -lqamqpd
#}
#contains(QAMQP_LIBRARY_TYPE, staticlib) {
#    DEFINES += QAMQP_STATIC
#} else {
#    DEFINES += QAMQP_SHARED
#    win32:QAMQP_LIBS = -lqamqp0
#}

#isEmpty(PREFIX) {
#    unix {
#        PREFIX = /usr
#    } else {
#        PREFIX = $$[QT_INSTALL_PREFIX]
#    }
#}
#isEmpty(LIBDIR) {
#    LIBDIR = lib
#}

