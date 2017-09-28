#include <QMainWindow>
#include <wobjectimpl.h>

#include "qlift-QMainWindow.h"


void* QMainWindow_new(void *parent, int flags) {
    return static_cast<void*>(new QliftMainWindow {static_cast<QWidget*>(parent), static_cast<QFlags<Qt::WindowType>>(flags)});
}

void QMainWindow_delete(void *mainWindow) {
    delete static_cast<QliftMainWindow*>(mainWindow);
}

void* QMainWindow_centralWidget(void *mainWindow) {
    return static_cast<void*>(static_cast<QMainWindow*>(mainWindow)->centralWidget());
}

void QMainWindow_setCentralWidget(void *mainWindow, void *widget) {
    static_cast<QMainWindow*>(mainWindow)->setCentralWidget(static_cast<QWidget*>(widget));
}

void* QMainWindow_menuBar(void *mainWindow) {
    return static_cast<void*>(static_cast<QMainWindow*>(mainWindow)->menuBar());
}

void QMainWindow_setMenuBar(void *mainWindow, void *menuBar) {
    static_cast<QMainWindow*>(mainWindow)->setMenuBar(static_cast<QMenuBar*>(menuBar));
}

void QMainWindow_closeEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow*>(mainWindow)->closeEventSuper(static_cast<QCloseEvent*>(event));
}

void QMainWindow_closeEvent_Override(void *mainWindow, void *context, void (*closeEvent_Functor)(void*, void*)) {
    static_cast<QliftMainWindow*>(mainWindow)->closeEvent_Functor = closeEvent_Functor;
    static_cast<QliftMainWindow*>(mainWindow)->context = context;
}

W_OBJECT_IMPL(QliftMainWindow)

void QliftMainWindow::closeEventSuper(QCloseEvent *e) {
    QMainWindow::closeEvent(e);
}

void QliftMainWindow::closeEvent(QCloseEvent *e) {
    if (closeEvent_Functor) {
        (*closeEvent_Functor)(context, e);
    }
}

QliftMainWindow::~QliftMainWindow() {
}

