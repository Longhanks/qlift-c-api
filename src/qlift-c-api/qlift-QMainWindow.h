#ifndef QLIFT_C_API_QLIFT_QMAINWINDOW_H
#define QLIFT_C_API_QLIFT_QMAINWINDOW_H

#ifdef __cplusplus
extern "C" {
#endif

void* QMainWindow_new(void *parent, int flags);
void QMainWindow_delete(void *mainWindow);
void* QMainWindow_centralWidget(void *mainWindow);
void QMainWindow_setCentralWidget(void *mainWindow, void *widget);
void* QMainWindow_menuBar(void *mainWindow);
void QMainWindow_setMenuBar(void *mainWindow, void *menuBar);
void QMainWindow_closeEvent(void *mainWindow, void *event);
void QMainWindow_closeEvent_Override(void *mainWindow, void *context, void (*closeEvent_Functor)(void*, void*));

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
#include <wobjectdefs.h>
class QliftMainWindow: public QMainWindow {
    W_OBJECT(QliftMainWindow)

    public:
        using QMainWindow::QMainWindow;
        virtual ~QliftMainWindow();
        void (*closeEvent_Functor)(void*, void*) = nullptr;
        void *context = nullptr;
        void closeEventSuper(QCloseEvent *e);

    protected:
        virtual void closeEvent(QCloseEvent *e) override;
};
#endif

#endif //QLIFT_C_API_QLIFT_QMAINWINDOW_H

