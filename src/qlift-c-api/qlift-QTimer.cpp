#include <QTimer>

#define QLIFT_C_API_INTERNAL
#include "qlift-QTimer.h"


void QTimer_singleShot(int msec, int timerType, void (*slot_ptr)(void)) {
    QTimer::singleShot(msec, static_cast<Qt::TimerType>(timerType), slot_ptr);
}

