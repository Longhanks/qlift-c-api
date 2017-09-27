#include <QInputEvent>

#define QLIFT_C_API_INTERNAL
#include "qlift-QInputEvent.h"


void QInputEvent_delete(void *inputEvent) {
    delete static_cast<QInputEvent*>(inputEvent);
}

