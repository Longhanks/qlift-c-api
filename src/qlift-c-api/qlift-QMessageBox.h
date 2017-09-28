#ifndef QLIFT_C_API_QLIFT_QMESSAGEBOX_H
#define QLIFT_C_API_QLIFT_QMESSAGEBOX_H

#ifdef __cplusplus
extern "C" {
#endif

void* QMessageBox_new(void *parent);
void QMessageBox_delete(void *messageBox);
void QMessageBox_setWindowModality(void *messageBox, int windowModality);
void QMessageBox_setWindowTitle(void *messageBox, const char *title);
void QMessageBox_setIcon(void *messageBox, int icon);
void QMessageBox_setText(void *messageBox, const char *text);
void QMessageBox_setStandardButtons(void *messageBox, int buttons);
void QMessageBox_setDefaultButtonStandardButton(void *messageBox, int button);
int QMessageBox_exec(void *messageBox);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QMESSAGEBOX_H

