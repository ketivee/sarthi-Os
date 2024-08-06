#include "panic.h"
#include "efi.h"

void kernel_panic(const char *message) {
    // Simple panic function that just prints the error message
    // In real scenarios, this should halt the CPU or reset the system
    while (1) {
        // Infinite loop to halt the system
    }
}
