OBJS = src/kernel/main.o src/kernel/panic.o src/kernel/file_system.o src/kernel/terminal.o

all: bootx64.efi kernel.bin sarthi_os.bin

bootx64.efi: boot/boot.c boot/gui.c boot/disk.c boot/net.c boot/graphics.c
    clang -target x86_64-unknown-windows -ffreestanding -O2 -Wall -I include -c boot/boot.c -o boot.o
    clang -target x86_64-unknown-windows -ffreestanding -O2 -Wall -I include -c boot/gui.c -o gui.o
    clang -target x86_64-unknown-windows -ffreestanding -O2 -Wall -I include -c boot/disk.c -o disk.o
    clang -target x86_64-unknown-windows -ffreestanding -O2 -Wall -I include -c boot/net.c -o net.o
    clang -target x86_64-unknown-windows -ffreestanding -O2 -Wall -I include -c boot/graphics.c -o graphics.o
    lld-link /subsystem:efi_application /entry:efi_main boot.o gui.o disk.o net.o graphics.o /out:bootx64.efi

kernel.bin: $(OBJS)
    ld -n -o kernel.bin -Ttext 0x1000 --oformat binary $(OBJS)

sarthi_os.bin: bootx64.efi kernel.bin
    cat bootx64.efi kernel.bin > sarthi_os.bin

%.o: %.c
    gcc -ffreestanding -m64 -O2 -c $< -o $@

clean:
    rm -f boot.o gui.o disk.o net.o graphics.o bootx64.efi kernel.bin sarthi_os.bin $(OBJS)
