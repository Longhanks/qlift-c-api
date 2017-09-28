#ifndef QLIFT_C_API_QLIFT_QLABEL_H
#define QLIFT_C_API_QLIFT_QLABEL_H

#ifdef __cplusplus
extern "C" {
#endif

void* QLabel_new(const char *text, void *parent, int flags);
void QLabel_delete(void *label);
void QLabel_setAlignment(void *label, int alignment);
const char* QLabel_text(void *label);
void QLabel_setText(void *label, const char *text);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QLABEL_H

