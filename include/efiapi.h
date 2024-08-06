#ifndef EFIAPI_H
#define EFIAPI_H

#include <stddef.h>
#include <stdint.h>
#include "efi.h"

EFI_STATUS efi_main(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable);

#endif
