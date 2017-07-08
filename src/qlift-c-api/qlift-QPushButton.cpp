#include <QPushButton>

#define QLIFT_C_API_INTERNAL
#include "qlift-QPushButton.h"


void* QPushButton_new(void *icon, const char *text, void *parent) {
    if (icon) {
        return static_cast<void*>(new QPushButton {*static_cast<QIcon*>(icon), text, static_cast<QWidget*>(parent)});
    }
    return static_cast<void*>(new QPushButton {text, static_cast<QWidget*>(parent)});
}

void QPushButton_delete(void *pushButton) {
    delete static_cast<QPushButton*>(pushButton);
}
