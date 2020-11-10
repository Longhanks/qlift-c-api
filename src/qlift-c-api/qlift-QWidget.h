#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QWidget_new(void *parent, int flags);

LIBRARY_API void QWidget_delete(void *widget);

LIBRARY_API bool QWidget_close(void *widget);

LIBRARY_API void QWidget_show(void *widget);

LIBRARY_API void QWidget_addAction(void *widget, void *action);

LIBRARY_API const char *QWidget_windowTitle(void *widget);

LIBRARY_API void QWidget_setWindowTitle(void *widget, const char *title);

LIBRARY_API void *QWidget_geometry(void *widget);

LIBRARY_API void QWidget_setGeometry(void *widget, void *rect);

LIBRARY_API bool QWidget_isEnabled(void *widget);

LIBRARY_API void QWidget_setEnabled(void *widget, bool enabled);

LIBRARY_API int QWidget_height(void *widget);

LIBRARY_API int QWidget_width(void *widget);

LIBRARY_API void *QWidget_pos(void *widget);

LIBRARY_API void QWidget_move(void *widget, void *point);

LIBRARY_API void *QWidget_window(void *widget);

LIBRARY_API void *QWidget_rect(void *widget);

LIBRARY_API void QWidget_resize(void *widget, int w, int h);

LIBRARY_API void *QWidget_frameGeometry(void *widget);

LIBRARY_API bool QWidget_isWindow(void *widget);

LIBRARY_API void *QWidget_maximumSize(void *widget);

LIBRARY_API void QWidget_setMaximumSize(void *widget, void *size);

LIBRARY_API const char *QWidget_styleSheet(void *widget);

LIBRARY_API void QWidget_setStyleSheet(void *widget, const char *styleSheet);

#ifdef __cplusplus
}
#endif
