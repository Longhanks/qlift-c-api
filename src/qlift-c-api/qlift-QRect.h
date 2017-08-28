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
int QRect_x(void *rect);
int QRect_y(void *rect);
void QRect_setX(void *rect, int x);
void QRect_setY(void *rect, int y);
int QRect_height(void *rect);
int QRect_width(void *rect);
void QRect_setHeight(void *rect, int height);
void QRect_setWidth(void *rect, int width);


// Positional functions

void* QRect_center(void *rect);
void QRect_moveCenter(void *rect, void *pos);

int QRect_bottom(void *rect);
void QRect_setBottom(void *rect, int y);
void QRect_moveBottom(void *rect, int y);

void* QRect_bottomLeft(void *rect);
void QRect_setBottomLeft(void *rect, void *pos);
void QRect_moveBottomLeft(void *rect, void *pos);

int QRect_left(void *rect);
void QRect_setLeft(void *rect, int x);
void QRect_moveLeft(void *rect, int x);

void* QRect_topLeft(void *rect);
void QRect_setTopLeft(void *rect, void *pos);
void QRect_moveTopLeft(void *rect, void *pos);

int QRect_top(void *rect);
void QRect_setTop(void *rect, int y);
void QRect_moveTop(void *rect, int y);

void* QRect_topRight(void *rect);
void QRect_setTopRight(void *rect, void *pos);
void QRect_moveTopRight(void *rect, void *pos);

int QRect_right(void *rect);
void QRect_setRight(void *rect, int x);
void QRect_moveRight(void *rect, int x);

void* QRect_bottomRight(void *rect);
void QRect_setBottomRight(void *rect, void *pos);
void QRect_moveBottomRight(void *rect, void *pos);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QRECT_H

