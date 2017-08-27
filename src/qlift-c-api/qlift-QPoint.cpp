#include <QPoint>

#define QLIFT_C_API_INTERNAL
#include "qlift-QPoint.h"


void* QPoint_new(int x, int y) {
    return static_cast<void*>(new QPoint {x, y});
}

void QPoint_delete(void *point) {
    delete static_cast<QPoint*>(point);
}

bool QPoint_isNull(void *point) {
    return static_cast<QPoint*>(point)->isNull();
}

int QPoint_manhattanLength(void *point) {
    return static_cast<QPoint*>(point)->manhattanLength();
}

int QPoint_x(void *point) {
    return static_cast<QPoint*>(point)->x();
}

int QPoint_y(void *point) {
    return static_cast<QPoint*>(point)->y();
}

void QPoint_setX(void *point, int x) {
    static_cast<QPoint*>(point)->setX(x);
}

void QPoint_setY(void *point, int y) {
    static_cast<QPoint*>(point)->setY(y);
}

