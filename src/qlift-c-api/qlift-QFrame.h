#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QFrame_new(void *parent, int flags);

LIBRARY_API void QFrame_delete(void *frame);

#ifdef __cplusplus
}
#endif
