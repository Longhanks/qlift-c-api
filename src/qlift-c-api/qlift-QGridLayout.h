#ifndef QLIFT_C_API_QLIFT_QGRIDLAYOUT_H
#define QLIFT_C_API_QLIFT_QGRIDLAYOUT_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QGridLayout_new(void *parent);
void QGridLayout_delete(void *gridLayout);
void QGridLayout_addItem(void *gridLayout, void *layoutItem, int row, int column, int rowSpan, int columnSpan, int alignment);
void QGridLayout_addLayout(void *gridLayout, void *layout, int row, int column, int alignment);
void QGridLayout_addLayoutWithSpan(void *gridLayout, void *layout, int row, int column, int rowSpan, int columnSpan, int alignment);
void QGridLayout_addWidget(void *gridLayout, void *widget, int row, int column, int alignment);
void QGridLayout_addWidgetWithSpan(void *gridLayout, void *widget, int fromRow, int fromColumn, int rowSpan, int columnSpan, int alignment);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QGRIDLAYOUT_H

