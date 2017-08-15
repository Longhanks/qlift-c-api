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
int QWidget_close(void *widget);
void QWidget_show(void *widget);
void QWidget_addAction(void *widget, void *action);
const char* QWidget_windowTitle(void *widget);
void QWidget_setWindowTitle(void *widget, const char *title);
void* QWidget_geometry(void *widget);
void QWidget_setGeometry(void *widget, void *rect);
int QWidget_isEnabled(void *widget);
void QWidget_setEnabled(void *widget, int enabled);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QWIDGET_H

