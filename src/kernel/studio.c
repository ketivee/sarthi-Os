#include "studio.h"
#include "efi.h"

void studio_init(EFI_SYSTEM_TABLE *SystemTable) {
    SystemTable->ConOut->ClearScreen(SystemTable->ConOut);
}

void studio_draw_icon(EFI_SYSTEM_TABLE *SystemTable, CHAR16 *icon_path, UINTN x, UINTN y) {
    // Placeholder for drawing icon logic
    // This will require a function to load the bitmap and draw it on screen
}

void studio_draw_text(EFI_SYSTEM_TABLE *SystemTable, CHAR16 *text, UINTN x, UINTN y) {
    SystemTable->ConOut->SetCursorPosition(SystemTable->ConOut, x, y);
    SystemTable->ConOut->OutputString(SystemTable->ConOut, text);
}
