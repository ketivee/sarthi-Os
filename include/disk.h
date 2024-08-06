#ifndef DISK_H
#define DISK_H

#include "efi.h"

EFI_STATUS format_disk_with_srfs(EFI_SYSTEM_TABLE *SystemTable, EFI_HANDLE DiskHandle);
EFI_STATUS create_partition(EFI_SYSTEM_TABLE *SystemTable, EFI_HANDLE DiskHandle);
EFI_STATUS import_files_from_other_os(EFI_SYSTEM_TABLE *SystemTable, EFI_HANDLE DiskHandle);

#endif
