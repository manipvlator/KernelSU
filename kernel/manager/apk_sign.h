#ifndef __KSU_H_APK_V2_SIGN
#define __KSU_H_APK_V2_SIGN

#include <linux/types.h>
#include <linux/compiler.h>

enum ksu_manager_type {
	KSU_MANAGER_UNKNOWN = 0,
	KSU_MANAGER_KSUN,
	KSU_MANAGER_RESUKISU,
	KSU_MANAGER_OTHER,
};

bool is_manager_apk(char *path);
enum ksu_manager_type ksu_detect_manager_apk(char *path);
void ksu_set_manager_type(enum ksu_manager_type type);
u32 ksu_get_manager_version(void);
const char *ksu_get_manager_version_tag(void);
int get_pkg_from_apk_path(char *pkg, const char *path);

#endif
