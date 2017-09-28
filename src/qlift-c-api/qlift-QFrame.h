#ifndef QLIFT_C_API_QLIFT_QFRAME_H
#define QLIFT_C_API_QLIFT_QFRAME_H

#ifdef __cplusplus
extern "C" {
#endif

void* QFrame_new(void *parent, int flags);
void QFrame_delete(void *frame);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QFRAME_H

