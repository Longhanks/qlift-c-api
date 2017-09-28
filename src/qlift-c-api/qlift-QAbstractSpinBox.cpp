#include <QAbstractSpinBox>

#include "qlift-QAbstractSpinBox.h"


void* QAbstractSpinBox_new(void *parent) {
    return static_cast<void*>(new QAbstractSpinBox {static_cast<QWidget*>(parent)});
}

void QAbstractSpinBox_delete(void *abstractSpinBox) {
    delete static_cast<QAbstractSpinBox*>(abstractSpinBox);
}

