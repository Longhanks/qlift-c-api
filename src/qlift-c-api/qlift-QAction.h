#ifndef QLIFT_C_API_QLIFT_QACTION_H
#define QLIFT_C_API_QLIFT_QACTION_H

#ifdef __cplusplus
extern "C" {
#endif

void* QAction_new(void *icon, const char *text, void *parent);
void QAction_delete(void *pushButton);
const char* QAction_text(void *action);
void QAction_setText(void *action, const char *text);
void QAction_triggered_connect(void *action, void *receiver, void *context, void (*slot_ptr)(void*, bool));

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QACTION_H

