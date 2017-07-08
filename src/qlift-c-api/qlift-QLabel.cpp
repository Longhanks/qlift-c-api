#include <QLabel>

#define QLIFT_C_API_INTERNAL
#include "qlift-QLabel.h"


void* QLabel_new(const char *text, void *parent, int flags) {
    QFlags<Qt::WindowType> flag {flags};
    return static_cast<void*>(new QLabel {text, static_cast<QWidget*>(parent), flag});
}

void QLabel_delete(void *label) {
    delete static_cast<QLabel*>(label);
}

void QLabel_setAlignment(void *label, int alignment) {
    QFlags<Qt::AlignmentFlag> flag {alignment};
    static_cast<QLabel *>(label)->setAlignment(flag);
}
