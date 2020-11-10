#include <QFrame>

#include "qlift-QFrame.h"

[[maybe_unused]] void *QFrame_new(void *parent, int flags) {
    return static_cast<void *>(
        new QFrame{static_cast<QWidget *>(parent),
                   static_cast<QFlags<Qt::WindowType>>(flags)});
}

[[maybe_unused]] void QFrame_delete(void *frame) {
    delete static_cast<QFrame *>(frame);
}
