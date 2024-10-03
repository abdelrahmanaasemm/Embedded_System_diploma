#@copyright : asem

learn.bin: uart.c app.c startup.s
	arm-none-eabi-as.exe -g -mcpu=arm926ej-s startup.s -o startup.o
	arm-none-eabi-gcc.exe -g -c -I . -mcpu=arm926ej-s app.c -o app.o
	arm-none-eabi-gcc.exe -g -c -I . -mcpu=arm926ej-s uart.c -o uart.o
	arm-none-eabi-ld.exe -T linkerscript.ld startup.o app.o uart.o -o learn.elf
	arm-none-eabi-objcopy.exe -O binary learn.elf learn.bin
clean :
	rm *.o *.bin *.elf