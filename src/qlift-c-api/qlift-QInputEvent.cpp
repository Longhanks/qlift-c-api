#include <QInputEvent>

#include "qlift-QInputEvent.h"


void QInputEvent_delete(void *inputEvent) {
    delete static_cast<QInputEvent*>(inputEvent);
}

