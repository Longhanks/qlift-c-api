#ifndef QLIFT_C_API_QLIFT_QMAINWINDOW_H
#define QLIFT_C_API_QLIFT_QMAINWINDOW_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QMainWindow_new(void *parent, int flags);
void QMainWindow_delete(void *mainWindow);
void QMainWindow_setCentralWidget(void *mainWindow, void *widget);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QMAINWINDOW_H
