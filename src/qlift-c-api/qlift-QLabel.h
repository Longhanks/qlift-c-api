#ifndef QLIFT_C_API_QLIFT_QLABEL_H
#define QLIFT_C_API_QLIFT_QLABEL_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QLabel_new(const char *text, void *parent, int flags);
void QLabel_delete(void *label);
void QLabel_setAlignment(void *label, int alignment);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QLABEL_H

