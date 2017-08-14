#include <QDialogButtonBox>

#define QLIFT_C_API_INTERNAL
#include "qlift-QDialogButtonBox.h"


void* QDialogButtonBox_new(void *parent) {
    return static_cast<void*>(new QDialogButtonBox {static_cast<QWidget*>(parent)});
}

void QDialogButtonBox_delete(void *dialogButtonBox) {
    delete static_cast<QDialogButtonBox*>(dialogButtonBox);
}

int QDialogButtonBox_orientation(void *dialogButtonBox) {
    return static_cast<QDialogButtonBox*>(dialogButtonBox)->orientation();
}

void QDialogButtonBox_setOrientation(void *dialogButtonBox, int orientation) {
    static_cast<QDialogButtonBox*>(dialogButtonBox)->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QDialogButtonBox_standardButtons(void *dialogButtonBox) {
    return static_cast<QDialogButtonBox*>(dialogButtonBox)->standardButtons();
}

void QDialogButtonBox_setStandardButtons(void *dialogButtonBox, int standardButtons) {
    static_cast<QDialogButtonBox*>(dialogButtonBox)->setStandardButtons(static_cast<QFlags<QDialogButtonBox::StandardButton>>(standardButtons));
}

