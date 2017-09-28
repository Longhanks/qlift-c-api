#ifndef QLIFT_C_API_QLIFT_QDIALOGBUTTONBOX_H
#define QLIFT_C_API_QLIFT_QDIALOGBUTTONBOX_H

#ifdef __cplusplus
extern "C" {
#endif

void* QDialogButtonBox_new(void *parent);
void QDialogButtonBox_delete(void *dialogButtonBox);
int QDialogButtonBox_orientation(void *dialogButtonBox);
void QDialogButtonBox_setOrientation(void *dialogButtonBox, int orientation);
int QDialogButtonBox_standardButtons(void *dialogButtonBox);
void QDialogButtonBox_setStandardButtons(void *dialogButtonBox, int standardButtons);
void QDialogButtonBox_accepted_connect(void *dialogButtonBox, void *receiver, void *context, void (*slot_ptr)(void*));
void QDialogButtonBox_rejected_connect(void *dialogButtonBox, void *receiver, void *context, void (*slot_ptr)(void*));

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QDIALOGBUTTONBOX_H

