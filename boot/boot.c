#include "efi.h"
#include "efiapi.h"
#include "ui.h"

EFI_STATUS EFIAPI efi_main(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
    SystemTable->ConOut->ClearScreen(SystemTable->ConOut);
    show_main_menu(SystemTable);
    return EFI_SUCCESS;
}
