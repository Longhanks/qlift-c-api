#include <QRect>

#define QLIFT_C_API_INTERNAL
#include "qlift-QRect.h"


void* QRect_new(int x, int y, int width, int height) {
    return static_cast<void*>(new QRect {x, y, width, height});
}

void QRect_delete(void *rect) {
    delete static_cast<QRect*>(rect);
}

int QRect_x(void *rect) {
    return static_cast<QRect*>(rect)->x();
}

int QRect_y(void *rect) {
    return static_cast<QRect*>(rect)->y();
}

void QRect_setX(void *rect, int x) {
    static_cast<QRect*>(rect)->setX(x);
}

void QRect_setY(void *rect, int y) {
    static_cast<QRect*>(rect)->setY(y);
}

int QRect_height(void *rect) {
    return static_cast<QRect*>(rect)->height();
}

int QRect_width(void *rect) {
    return static_cast<QRect*>(rect)->width();
}

void QRect_setHeight(void *rect, int height) {
    static_cast<QRect*>(rect)->setHeight(height);
}

void QRect_setWidth(void *rect, int width) {
    static_cast<QRect*>(rect)->setHeight(width);
}


// Positional functions

void* QRect_center(void *rect) {
    auto stackPoint = static_cast<QRect*>(rect)->center();
    return static_cast<void*>(new QPoint {stackPoint.x(), stackPoint.y()});
}

void QRect_moveCenter(void *rect, void *pos) {
    if (pos) {
        static_cast<QRect*>(rect)->moveCenter(*static_cast<QPoint*>(pos));
    } else {
        static_cast<QRect*>(rect)->moveCenter(QPoint());
    }
}

int QRect_bottom(void *rect) {
    return static_cast<QRect*>(rect)->bottom();
}

void QRect_setBottom(void *rect, int y) {
    static_cast<QRect*>(rect)->setBottom(y);
}

void QRect_moveBottom(void *rect, int y) {
    static_cast<QRect*>(rect)->moveBottom(y);
}

void* QRect_bottomLeft(void *rect) {
    auto stackPoint = static_cast<QRect*>(rect)->bottomLeft();
    return static_cast<void*>(new QPoint {stackPoint.x(), stackPoint.y()});
}

void QRect_setBottomLeft(void *rect, void *pos) {
    if (pos) {
        static_cast<QRect*>(rect)->setBottomLeft(*static_cast<QPoint*>(pos));
    } else {
        static_cast<QRect*>(rect)->setBottomLeft(QPoint());
    }
}

void QRect_moveBottomLeft(void *rect, void *pos) {
    if (pos) {
        static_cast<QRect*>(rect)->moveBottomLeft(*static_cast<QPoint*>(pos));
    } else {
        static_cast<QRect*>(rect)->moveBottomLeft(QPoint());
    }
}

int QRect_left(void *rect) {
    return static_cast<QRect*>(rect)->left();
}

void QRect_setLeft(void *rect, int x) {
    static_cast<QRect*>(rect)->setLeft(x);
}

void QRect_moveLeft(void *rect, int x) {
    static_cast<QRect*>(rect)->moveLeft(x);
}

void* QRect_topLeft(void *rect) {
    auto stackPoint = static_cast<QRect*>(rect)->topLeft();
    return static_cast<void*>(new QPoint {stackPoint.x(), stackPoint.y()});
}

void QRect_setTopLeft(void *rect, void *pos) {
    if (pos) {
        static_cast<QRect*>(rect)->setTopLeft(*static_cast<QPoint*>(pos));
    } else {
        static_cast<QRect*>(rect)->setTopLeft(QPoint());
    }
}

void QRect_moveTopLeft(void *rect, void *pos) {
    if (pos) {
        static_cast<QRect*>(rect)->setBottomLeft(*static_cast<QPoint*>(pos));
    } else {
        static_cast<QRect*>(rect)->setBottomLeft(QPoint());
    }
}

int QRect_top(void *rect) {
    return static_cast<QRect*>(rect)->top();
}

void QRect_setTop(void *rect, int y) {
    static_cast<QRect*>(rect)->setTop(y);
}

void QRect_moveTop(void *rect, int y) {
    static_cast<QRect*>(rect)->moveTop(y);
}

void* QRect_topRight(void *rect) {
    auto stackPoint = static_cast<QRect*>(rect)->topRight();
    return static_cast<void*>(new QPoint {stackPoint.x(), stackPoint.y()});
}

void QRect_setTopRight(void *rect, void *pos) {
    if (pos) {
        static_cast<QRect*>(rect)->setTopRight(*static_cast<QPoint*>(pos));
    } else {
        static_cast<QRect*>(rect)->setTopRight(QPoint());
    }
}

void QRect_moveTopRight(void *rect, void *pos) {
    if (pos) {
        static_cast<QRect*>(rect)->moveTopRight(*static_cast<QPoint*>(pos));
    } else {
        static_cast<QRect*>(rect)->moveTopRight(QPoint());
    }
}

int QRect_right(void *rect) {
    return static_cast<QRect*>(rect)->right();
}

void QRect_setRight(void *rect, int x) {
    static_cast<QRect*>(rect)->setRight(x);
}

void QRect_moveRight(void *rect, int x) {
    static_cast<QRect*>(rect)->moveRight(x);
}

void* QRect_bottomRight(void *rect) {
    auto stackPoint = static_cast<QRect*>(rect)->bottomRight();
    return static_cast<void*>(new QPoint {stackPoint.x(), stackPoint.y()});
}

void QRect_setBottomRight(void *rect, void *pos) {
    if (pos) {
        static_cast<QRect*>(rect)->setBottomRight(*static_cast<QPoint*>(pos));
    } else {
        static_cast<QRect*>(rect)->setBottomRight(QPoint());
    }
}

void QRect_moveBottomRight(void *rect, void *pos) {
    if (pos) {
        static_cast<QRect*>(rect)->moveBottomRight(*static_cast<QPoint*>(pos));
    } else {
        static_cast<QRect*>(rect)->moveBottomRight(QPoint());
    }
}

