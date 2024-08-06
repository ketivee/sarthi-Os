#include "efi.h"
#include "efiapi.h"
#include "studio.h"
#include "panic.h"
#include "resource.h"
#include "file_system.h"
#include "memory.h"

EFI_STATUS efi_main(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
    studio_init(SystemTable);
    studio_draw_text(SystemTable, L"Welcome to Sarthi OS", 0, 0);

void kernel_main() {
    init_memory_manager();
    init_resource_manager();
    // More initialization code
    printf("Welcome to Sarthi OS!\n");
}

int main() {
    kernel_main();
    return 0;
}
