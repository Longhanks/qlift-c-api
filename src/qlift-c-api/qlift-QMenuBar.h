#ifndef QLIFT_C_API_QLIFT_QMENUBAR_H
#define QLIFT_C_API_QLIFT_QMENUBAR_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void* QMenuBar_new(void *parent);
void QMenuBar_delete(void *menuBar);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QMENUBAR_H

