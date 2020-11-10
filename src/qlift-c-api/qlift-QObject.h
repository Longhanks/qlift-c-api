#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QObject_new(void *parent);

LIBRARY_API void QObject_delete(void *object);

LIBRARY_API void *QObject_parent(void *object);

LIBRARY_API void QObject_destroyed_connect(void *object,
                                           void *receiver,
                                           void *context,
                                           void (*slot_ptr)(void *));

#ifdef __cplusplus
}
#endif
