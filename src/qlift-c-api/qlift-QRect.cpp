#include <QRect>

#define QLIFT_C_API_INTERNAL
#include "qlift-QRect.h"


void* QRect_new(int x, int y, int width, int height) {
    return static_cast<void*>(new QRect {x, y, width, height});
}

void QRect_delete(void *rect) {
    delete static_cast<QRect*>(rect);
}

