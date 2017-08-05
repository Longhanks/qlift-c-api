#include <QDialog>

#define QLIFT_C_API_INTERNAL
#include "qlift-QDialog.h"


void* QDialog_new(void *parent, int flags) {
    return static_cast<void*>(new QDialog {static_cast<QWidget*>(parent), static_cast<QFlags<Qt::WindowType>>(flags)});
}

void QDialog_delete(void *dialog) {
    delete static_cast<QDialog*>(dialog);
}

int QDialog_exec(void *dialog) {
    return static_cast<QDialog*>(dialog)->exec();
}

