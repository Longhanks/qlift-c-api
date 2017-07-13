#ifndef QLIFT_C_API_QLIFT_QVBOXLAYOUT_H
#define QLIFT_C_API_QLIFT_QVBOXLAYOUT_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QVBoxLayout_new(void *parent);
void QVBoxLayout_delete(void *vBoxLayout);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QVBOXLAYOUT_H
