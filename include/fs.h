#ifndef FS_H
#define FS_H

#include "efi.h"

EFI_STATUS read_from_ntfs(EFI_SYSTEM_TABLE *SystemTable, EFI_HANDLE DiskHandle);
EFI_STATUS read_from_apfs(EFI_SYSTEM_TABLE *SystemTable, EFI_HANDLE DiskHandle);

#endif
