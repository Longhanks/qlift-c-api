#ifndef QLIFT_C_API_QLIFT_QPOINT_H
#define QLIFT_C_API_QLIFT_QPOINT_H

#ifdef __cplusplus
extern "C" {
#endif

void* QPoint_new(int x, int y);
void QPoint_delete(void *point);
bool QPoint_isNull(void *point);
int QPoint_manhattanLength(void *point);
int QPoint_x(void *point);
int QPoint_y(void *point);
void QPoint_setX(void *point, int x);
void QPoint_setY(void *point, int y);
bool QPoint_equal(void *p1, void *p2);
bool QPoint_unequal(void *p1, void *p2);
void* QPoint_add(void *p1, void *p2);
void* QPoint_substract(void *p1, void *p2);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QPOINT_H

