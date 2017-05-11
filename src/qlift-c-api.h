#ifndef QLIFT_C_API_H
#define QLIFT_C_API_H

#ifdef __cplusplus
extern "C" {
#endif
    void* QApplication_ctor(int argc, char *argv[]);
    int QApplication_exec(void *app);
    void* QMainWindow_ctor_parent_default_flags_default(void);
    void* QMainWindow_ctor_parent_arg1_flags_default(void *parent);
    void* QMainWindow_ctor_parent_arg1_flags_arg2(void *parent, int flags);
    void QMainWindow_setCentralWidget(void *mainWindow, void *widget);
    void QMainWindow_show(void *mainWindow);
    void* QLabel_ctor_parent_default_flags_default(void);
    void* QLabel_ctor_text_arg1_parent_default_flags_default(const char *text);
    void* QLabel_ctor_text_arg1_parent_arg2_flags_default(const char *text, void *parent);
    void* QLabel_ctor_text_arg1_parent_default_flags_arg3(const char *text, void *parent, int flags);
    void QLabel_setAlignment(void *label, int alignment);
#ifdef __cplusplus
}
#endif

#endif /* QLIFT-C-API-H */
