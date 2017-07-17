#include <QMenu>

#define QLIFT_C_API_INTERNAL
#include "qlift-QMenu.h"


void* QMenu_new(void *parent) {
    return static_cast<void*>(new QMenu {static_cast<QWidget*>(parent)});
}

void* QMenu_new_withTitle(const char *title, void *parent) {
    return static_cast<void*>(new QMenu {title, static_cast<QWidget*>(parent)});
}

void QMenu_delete(void *menu) {
    delete static_cast<QMenu*>(menu);
}
