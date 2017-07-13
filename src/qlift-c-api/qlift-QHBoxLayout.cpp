#include <QHBoxLayout>

#define QLIFT_C_API_INTERNAL
#include "qlift-QHBoxLayout.h"


void* QHBoxLayout_new(void *parent) {
    return static_cast<void*>(new QHBoxLayout {static_cast<QWidget*>(parent)});
}

void QHBoxLayout_delete(void *hBoxLayout) {
    delete static_cast<QHBoxLayout*>(hBoxLayout);
}


