#ifndef QLIFT_C_API_QLIFT_QDIALOG_H
#define QLIFT_C_API_QLIFT_QDIALOG_H

#ifdef __cplusplus
extern "C" {
#endif

void* QDialog_new(void *parent, int flags);
void QDialog_delete(void *dialog);
int QDialog_exec(void *dialog);
void QDialog_accept(void *dialog);
void QDialog_reject(void *dialog);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QDIALOG_H

