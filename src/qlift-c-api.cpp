#include "wobjectdefs.h"
#include "wobjectimpl.h"

#include <QApplication>
#include <QMainWindow>
#include <QLabel>

#include "qlift-c-api.h"

// QObject
void *QObject_new(void *parent) {
    return static_cast<void*>(new QObject {static_cast<QObject*>(parent)});
}

void QObject_delete(void *object) {
    delete static_cast<QObject*>(object);
}

// QApplication
void* QApplication_new(int *argc, char *argv[]) {
    return static_cast<void*>(new QApplication {*argc, argv});
}

void QApplication_delete(void *application) {
    delete static_cast<QApplication*>(application);
}

// QGuiApplication
void* QGuiApplication_new(int *argc, char *argv[]) {
    return static_cast<QGuiApplication*>(new QGuiApplication {*argc, argv});
}

void QGuiApplication_delete(void *guiApplication) {
    delete static_cast<QGuiApplication*>(guiApplication);
}

// QCoreApplication
void* QCoreApplication_new(int *argc, char *argv[]) {
    return static_cast<QCoreApplication*>(new QCoreApplication {*argc, argv});
}

void QCoreApplication_delete(void *coreApplication) {
    delete static_cast<QCoreApplication*>(coreApplication);
}

int QCoreApplication_exec(void *coreApplication) {
    return static_cast<QCoreApplication*>(coreApplication)->exec();
}

void QCoreApplication_exit(void *coreApplication, int returnCode) {
    static_cast<QCoreApplication*>(coreApplication)->exit(returnCode);
}

// QMainWindow
void* QMainWindow_new(void *parent, int flags) {
    QFlags<Qt::WindowType> flag {flags};
    return static_cast<void*>(new QMainWindow {static_cast<QWidget*>(parent), flag});
}

void QMainWindow_delete(void *mainWindow) {
    delete static_cast<QMainWindow*>(mainWindow);
}

void QMainWindow_setCentralWidget(void *mainWindow, void *widget) {
    static_cast<QMainWindow *>(mainWindow)->setCentralWidget(static_cast<QWidget*>(widget));
}

// QWidget
void* QWidget_new(void *parent, int flags) {
    QFlags<Qt::WindowType> flag {flags};
    return static_cast<void*>(new QWidget {static_cast<QWidget*>(parent), flag});
}

void QWidget_delete(void *widget) {
    delete static_cast<QWidget*>(widget);
}

void QWidget_show(void *widget) {
    static_cast<QWidget*>(widget)->show();
}

// QLabel
void* QLabel_new(const char *text, void *parent, int flags) {
    QFlags<Qt::WindowType> flag {flags};
    return static_cast<void*>(new QLabel {text, static_cast<QWidget*>(parent), flag});
}

void QLabel_delete(void *label) {
    delete static_cast<QLabel*>(label);
}

void QLabel_setAlignment(void *label, int alignment) {
    QFlags<Qt::AlignmentFlag> flag {alignment};
    static_cast<QLabel *>(label)->setAlignment(flag);
}

