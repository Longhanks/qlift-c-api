#include <QSize>

#include "qlift-QSize.h"


void* QSize_new(int width, int height) {
    return static_cast<void*>(new QSize {width, height});
}

void QSize_delete(void *point) {
    delete static_cast<QSize*>(point);
}

int QSize_width(void *size) {
    return static_cast<QSize*>(size)->width();
}

int QSize_height(void *size) {
    return static_cast<QSize*>(size)->height();
}

void QSize_setWidth(void *size, int width) {
    static_cast<QSize*>(size)->setWidth(width);
}

void QSize_setHeight(void *size, int height) {
    static_cast<QSize*>(size)->setHeight(height);
}

