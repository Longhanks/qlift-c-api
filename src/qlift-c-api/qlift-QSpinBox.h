#ifndef QLIFT_C_API_QLIFT_QSPINBOX_H
#define QLIFT_C_API_QLIFT_QSPINBOX_H

#ifdef __cplusplus
extern "C" {
#endif

void* QSpinBox_new(void *parent);
void QSpinBox_delete(void *spinBox);
int QSpinBox_value(void *spinBox);
void QSpinBox_setValue(void *spinBox, int value);
int QSpinBox_minimum(void *spinBox);
void QSpinBox_setMinimum(void *spinBox, int min);
int QSpinBox_maximum(void *spinBox);
void QSpinBox_setMaximum(void *spinBox, int max);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QSPINBOX_H

