#include <QGroupBox>

#define QLIFT_C_API_INTERNAL
#include "qlift-QGroupBox.h"


void* QGroupBox_new(const char *text, void *parent) {
    return static_cast<void*>(new QGroupBox {text, static_cast<QWidget*>(parent)});
}

void QGroupBox_delete(void *groupBox) {
    delete static_cast<QGroupBox*>(groupBox);
}

void QGroupBox_setAlignment(void *groupBox, int alignment) {
    static_cast<QGroupBox*>(groupBox)->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

const char* QGroupBox_title(void *groupBox) {
    return static_cast<QGroupBox*>(groupBox)->title().toLocal8Bit().data();
}

void QGroupBox_setTitle(void *groupBox, const char *title) {
    static_cast<QGroupBox*>(groupBox)->setTitle(title);
}

