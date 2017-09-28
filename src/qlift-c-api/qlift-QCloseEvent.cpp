#include <QCloseEvent>

#include "qlift-QCloseEvent.h"


void QCloseEvent_delete(void *closeEvent) {
    delete static_cast<QCloseEvent*>(closeEvent);
}

