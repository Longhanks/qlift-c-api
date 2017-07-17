#include <QMenu>

#define QLIFT_C_API_INTERNAL
#include "qlift-QMenu.h"


void* QMenu_new(const char *title, void *parent) {
    if (title) {
        return static_cast<void*>(new QMenu {title, static_cast<QWidget*>(parent)});
    } else {
        return static_cast<void*>(new QMenu {static_cast<QWidget*>(parent)});
    }
}

void QMenu_delete(void *menu) {
    delete static_cast<QMenu*>(menu);
}

