#ifndef QLIFT_C_API_QLIFT_QACTION_H
#define QLIFT_C_API_QLIFT_QACTION_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QAction_new(void *icon, const char *text, void *parent);
void QAction_delete(void *pushButton);
const char* QAction_text(void *action);
void QAction_setText(void *action, const char *text);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QACTION_H

