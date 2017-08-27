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
void* QRect_center(void *rect);
int QRect_x(void *rect);
int QRect_y(void *rect);
void QRect_setX(void *rect, int x);
void QRect_setY(void *rect, int y);
int QRect_height(void *rect);
int QRect_width(void *rect);
void QRect_setHeight(void *rect, int height);
void QRect_setWidth(void *rect, int width);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QRECT_H

