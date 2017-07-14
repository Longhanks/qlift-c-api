#ifndef QLIFT_C_API_QLIFT_QHBOXLAYOUT_H
#define QLIFT_C_API_QLIFT_QHBOXLAYOUT_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QHBoxLayout_new(void *parent);
void QHBoxLayout_delete(void *hBoxLayout);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QHBOXLAYOUT_H

