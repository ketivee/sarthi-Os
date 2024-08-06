#ifndef EFI_H
#define EFI_H

#include <stddef.h>
#include <stdint.h>

typedef uint64_t EFI_STATUS;
typedef void *EFI_HANDLE;

typedef struct {
    void (*Reset)(void *This, int ExtendedVerification);
    void (*OutputString)(void *This, const CHAR16 *String);
    void (*TestString)(void *This, const CHAR16 *String);
    void (*QueryMode)(void *This, uint64_t ModeNumber, uint64_t *Columns, uint64_t *Rows);
    void (*SetMode)(void *This, uint64_t ModeNumber);
    void (*SetAttribute)(void *This, uint64_t Attribute);
    void (*ClearScreen)(void *This);
    void (*SetCursorPosition)(void *This, uint64_t Column, uint64_t Row);
    void (*EnableCursor)(void *This, int Visible);
} EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL;

typedef struct {
    EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *ConOut;
} EFI_SYSTEM_TABLE;

#define EFI_SUCCESS 0

#endif

