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

void QWidget_addAction(void *widget, void *action) {
    static_cast<QWidget*>(widget)->addAction(static_cast<QAction*>(action));
}

const char* QWidget_windowTitle(void *widget) {
    return static_cast<QWidget*>(widget)->windowTitle().toLocal8Bit().data();
}

void QWidget_setWindowTitle(void *widget, const char *title) {
    static_cast<QWidget*>(widget)->setWindowTitle(title);
}

void* QWidget_geometry(void *widget) {
    auto stackRect = static_cast<QWidget*>(widget)->geometry();
    return static_cast<void*>(new QRect {stackRect.x(), stackRect.y(), stackRect.width(), stackRect.height()});
}

void QWidget_setGeometry(void *widget, void *rect) {
    if (rect) {
        static_cast<QWidget*>(widget)->setGeometry(*static_cast<QRect*>(rect));
    } else {
        static_cast<QWidget*>(widget)->setGeometry(QRect());
    }
}

