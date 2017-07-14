#include <QLayoutItem>

#define QLIFT_C_API_INTERNAL
#include "qlift-QLayoutItem.h"


unsigned int QLayoutItem_alignment(void *layoutItem) {
    return static_cast<QLayoutItem *>(layoutItem)->alignment();
}

void QLayoutItem_setAlignment(void *layoutItem, int alignment) {
    static_cast<QLayoutItem*>(layoutItem)->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

