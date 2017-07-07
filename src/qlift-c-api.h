#ifndef QLIFT_C_API_H
#define QLIFT_C_API_H

#ifdef __cplusplus
extern "C" {
#endif

// QApplication
void* QApplication_new(int *argc, char *argv[]);
void QApplication_delete(void *application);

// QCoreApplication
int QCoreApplication_exec(void *coreApplication);
void QCoreApplication_exit(void *coreApplication, int returnCode);

// QMainWindow
void* QMainWindow_new(void *parent, int flags);
void QMainWindow_delete(void *mainWindow);
void QMainWindow_setCentralWidget(void *mainWindow, void *widget);

// QWidget
void QWidget_show(void *widget);

// QLabel
void* QLabel_new(const char *text, void *parent, int flags);
void QLabel_delete(void *label);
void QLabel_setAlignment(void *label, int alignment);

#ifdef __cplusplus
}
#endif

#endif /* QLIFT-C-API-H */
