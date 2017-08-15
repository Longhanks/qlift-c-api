#ifndef QLIFT_C_API_QLIFT_QCOMBOBOX_H
#define QLIFT_C_API_QLIFT_QCOMBOBOX_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QComboBox_new(void *parent);
void QComboBox_delete(void *comboBox);
void QComboBox_addItem(void *comboBox, const char *text, void *userData);
void QComboBox_currentIndexChangedInt_connect(void *comboBox, void *receiver, void *info, void (*slot_ptr)(void*, int));
void QComboBox_currentIndexChangedString_connect(void *comboBox, void *receiver, void *info, void (*slot_ptr)(void*, const char*));

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QCOMBOBOX_H

