#ifndef QLIFT_C_API_QLIFT_QABSTRACTBUTTON_H
#define QLIFT_C_API_QLIFT_QABSTRACTBUTTON_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

const char* QAbstractButton_text(void *abstractButton);
void QAbstractButton_setText(void *abstractButton, const char *text);
void QAbstractButton_clicked_connect(void *abstractButton, void *receiver, void *info, void (*slot_ptr)(void*, int));

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QABSTRACTBUTTON_H

