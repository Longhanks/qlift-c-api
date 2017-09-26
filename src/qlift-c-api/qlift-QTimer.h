#ifndef QLIFT_C_API_QLIFT_QTIMER_H
#define QLIFT_C_API_QLIFT_QTIMER_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void QTimer_singleShot(int msec, int timerType, void *context, void (*slot_ptr)(void*));

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QTIMER_H

