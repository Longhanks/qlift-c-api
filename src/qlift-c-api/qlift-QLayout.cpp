#include <QLayout>

#define QLIFT_C_API_INTERNAL
#include "qlift-QLayout.h"


bool QLayout_isEnabled(void *layout) {
    return static_cast<QLayout*>(layout)->isEnabled();
}

void QLayout_setEnabled(void *layout, bool enabled) {
    static_cast<QLayout*>(layout)->setEnabled(enabled);
}

int QLayout_sizeConstraint(void *layout) {
    return static_cast<QLayout*>(layout)->sizeConstraint();
}

void QLayout_setSizeConstraint(void *layout, int sizeConstraint) {
    static_cast<QLayout*>(layout)->setSizeConstraint(static_cast<QLayout::SizeConstraint>(sizeConstraint));
}
