#ifndef QLIFT_C_API_QLIFT_QDIALOG_H
#define QLIFT_C_API_QLIFT_QDIALOG_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QDialog_new(void *parent, int flags);
void QDialog_delete(void *dialog);
int QDialog_exec(void *dialog);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QDIALOG_H

