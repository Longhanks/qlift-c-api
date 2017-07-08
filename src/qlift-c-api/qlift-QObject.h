#ifndef QLIFT_C_API_QLIFT_QOBJECT_H
#define QLIFT_C_API_QLIFT_QOBJECT_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QObject_new(void *parent);
void QObject_delete(void *object);
void* QObject_parent(void *object);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QOBJECT_H
