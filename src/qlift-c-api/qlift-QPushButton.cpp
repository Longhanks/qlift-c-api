#include <QPushButton>
#include <wobjectimpl.h>

#include "qlift-QPushButton.h"


void* QPushButton_new(void *icon, const char *text, void *parent) {
    if (icon) {
        return static_cast<void*>(new QliftPushButton {*static_cast<QIcon*>(icon), text, static_cast<QWidget*>(parent)});
    }
    return static_cast<void*>(new QliftPushButton {text, static_cast<QWidget*>(parent)});
}

void QPushButton_delete(void *pushButton) {
    delete static_cast<QliftPushButton*>(pushButton);
}

void QPushButton_mousePressEvent(void *pushButton, void *mouseEvent) {
    static_cast<QliftPushButton*>(pushButton)->mousePressEventSuper(static_cast<QMouseEvent*>(mouseEvent));
}

void QPushButton_mousePressEvent_Override(void *pushButton, void *context, void (*mousePressEvent_Functor)(void*, void*)) {
    static_cast<QliftPushButton*>(pushButton)->mousePressEvent_Functor = mousePressEvent_Functor;
    static_cast<QliftPushButton*>(pushButton)->context = context;
}

W_OBJECT_IMPL(QliftPushButton)

void QliftPushButton::mousePressEventSuper(QMouseEvent *e) {
    QPushButton::mousePressEvent(e);
}

void QliftPushButton::mousePressEvent(QMouseEvent *e) {
    if (mousePressEvent_Functor) {
        (*mousePressEvent_Functor)(context, e);
    }
}

QliftPushButton::~QliftPushButton() {
}

