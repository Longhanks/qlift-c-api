#include <QLayoutItem>

#define QLIFT_C_API_INTERNAL
#include "qlift-QLayoutItem.h"


int QLayoutItem_alignment(void *layoutItem) {
    return static_cast<QLayoutItem *>(layoutItem)->alignment();
}

void QLayoutItem_setAlignment(void *layoutItem, int alignment) {
    QFlags<Qt::AlignmentFlag> flag {alignment};
    static_cast<QLayoutItem*>(layoutItem)->setAlignment(flag);
}

