#include "wobjectdefs.h"
#include "wobjectimpl.h"

#include <QApplication>
#include <QMainWindow>
#include <QLabel>

#include "qlift-c-api.h"

// QApplication
void* QApplication_new(int *argc, char *argv[]) {
    return static_cast<void*>(new QApplication {*argc, argv});
}

void QApplication_delete(void *application) {
    delete static_cast<QApplication*>(application);
}

// QCoreApplication
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
void QWidget_show(void *widget) {
    static_cast<QMainWindow*>(widget)->show();
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

