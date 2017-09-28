#include <QBoxLayout>

#include "qlift-QBoxLayout.h"


void* QBoxLayout_new(int direction, void *parent) {
    return static_cast<void*>(new QBoxLayout {QBoxLayout::Direction(direction), static_cast<QWidget*>(parent)});
}

void QBoxLayout_delete(void *boxLayout) {
    delete static_cast<QBoxLayout*>(boxLayout);
}

void QBoxLayout_addItem(void *boxLayout, void *layoutItem) {
    static_cast<QBoxLayout*>(boxLayout)->addItem(static_cast<QLayoutItem*>(layoutItem));
}

void QBoxLayout_addLayout(void *boxLayout, void *layout, int stretch) {
    static_cast<QBoxLayout*>(boxLayout)->addLayout(static_cast<QLayout*>(layout), stretch);
}

void QBoxLayout_addWidget(void *boxLayout, void *widget, int stretch, int alignment) {
    static_cast<QBoxLayout*>(boxLayout)->addWidget(static_cast<QWidget*>(widget), stretch, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

