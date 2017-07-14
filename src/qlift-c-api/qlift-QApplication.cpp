#include <QApplication>

#define QLIFT_C_API_INTERNAL
#include "qlift-QApplication.h"


void* QApplication_new(int *argc, char *argv[]) {
    return static_cast<void*>(new QApplication {*argc, argv});
}

void QApplication_delete(void *application) {
    delete static_cast<QApplication*>(application);
}

