#include <QWidget>

#define QLIFT_C_API_INTERNAL
#include "qlift-QWidget.h"


void* QWidget_new(void *parent, int flags) {
    return static_cast<void*>(new QWidget {static_cast<QWidget*>(parent), static_cast<QFlags<Qt::WindowType>>(flags)});
}

void QWidget_delete(void *widget) {
    delete static_cast<QWidget*>(widget);
}

bool QWidget_close(void *widget) {
    return static_cast<QWidget*>(widget)->close();
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

bool QWidget_isEnabled(void *widget) {
    return static_cast<QWidget*>(widget)->isEnabled();
}

void QWidget_setEnabled(void *widget, bool enabled) {
    static_cast<QWidget*>(widget)->setEnabled(enabled);
}

int QWidget_height(void *widget) {
    return static_cast<QWidget*>(widget)->height();
}

int QWidget_width(void *widget) {
    return static_cast<QWidget*>(widget)->width();
}

void* QWidget_pos(void *widget) {
    auto stackPoint = static_cast<QWidget*>(widget)->pos();
    return static_cast<void*>(new QPoint {stackPoint.x(), stackPoint.y()});
}

void QWidget_move(void *widget, void *point) {
    if (point) {
        static_cast<QWidget*>(widget)->move(*static_cast<QPoint*>(point));
    } else {
        static_cast<QWidget*>(widget)->move(QPoint());
    }
}

void* QWidget_window(void *widget) {
    return static_cast<void*>(static_cast<QWidget*>(widget)->window());
}

void* QWidget_rect(void *widget) {
    auto stackRect = static_cast<QWidget*>(widget)->rect();
    return static_cast<void*>(new QRect {stackRect.x(), stackRect.y(), stackRect.width(), stackRect.height()});
}

void QWidget_resize(void *widget, int w, int h) {
    static_cast<QWidget*>(widget)->resize(w, h);
}

void* QWidget_frameGeometry(void *widget) {
    auto stackRect = static_cast<QWidget*>(widget)->frameGeometry();
    return static_cast<void*>(new QRect {stackRect.x(), stackRect.y(), stackRect.width(), stackRect.height()});
}

bool QWidget_isWindow(void *widget) {
    return static_cast<QWidget*>(widget)->isWindow();
}

