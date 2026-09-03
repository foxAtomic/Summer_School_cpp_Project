QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    LogInPage.cpp \
    MainPage.cpp \
    main.cpp \
    Human.cpp \
    student.cpp \
    teacher.cpp \
    staff.cpp

HEADERS += \
    LogInPage.h \
    MainPage.h \
    Human.h \
    IdentityType.h \
    student.h \
    teacher.h \
    staff.h

FORMS += \
    LogInPage.ui \
    mainpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
