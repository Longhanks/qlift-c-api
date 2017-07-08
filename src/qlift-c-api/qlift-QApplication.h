#ifndef QLIFT_C_API_QLIFT_QAPPLICATION_H
#define QLIFT_C_API_QLIFT_QAPPLICATION_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QApplication_new(int *argc, char *argv[]);
void QApplication_delete(void *application);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QAPPLICATION_H
