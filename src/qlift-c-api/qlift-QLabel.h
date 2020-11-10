#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QLabel_new(const char *text, void *parent, int flags);

LIBRARY_API void QLabel_delete(void *label);

LIBRARY_API void QLabel_setAlignment(void *label, int alignment);

LIBRARY_API const char *QLabel_text(void *label);

LIBRARY_API void QLabel_setText(void *label, const char *text);

#ifdef __cplusplus
}
#endif
