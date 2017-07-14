#include <QAbstractButton>

#define QLIFT_C_API_INTERNAL
#include "qlift-QAbstractButton.h"


void QAbstractButton_clicked_connect(void *abstractButton, void *receiver, void (*slot_ptr)(int)) {
    QObject::connect(static_cast<QAbstractButton*>(abstractButton), &QAbstractButton::clicked, static_cast<QObject*>(receiver), *slot_ptr);
}

