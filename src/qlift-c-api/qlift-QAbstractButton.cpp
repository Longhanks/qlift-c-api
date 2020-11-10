#include <QAbstractButton>

#include "qlift-QAbstractButton.h"

[[maybe_unused]] const char *QAbstractButton_text(void *abstractButton) {
    return static_cast<QAbstractButton *>(abstractButton)
        ->text()
        .toLocal8Bit()
        .data();
}

[[maybe_unused]] void QAbstractButton_setText(void *abstractButton,
                                              const char *text) {
    static_cast<QAbstractButton *>(abstractButton)->setText(text);
}

[[maybe_unused]] void QAbstractButton_clicked_connect(void *abstractButton,
                                                      void *receiver,
                                                      void *context,
                                                      void (*slot_ptr)(void *,
                                                                       bool)) {
    QObject::connect(
        static_cast<QAbstractButton *>(abstractButton),
        &QAbstractButton::clicked,
        static_cast<QObject *>(receiver),
        [context, slot_ptr](bool checked) { (*slot_ptr)(context, checked); });
}
