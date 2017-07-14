#include <QLabel>

#define QLIFT_C_API_INTERNAL
#include "qlift-QLabel.h"


void* QLabel_new(const char *text, void *parent, int flags) {
    return static_cast<void*>(new QLabel {text, static_cast<QWidget*>(parent), static_cast<QFlags<Qt::WindowType>>(flags)});
}

void QLabel_delete(void *label) {
    delete static_cast<QLabel*>(label);
}

void QLabel_setAlignment(void *label, int alignment) {
    static_cast<QLabel *>(label)->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

