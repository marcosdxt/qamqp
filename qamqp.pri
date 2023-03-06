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


