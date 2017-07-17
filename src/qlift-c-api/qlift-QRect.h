#ifndef QLIFT_C_API_QLIFT_QRECT_H
#define QLIFT_C_API_QLIFT_QRECT_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QRect_new(int x, int y, int width, int height);
void QRect_delete(void *rect);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QRECT_H

