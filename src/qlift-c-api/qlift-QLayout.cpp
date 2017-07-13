#include <QLayout>

#define QLIFT_C_API_INTERNAL
#include "qlift-QLayout.h"


int QLayout_isEnabled(void *layout) {
    return static_cast<QLayout*>(layout)->isEnabled();
}

void QLayout_setEnabled(void *layout, int enabled) {
    static_cast<QLayout*>(layout)->setEnabled(enabled);
}

