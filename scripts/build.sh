#!/bin/bash

# Set up paths
EDK2_DIR=/path/to/edk2
EDK2_OUTPUT_DIR=$EDK2_DIR/Build/SarthiOS/DEBUG_X64

# Build UEFI bootloader
clang -target x86_64-unknown-windows -ffreestanding -O2 -Wall -I include -c boot/boot.c -o boot.o
clang -target x86_64-unknown-windows -ffreestanding -O2 -Wall -I include -c boot/ui.c -o ui.o
clang -target x86_64-unknown-windows -ffreestanding -O2 -Wall -I include -c boot/disk.c -o disk.o
clang -target x86_64-unknown-windows -ffreestanding -O2 -Wall -I include -c boot/net.c -o net.o
lld-link /subsystem:efi_application /entry:efi_main boot.o ui.o disk.o net.o /out:bootx64.efi

# Build kernel
gcc -ffreestanding -m64 -O2 -c src/kernel/main.c -o src/kernel/main.o
gcc -ffreestanding -m64 -O2 -c src/kernel/panic.c -o src/kernel/panic.o
# Add other source files compilation here

ld -n -o kernel.bin -Ttext 0x1000 --oformat binary src/kernel/main.o src/kernel/panic.o
cat bootx64.efi kernel.bin > sarthi_os.bin
