#ifndef QLIFT_C_API_QLIFT_QLAYOUT_H
#define QLIFT_C_API_QLIFT_QLAYOUT_H

#ifdef __cplusplus
extern "C" {
#endif

bool QLayout_isEnabled(void *layout);
void QLayout_setEnabled(void *layout, bool enabled);
int QLayout_sizeConstraint(void *layout);
void QLayout_setSizeConstraint(void *layout, int sizeConstraint);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QLAYOUT_H

