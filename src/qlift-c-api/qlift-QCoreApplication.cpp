#include <QCoreApplication>

#define QLIFT_C_API_INTERNAL
#include "qlift-QCoreApplication.h"


void* QCoreApplication_new(int *argc, char *argv[]) {
    return static_cast<QCoreApplication*>(new QCoreApplication {*argc, argv});
}

void QCoreApplication_delete(void *coreApplication) {
    delete static_cast<QCoreApplication*>(coreApplication);
}

int QCoreApplication_exec(void *coreApplication) {
    return static_cast<QCoreApplication*>(coreApplication)->exec();
}

void QCoreApplication_exit(void *coreApplication, int returnCode) {
    static_cast<QCoreApplication*>(coreApplication)->exit(returnCode);
}
