#-------------------------------------------------
#
# Project created by QtCreator 2017-11-03T10:43:05
#
#-------------------------------------------------

QT       += core gui 
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Saflata
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    text.cpp \
    page.cpp \
    trial.cpp

HEADERS += \
        mainwindow.h \
    text.h \
    page.h \
    trial.h

FORMS += \
        mainwindow.ui \
    text.ui \
    page.ui \
    trial.ui

DISTFILES += \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android
contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_EXTRA_LIBS = \
        # modify the path
        $$PWD/../../../home/sandeep/Android/Qt/NDK/platforms/android-19/arch-arm/usr/lib/mariadb/libmariadb.so
}
