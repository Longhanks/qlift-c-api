#ifndef QLIFT_C_API_QLIFT_QOBJECT_H
#define QLIFT_C_API_QLIFT_QOBJECT_H

#ifdef __cplusplus
extern "C" {
#endif

void* QObject_new(void *parent);
void QObject_delete(void *object);
void* QObject_parent(void *object);
void QObject_destroyed_connect(void *object, void *receiver, void *context, void (*slot_ptr)(void*));

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QOBJECT_H

