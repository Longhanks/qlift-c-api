#include <QFrame>

#define QLIFT_C_API_INTERNAL
#include "qlift-QFrame.h"


void* QFrame_new(void *parent, int flags) {
    QFlags<Qt::WindowType> flag {flags};
    return static_cast<void*>(new QFrame {static_cast<QWidget*>(parent), flag});
}

void QFrame_delete(void *frame) {
    delete static_cast<QFrame*>(frame);
}

