#ifndef QLIFT_C_API_QLIFT_QGROUPBOX_H
#define QLIFT_C_API_QLIFT_QGROUPBOX_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QGroupBox_new(const char *title, void *parent);
void QGroupBox_delete(void *groupBox);
void QGroupBox_setAlignment(void *groupBox, int alignment);
const char* QGroupBox_title(void *groupBox);
void QGroupBox_setTitle(void *groupBox, const char *title);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QGROUPBOX_H

