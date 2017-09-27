#ifndef QLIFT_C_API_QLIFT_QINPUTEVENT_H
#define QLIFT_C_API_QLIFT_QINPUTEVENT_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void QInputEvent_delete(void *inputEvent);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QINPUTEVENT_H

