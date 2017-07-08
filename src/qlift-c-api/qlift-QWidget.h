#ifndef QLIFT_C_API_QLIFT_QWIDGET_H
#define QLIFT_C_API_QLIFT_QWIDGET_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QWidget_new(void *parent, int flags);
void QWidget_delete(void *widget);
void QWidget_show(void *widget);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QWIDGET_H
