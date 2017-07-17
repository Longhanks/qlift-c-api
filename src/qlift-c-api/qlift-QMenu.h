#ifndef QLIFT_C_API_QLIFT_QMENU_H
#define QLIFT_C_API_QLIFT_QMENU_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif
    
void* QMenu_new(const char *title, void *parent);
void QMenu_delete(void *menu);
const char* QMenu_title(void *menu);
void QMenu_setTitle(void *menu, const char *title);
void* QMenu_menuAction(void *menu);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QMENU_H

