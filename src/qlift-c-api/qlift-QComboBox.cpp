#include <QComboBox>

#define QLIFT_C_API_INTERNAL
#include "qlift-QComboBox.h"


void* QComboBox_new(void *parent) {
    return static_cast<void*>(new QComboBox {static_cast<QWidget*>(parent)});
}

void QComboBox_delete(void *comboBox) {
    delete static_cast<QComboBox*>(comboBox);
}

void QComboBox_addItem(void *comboBox, const char *text, void *userData) {
    if (userData) {
        static_cast<QComboBox*>(comboBox)->addItem(text, *static_cast<QVariant*>(userData));
    } else {
        static_cast<QComboBox*>(comboBox)->addItem(text);
    }
}

