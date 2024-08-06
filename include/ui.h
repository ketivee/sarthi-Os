#ifndef UI_H
#define UI_H

#include "efi.h"

void show_main_menu(EFI_SYSTEM_TABLE *SystemTable);
void show_partition_menu(EFI_SYSTEM_TABLE *SystemTable);
void show_import_menu(EFI_SYSTEM_TABLE *SystemTable);

#endif
