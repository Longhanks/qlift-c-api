#ifndef QLIFT_C_API_QLIFT_QPUSHBUTTON_H
#define QLIFT_C_API_QLIFT_QPUSHBUTTON_H

#ifdef __cplusplus
extern "C" {
#endif

void* QPushButton_new(void *icon, const char *text, void *parent);
void QPushButton_delete(void *pushButton);
void QPushButton_mousePressEvent(void *pushButton, void *mouseEvent);
void QPushButton_mousePressEvent_Override(void *pushButton, void *context, void (*mousePressEvent_Functor)(void*, void*));

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
#include <wobjectdefs.h>
class QliftPushButton: public QPushButton {
    W_OBJECT(QliftPushButton)

    public:
        using QPushButton::QPushButton;
        virtual ~QliftPushButton();
        void (*mousePressEvent_Functor)(void*, void*) = nullptr;
        void *context = nullptr;
        void mousePressEventSuper(QMouseEvent *e);

    protected:
        virtual void mousePressEvent(QMouseEvent *e) override;
};
#endif

#endif //QLIFT_C_API_QLIFT_QPUSHBUTTON_H

