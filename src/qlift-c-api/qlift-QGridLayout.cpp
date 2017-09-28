#include <QGridLayout>

#include "qlift-QGridLayout.h"


void* QGridLayout_new(void *parent) {
    return static_cast<void*>(new QGridLayout {static_cast<QWidget*>(parent)});
}

void QGridLayout_delete(void *gridLayout) {
    delete static_cast<QGridLayout*>(gridLayout);
}

void QGridLayout_addItem(void *gridLayout, void *layoutItem, int row, int column, int rowSpan, int columnSpan, int alignment) {
    static_cast<QGridLayout*>(gridLayout)->addItem(static_cast<QLayoutItem*>(layoutItem), row, column, rowSpan, columnSpan, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QGridLayout_addLayout(void *gridLayout, void *layout, int row, int column, int alignment) {
    static_cast<QGridLayout*>(gridLayout)->addLayout(static_cast<QLayout*>(layout), row, column, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QGridLayout_addLayoutWithSpan(void *gridLayout, void *layout, int row, int column, int rowSpan, int columnSpan, int alignment) {
    static_cast<QGridLayout*>(gridLayout)->addLayout(static_cast<QLayout*>(layout), row, column, rowSpan, columnSpan, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QGridLayout_addWidget(void *gridLayout, void *widget, int row, int column, int alignment) {
    static_cast<QGridLayout*>(gridLayout)->addWidget(static_cast<QWidget*>(widget), row, column, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QGridLayout_addWidgetWithSpan(void *gridLayout, void *widget, int fromRow, int fromColumn, int rowSpan, int columnSpan, int alignment) {
    static_cast<QGridLayout*>(gridLayout)->addWidget(static_cast<QWidget*>(widget), fromRow, fromColumn, rowSpan, columnSpan, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

