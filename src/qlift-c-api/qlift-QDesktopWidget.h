#ifndef QLIFT_C_API_QLIFT_QDESKTOPWIDGET_H
#define QLIFT_C_API_QLIFT_QDESKTOPWIDGET_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QDesktopWidget_availableGeometryWidget(void *desktopWidget, void *widget);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QDESKTOPWIDGET_H

