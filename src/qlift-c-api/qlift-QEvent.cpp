#include <QEvent>

#include "qlift-QEvent.h"


void QEvent_delete(void *event) {
    delete static_cast<QEvent*>(event);
}

void QEvent_accept(void *event) {
    static_cast<QEvent*>(event)->accept();
}

void QEvent_ignore(void *event) {
    static_cast<QEvent*>(event)->ignore();
}

