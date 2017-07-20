#include <QAbstractButton>

#define QLIFT_C_API_INTERNAL
#include "qlift-QAbstractButton.h"


const char* QAbstractButton_text(void *abstractButton) {
    return static_cast<QAbstractButton*>(abstractButton)->text().toLocal8Bit().data();
}

void QAbstractButton_setText(void *abstractButton, const char *text) {
    static_cast<QAbstractButton*>(abstractButton)->setText(text);
}

void QAbstractButton_clicked_connect(void *abstractButton, void *receiver, void *info, void (*slot_ptr)(void*, int)) {
    QObject::connect(
        static_cast<QAbstractButton*>(abstractButton),
        &QAbstractButton::clicked,
        static_cast<QObject*>(receiver),
        [info, slot_ptr](int checked) {
            (*slot_ptr)(info, checked);
        }
    );
}

