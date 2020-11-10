#include <QLayout>

#include "qlift-QLayout.h"

[[maybe_unused]] bool QLayout_isEnabled(void *layout) {
    return static_cast<QLayout *>(layout)->isEnabled();
}

[[maybe_unused]] void QLayout_setEnabled(void *layout, bool enabled) {
    static_cast<QLayout *>(layout)->setEnabled(enabled);
}

[[maybe_unused]] int QLayout_sizeConstraint(void *layout) {
    return static_cast<QLayout *>(layout)->sizeConstraint();
}

[[maybe_unused]] void QLayout_setSizeConstraint(void *layout,
                                                int sizeConstraint) {
    static_cast<QLayout *>(layout)->setSizeConstraint(
        static_cast<QLayout::SizeConstraint>(sizeConstraint));
}
