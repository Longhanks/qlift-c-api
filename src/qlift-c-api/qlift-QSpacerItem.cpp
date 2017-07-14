#include <QSpacerItem>

#define QLIFT_C_API_INTERNAL
#include "qlift-QSpacerItem.h"


void* QSpacerItem_new(int w, int h, int hPolicy, int vPolicy) {
    return static_cast<void *>(new QSpacerItem {w, h, static_cast<QSizePolicy::Policy>(hPolicy), static_cast<QSizePolicy::Policy>(vPolicy)});
}

void QSpacerItem_delete(void *spacerItem) {
    delete static_cast<QSpacerItem *>(spacerItem);
}

