#ifndef QLIFT_C_API_QLIFT_QEVENT_H
#define QLIFT_C_API_QLIFT_QEVENT_H

#ifdef __cplusplus
extern "C" {
#endif

void QEvent_delete(void *event);
void QEvent_accept(void *event);
void QEvent_ignore(void *event);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QEVENT_H

