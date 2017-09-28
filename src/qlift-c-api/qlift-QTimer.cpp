#include <QTimer>

#include "qlift-QTimer.h"


void QTimer_singleShot(int msec, int timerType, void *context, void (*slot_ptr)(void*)) {
    QTimer::singleShot(msec, static_cast<Qt::TimerType>(timerType), [context, slot_ptr]() {
        (*slot_ptr)(context);
    });
}

