#ifndef QLIFT_C_API_QLIFT_QMOUSEEVENT_H
#define QLIFT_C_API_QLIFT_QMOUSEEVENT_H

#ifdef __cplusplus
extern "C" {
#endif

void QMouseEvent_delete(void *mouseEvent);
int QMouseEvent_button(void *mouseEvent);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QMOUSEEVENT_H

