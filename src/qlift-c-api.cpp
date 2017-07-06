#include "wobjectdefs.h"
#include "wobjectimpl.h"

#include <QApplication>
#include <QMainWindow>
#include <QLabel>

#include "qlift-c-api.h"

void* QApplication_ctor(int *argc, char *argv[]) {
    return reinterpret_cast<void*>(new QApplication {*argc, argv});
}

int QApplication_exec(void *app) {
   return reinterpret_cast<QApplication*>(app)->exec();
}

void* QMainWindow_ctor_parent_default_flags_default(void) {
    return reinterpret_cast<void*>(new QMainWindow {});
}

void* QMainWindow_ctor_parent_arg1_flags_default(void *parent) {
    return reinterpret_cast<void*>(new QMainWindow {reinterpret_cast<QWidget*>(parent)});
}

void* QMainWindow_ctor_parent_arg1_flags_arg2(void *parent, int flags) {
    QFlags<Qt::WindowType> flag {flags};
    return reinterpret_cast<void*>(new QMainWindow {reinterpret_cast<QWidget*>(parent), flag});
}

void QMainWindow_setCentralWidget(void *mainWindow, void *widget) {
    reinterpret_cast<QMainWindow *>(mainWindow)->setCentralWidget(reinterpret_cast<QWidget*>(widget));
}

void QMainWindow_show(void *mainWindow) {
    reinterpret_cast<QMainWindow*>(mainWindow)->show();
}

void* QLabel_ctor_parent_default_flags_default(void) {
    return reinterpret_cast<void*>(new QLabel {});
}

void* QLabel_ctor_text_arg1_parent_default_flags_default(const char *text) {
    return reinterpret_cast<void*>(new QLabel {text});
}

void* QLabel_ctor_text_arg1_parent_arg2_flags_default(const char *text, void *parent) {
    return reinterpret_cast<void*>(new QLabel {text, reinterpret_cast<QWidget*>(parent)});
}

void* QLabel_ctor_text_arg1_parent_default_flags_arg3(const char *text, void *parent, int flags) {
    QFlags<Qt::WindowType> flag {flags};
    return reinterpret_cast<void*>(new QLabel {text, reinterpret_cast<QWidget*>(parent), flag});
}

void QLabel_setAlignment(void *label, int alignment) {
    QFlags<Qt::AlignmentFlag> flag {alignment};
    reinterpret_cast<QLabel *>(label)->setAlignment(flag);
}

