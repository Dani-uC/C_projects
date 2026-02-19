# make --to build
# make upload -- to flash program
# make clean -- to clean directory


MCU=atmega328p
F_CPU=16000000
PROGRAMMER=arduino
PORT=/dev/ttyACM0

TARGET=blink
all:hex
%.o: %.c
	avr-gcc -mmcu=$(MCU) -DF_CPU=$(F_CPU) -Os -c $< -o $@

$(TARGET).elf:blink.o
	avr-gcc -mmcu=$(MCU) blink.o -o $(TARGET).elf

hex: $(TARGET).elf
	avr-objcopy -O ihex -R .eeprom $(TARGET).elf $(TARGET).hex

upload:hex
	avrdude -c $(PROGRAMMER) -p atmega328p -P $(PORT) -b 115200 -U flash:w:$(TARGET).hex:i

clean:
	rm -f *.o *.elf *.hex
