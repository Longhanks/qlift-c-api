#ifndef QLIFT_C_API_QLIFT_QGUIAPPLICATION_H
#define QLIFT_C_API_QLIFT_QGUIAPPLICATION_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QGuiApplication_new(int *argc, char *argv[]);
void QGuiApplication_delete(void *guiApplication);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QGUIAPPLICATION_H

