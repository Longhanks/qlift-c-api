#include <QFrame>

#define QLIFT_C_API_INTERNAL
#include "qlift-QFrame.h"


void* QFrame_new(void *parent, int flags) {
    return static_cast<void*>(new QFrame {static_cast<QWidget*>(parent), static_cast<QFlags<Qt::WindowType>>(flags)});
}

void QFrame_delete(void *frame) {
    delete static_cast<QFrame*>(frame);
}

