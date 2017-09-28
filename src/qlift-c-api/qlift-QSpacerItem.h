#ifndef QLIFT_C_API_QLIFT_QSPACERITEM_H
#define QLIFT_C_API_QLIFT_QSPACERITEM_H

#ifdef __cplusplus
extern "C" {
#endif

void* QSpacerItem_new(int w, int h, int hPolicy, int vPolicy);
void QSpacerItem_delete(void *spacerItem);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QSPACERITEM_H

