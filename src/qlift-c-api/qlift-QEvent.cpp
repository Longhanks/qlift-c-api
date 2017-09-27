#include <QEvent>

#define QLIFT_C_API_INTERNAL
#include "qlift-QEvent.h"


void QEvent_delete(void *event) {
    delete static_cast<QEvent*>(event);
}

