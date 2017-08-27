#include <QRect>

#define QLIFT_C_API_INTERNAL
#include "qlift-QRect.h"


void* QRect_new(int x, int y, int width, int height) {
    return static_cast<void*>(new QRect {x, y, width, height});
}

void QRect_delete(void *rect) {
    delete static_cast<QRect*>(rect);
}

void* QRect_center(void *rect) {
    auto stackPoint = static_cast<QRect*>(rect)->center();
    return static_cast<void*>(new QPoint {stackPoint.x(), stackPoint.y()});
}

int QRect_x(void *rect) {
    return static_cast<QRect*>(rect)->x();
}

int QRect_y(void *rect) {
    return static_cast<QRect*>(rect)->y();
}

void QRect_setX(void *rect, int x) {
    static_cast<QRect*>(rect)->setX(x);
}

void QRect_setY(void *rect, int y) {
    static_cast<QRect*>(rect)->setY(y);
}

int QRect_height(void *rect) {
    return static_cast<QRect*>(rect)->height();
}

int QRect_width(void *rect) {
    return static_cast<QRect*>(rect)->width();
}

void QRect_setHeight(void *rect, int height) {
    static_cast<QRect*>(rect)->setHeight(height);
}

void QRect_setWidth(void *rect, int width) {
    static_cast<QRect*>(rect)->setHeight(width);
}

