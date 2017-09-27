#ifndef QLIFT_C_API_QLIFT_QEVENT_H
#define QLIFT_C_API_QLIFT_QEVENT_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void QEvent_delete(void *event);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QEVENT_H

