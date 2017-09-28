#ifndef QLIFT_C_API_QLIFT_QAPPLICATION_H
#define QLIFT_C_API_QLIFT_QAPPLICATION_H

#ifdef __cplusplus
extern "C" {
#endif

void* QApplication_new(int *argc, char *argv[]);
void QApplication_delete(void *application);
void* QApplication_desktop(void);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QAPPLICATION_H

