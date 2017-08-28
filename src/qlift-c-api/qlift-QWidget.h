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
bool QWidget_close(void *widget);
void QWidget_show(void *widget);
void QWidget_addAction(void *widget, void *action);
const char* QWidget_windowTitle(void *widget);
void QWidget_setWindowTitle(void *widget, const char *title);
void* QWidget_geometry(void *widget);
void QWidget_setGeometry(void *widget, void *rect);
bool QWidget_isEnabled(void *widget);
void QWidget_setEnabled(void *widget, bool enabled);
int QWidget_height(void *widget);
int QWidget_width(void *widget);
void* QWidget_pos(void *widget);
void QWidget_move(void *widget, void *point);
void* QWidget_window(void *widget);
void* QWidget_rect(void *widget);
void* QWidget_frameGeometry(void *widget);
bool QWidget_isWindow(void *widget);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QWIDGET_H

