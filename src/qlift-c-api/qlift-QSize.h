#ifndef QLIFT_C_API_QLIFT_QSIZE_H
#define QLIFT_C_API_QLIFT_QSIZE_H

#ifdef __cplusplus
extern "C" {
#endif

void* QSize_new(int width, int height);
void QSize_delete(void *size);
int QSize_width(void *size);
int QSize_height(void *size);
void QSize_setWidth(void *size, int width);
void QSize_setHeight(void *size, int height);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QSIZE_H

