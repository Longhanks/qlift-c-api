#include <QGuiApplication>

#include "qlift-QGuiApplication.h"


void* QGuiApplication_new(int *argc, char *argv[]) {
    return static_cast<QGuiApplication*>(new QGuiApplication {*argc, argv});
}

void QGuiApplication_delete(void *guiApplication) {
    delete static_cast<QGuiApplication*>(guiApplication);
}

