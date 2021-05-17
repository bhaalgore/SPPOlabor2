QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        bufferclassunit.cpp \
        buffermethodunit.cpp \
        cppclassunit.cpp \
        cppfactory.cpp \
        cppmethodunit.cpp \
        cppprintoperatorunit.cpp \
        csharpclassunit.cpp \
        csharpfactory.cpp \
        csharpmethodunit.cpp \
        csharpprintoperatorunit.cpp \
        javaclassunit.cpp \
        javafactory.cpp \
        javamethodunit.cpp \
        javaprintoperatorunit.cpp \
        main.cpp \
        unit.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    InterfaceFactory.h \
    bufferclassunit.h \
    buffermethodunit.h \
    cppclassunit.h \
    cppfactory.h \
    cppmethodunit.h \
    cppprintoperatorunit.h \
    csharpclassunit.h \
    csharpfactory.h \
    csharpmethodunit.h \
    csharpprintoperatorunit.h \
    javaclassunit.h \
    javafactory.h \
    javamethodunit.h \
    javaprintoperatorunit.h \
    unit.h
