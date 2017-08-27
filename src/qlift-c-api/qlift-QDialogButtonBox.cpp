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

void QDialogButtonBox_accepted_connect(void *dialogButtonBox, void *receiver, void *context, void (*slot_ptr)(void*)) {
    QObject::connect(
        static_cast<QDialogButtonBox*>(dialogButtonBox),
        &QDialogButtonBox::accepted,
        static_cast<QObject*>(receiver),
        [context, slot_ptr]() {
            (*slot_ptr)(context);
        }
    );
}

void QDialogButtonBox_rejected_connect(void *dialogButtonBox, void *receiver, void *context, void (*slot_ptr)(void*)) {
    QObject::connect(
        static_cast<QDialogButtonBox*>(dialogButtonBox),
        &QDialogButtonBox::rejected,
        static_cast<QObject*>(receiver),
        [context, slot_ptr]() {
            (*slot_ptr)(context);
        }
    );
}

