#ifndef QLIFT_C_API_QLIFT_QPUSHBUTTON_H
#define QLIFT_C_API_QLIFT_QPUSHBUTTON_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QPushButton_new(void *icon, const char *text, void *parent);
void QPushButton_delete(void *pushButton);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QPUSHBUTTON_H

