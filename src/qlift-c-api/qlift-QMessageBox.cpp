#include <QMessageBox>

#include "qlift-QMessageBox.h"


void* QMessageBox_new(void *parent) {
    return static_cast<void*>(new QMessageBox {static_cast<QWidget*>(parent)});
}

void QMessageBox_delete(void *messageBox) {
    delete static_cast<QMessageBox*>(messageBox);
}

void QMessageBox_setWindowModality(void *messageBox, int windowModality) {
    static_cast<QMessageBox*>(messageBox)->setWindowModality(static_cast<Qt::WindowModality>(windowModality));
}

void QMessageBox_setWindowTitle(void *messageBox, const char *title) {
    static_cast<QMessageBox*>(messageBox)->setWindowTitle(title);
}

void QMessageBox_setIcon(void *messageBox, int icon) {
    static_cast<QMessageBox*>(messageBox)->setIcon(static_cast<QMessageBox::Icon>(icon));
}

void QMessageBox_setText(void *messageBox, const char *text) {
    static_cast<QMessageBox*>(messageBox)->setText(text);
}

void QMessageBox_setStandardButtons(void *messageBox, int buttons) {
    static_cast<QMessageBox*>(messageBox)->setStandardButtons(static_cast<QFlags<QMessageBox::StandardButton>>(buttons));
}

void QMessageBox_setDefaultButtonStandardButton(void *messageBox, int button) {
    static_cast<QMessageBox*>(messageBox)->setDefaultButton(static_cast<QMessageBox::StandardButton>(button));
}

int QMessageBox_exec(void *messageBox) {
    return static_cast<QMessageBox*>(messageBox)->exec();
}

