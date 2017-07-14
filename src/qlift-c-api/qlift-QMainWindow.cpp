#include <QMainWindow>

#define QLIFT_C_API_INTERNAL
#include "qlift-QMainWindow.h"


void* QMainWindow_new(void *parent, int flags) {
    return static_cast<void*>(new QMainWindow {static_cast<QWidget*>(parent), static_cast<QFlags<Qt::WindowType>>(flags)});
}

void QMainWindow_delete(void *mainWindow) {
    delete static_cast<QMainWindow*>(mainWindow);
}

void QMainWindow_setCentralWidget(void *mainWindow, void *widget) {
    static_cast<QMainWindow *>(mainWindow)->setCentralWidget(static_cast<QWidget*>(widget));
}

