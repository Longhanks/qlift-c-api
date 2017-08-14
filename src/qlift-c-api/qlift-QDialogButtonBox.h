#ifndef QLIFT_C_API_QLIFT_QDIALOGBUTTONBOX_H
#define QLIFT_C_API_QLIFT_QDIALOGBUTTONBOX_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QDialogButtonBox_new(void *parent);
void QDialogButtonBox_delete(void *dialogButtonBox);
int QDialogButtonBox_orientation(void *dialogButtonBox);
void QDialogButtonBox_setOrientation(void *dialogButtonBox, int orientation);
int QDialogButtonBox_standardButtons(void *dialogButtonBox);
void QDialogButtonBox_setStandardButtons(void *dialogButtonBox, int standardButtons);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QDIALOGBUTTONBOX_H

