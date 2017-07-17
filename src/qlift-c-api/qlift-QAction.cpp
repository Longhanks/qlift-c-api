#include <QAction>

#define QLIFT_C_API_INTERNAL
#include "qlift-QAction.h"


void* QAction_new(void *icon, const char *text, void *parent) {
    if (icon) {
        return static_cast<void*>(new QAction {*static_cast<QIcon*>(icon), text, static_cast<QWidget*>(parent)});
    }
    else if (!icon && text) {
        return static_cast<void*>(new QAction {text, static_cast<QWidget*>(parent)});
    }
    else {
        return static_cast<void*>(new QAction {static_cast<QWidget*>(parent)});
    }
}

void QAction_delete(void *action) {
    delete static_cast<QAction*>(action);
}

const char* QAction_text(void *action) {
    return static_cast<QAction*>(action)->text().toLocal8Bit().data();
}

void QAction_setText(void *action, const char *text) {
    static_cast<QAction*>(action)->setText(text);
}

