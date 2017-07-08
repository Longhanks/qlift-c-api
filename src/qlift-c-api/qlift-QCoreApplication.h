#ifndef QLIFT_C_API_QLIFT_QCOREAPPLICATION_H
#define QLIFT_C_API_QLIFT_QCOREAPPLICATION_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QCoreApplication_new(int *argc, char *argv[]);
void QCoreApplication_delete(void *coreApplication);
int QCoreApplication_exec(void *coreApplication);
void QCoreApplication_exit(void *coreApplication, int returnCode);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QCOREAPPLICATION_H
