#include <QObject>

#define QLIFT_C_API_INTERNAL
#include "qlift-QObject.h"


void *QObject_new(void *parent) {
    return static_cast<void*>(new QObject {static_cast<QObject*>(parent)});
}

void QObject_delete(void *object) {
    delete static_cast<QObject*>(object);
}

void* QObject_parent(void *object) {
    return static_cast<QObject*>(object)->parent();
}

