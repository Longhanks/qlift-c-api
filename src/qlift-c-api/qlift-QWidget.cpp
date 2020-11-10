#include <QWidget>

#include "qlift-QWidget.h"

[[maybe_unused]] void *QWidget_new(void *parent, int flags) {
    return static_cast<void *>(
        new QWidget{static_cast<QWidget *>(parent),
                    static_cast<QFlags<Qt::WindowType>>(flags)});
}

[[maybe_unused]] void QWidget_delete(void *widget) {
    delete static_cast<QWidget *>(widget);
}

[[maybe_unused]] bool QWidget_close(void *widget) {
    return static_cast<QWidget *>(widget)->close();
}

[[maybe_unused]] void QWidget_show(void *widget) {
    static_cast<QWidget *>(widget)->show();
}

[[maybe_unused]] void QWidget_addAction(void *widget, void *action) {
    static_cast<QWidget *>(widget)->addAction(static_cast<QAction *>(action));
}

[[maybe_unused]] const char *QWidget_windowTitle(void *widget) {
    return static_cast<QWidget *>(widget)->windowTitle().toLocal8Bit().data();
}

[[maybe_unused]] void QWidget_setWindowTitle(void *widget, const char *title) {
    static_cast<QWidget *>(widget)->setWindowTitle(title);
}

[[maybe_unused]] void *QWidget_geometry(void *widget) {
    auto stackRect = static_cast<QWidget *>(widget)->geometry();
    return static_cast<void *>(new QRect{
        stackRect.x(), stackRect.y(), stackRect.width(), stackRect.height()});
}

[[maybe_unused]] void QWidget_setGeometry(void *widget, void *rect) {
    if (rect != nullptr) {
        static_cast<QWidget *>(widget)->setGeometry(
            *static_cast<QRect *>(rect));
    } else {
        static_cast<QWidget *>(widget)->setGeometry(QRect());
    }
}

[[maybe_unused]] bool QWidget_isEnabled(void *widget) {
    return static_cast<QWidget *>(widget)->isEnabled();
}

[[maybe_unused]] void QWidget_setEnabled(void *widget, bool enabled) {
    static_cast<QWidget *>(widget)->setEnabled(enabled);
}

[[maybe_unused]] int QWidget_height(void *widget) {
    return static_cast<QWidget *>(widget)->height();
}

[[maybe_unused]] int QWidget_width(void *widget) {
    return static_cast<QWidget *>(widget)->width();
}

[[maybe_unused]] void *QWidget_pos(void *widget) {
    auto stackPoint = static_cast<QWidget *>(widget)->pos();
    return static_cast<void *>(new QPoint{stackPoint.x(), stackPoint.y()});
}

[[maybe_unused]] void QWidget_move(void *widget, void *point) {
    if (point != nullptr) {
        static_cast<QWidget *>(widget)->move(*static_cast<QPoint *>(point));
    } else {
        static_cast<QWidget *>(widget)->move(QPoint());
    }
}

[[maybe_unused]] void *QWidget_window(void *widget) {
    return static_cast<void *>(static_cast<QWidget *>(widget)->window());
}

[[maybe_unused]] void *QWidget_rect(void *widget) {
    auto stackRect = static_cast<QWidget *>(widget)->rect();
    return static_cast<void *>(new QRect{
        stackRect.x(), stackRect.y(), stackRect.width(), stackRect.height()});
}

[[maybe_unused]] void QWidget_resize(void *widget, int w, int h) {
    static_cast<QWidget *>(widget)->resize(w, h);
}

[[maybe_unused]] void *QWidget_frameGeometry(void *widget) {
    auto stackRect = static_cast<QWidget *>(widget)->frameGeometry();
    return static_cast<void *>(new QRect{
        stackRect.x(), stackRect.y(), stackRect.width(), stackRect.height()});
}

[[maybe_unused]] bool QWidget_isWindow(void *widget) {
    return static_cast<QWidget *>(widget)->isWindow();
}

[[maybe_unused]] void *QWidget_maximumSize(void *widget) {
    auto stackSize = static_cast<QWidget *>(widget)->maximumSize();
    return new QSize{stackSize.width(), stackSize.height()};
}

[[maybe_unused]] void QWidget_setMaximumSize(void *widget, void *size) {
    if (size != nullptr) {
        static_cast<QWidget *>(widget)->setMaximumSize(
            *static_cast<QSize *>(size));
    } else {
        static_cast<QWidget *>(widget)->setMaximumSize(QSize());
    }
}

[[maybe_unused]] const char *QWidget_styleSheet(void *widget) {
    return static_cast<QWidget *>(widget)->styleSheet().toLocal8Bit().data();
}

[[maybe_unused]] void QWidget_setStyleSheet(void *widget,
                                            const char *styleSheet) {
    static_cast<QWidget *>(widget)->setStyleSheet(styleSheet);
}
