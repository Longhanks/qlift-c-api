#include <QSpinBox>

#define QLIFT_C_API_INTERNAL
#include "qlift-QSpinBox.h"


void* QSpinBox_new(void *parent) {
    return static_cast<void*>(new QSpinBox {static_cast<QWidget*>(parent)});
}

void QSpinBox_delete(void *spinBox) {
    delete static_cast<QSpinBox*>(spinBox);
}

int QSpinBox_value(void *spinBox) {
    return static_cast<QSpinBox*>(spinBox)->value();
}

void QSpinBox_setValue(void *spinBox, int value) {
    static_cast<QSpinBox*>(spinBox)->setValue(value);
}

int QSpinBox_minimum(void *spinBox) {
    return static_cast<QSpinBox*>(spinBox)->minimum();
}

void QSpinBox_setMinimum(void *spinBox, int min) {
    static_cast<QSpinBox*>(spinBox)->setMinimum(min);
}

int QSpinBox_maximum(void *spinBox) {
    return static_cast<QSpinBox*>(spinBox)->maximum();
}

void QSpinBox_setMaximum(void *spinBox, int max) {
    static_cast<QSpinBox*>(spinBox)->setMaximum(max);
}

