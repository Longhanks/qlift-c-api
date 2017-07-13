#include <QVBoxLayout>

#define QLIFT_C_API_INTERNAL
#include "qlift-QVBoxLayout.h"


void* QVBoxLayout_new(void *parent) {
    return static_cast<void*>(new QVBoxLayout {static_cast<QWidget*>(parent)});
}

void QVBoxLayout_delete(void *vBoxLayout) {
    delete static_cast<QVBoxLayout*>(vBoxLayout);
}

