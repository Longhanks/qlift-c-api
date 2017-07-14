#ifndef QLIFT_C_API_QLIFT_QBOXLAYOUT_H
#define QLIFT_C_API_QLIFT_QBOXLAYOUT_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QBoxLayout_new(int direction, void *parent);
void QBoxLayout_delete(void *boxLayout);
void QBoxLayout_addItem(void *boxLayout, void *layoutItem);
void QBoxLayout_addLayout(void *boxLayout, void *layout, int stretch);
void QBoxLayout_addWidget(void *boxLayout, void *widget, int stretch, int alignment);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QBOXLAYOUT_H

