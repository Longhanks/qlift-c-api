#include <QEvent>

#include "qlift-QEvent.h"


void QEvent_delete(void *event) {
    delete static_cast<QEvent*>(event);
}

