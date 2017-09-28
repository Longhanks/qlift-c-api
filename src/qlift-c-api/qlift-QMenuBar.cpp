#include <QMenuBar>

#include "qlift-QMenuBar.h"


void* QMenuBar_new(void *parent) {
    return static_cast<void*>(new QMenuBar {static_cast<QWidget*>(parent)});
}

void QMenuBar_delete(void *menuBar) {
    delete static_cast<QMenuBar*>(menuBar);
}

