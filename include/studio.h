#ifndef STUDIO_H
#define STUDIO_H

#include <stddef.h>
#include <stdint.h>
#include "efi.h"

void studio_init(EFI_SYSTEM_TABLE *SystemTable);
void studio_draw_icon(EFI_SYSTEM_TABLE *SystemTable, CHAR16 *icon_path, UINTN x, UINTN y);
void studio_draw_text(EFI_SYSTEM_TABLE *SystemTable, CHAR16 *text, UINTN x, UINTN y);

#endif
