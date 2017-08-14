#ifndef QLIFT_C_API_QLIFT_QLAYOUT_H
#define QLIFT_C_API_QLIFT_QLAYOUT_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

int QLayout_isEnabled(void *layout);
void QLayout_setEnabled(void *layout, int enabled);
int QLayout_sizeConstraint(void *layout);
void QLayout_setSizeConstraint(void *layout, int sizeConstraint);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QLAYOUT_H

