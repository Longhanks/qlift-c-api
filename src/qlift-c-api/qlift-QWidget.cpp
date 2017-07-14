#include <QWidget>

#define QLIFT_C_API_INTERNAL
#include "qlift-QWidget.h"


void* QWidget_new(void *parent, int flags) {
    return static_cast<void*>(new QWidget {static_cast<QWidget*>(parent), static_cast<QFlags<Qt::WindowType>>(flags)});
}

void QWidget_delete(void *widget) {
    delete static_cast<QWidget*>(widget);
}

void QWidget_show(void *widget) {
    static_cast<QWidget*>(widget)->show();
}

