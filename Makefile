TARGET = bare_metal_blink
CC = arm-none-eabi-gcc
OBJCOPY = arm-none-eabi-objcopy

MCU = -mcpu=cortex-m3 -mthumb

CFLAGS = $(MCU) -Wall -O0 -g3 -IInc
LDFLAGS = $(MCU) -T"STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map=$(TARGET).map -Wl,--gc-sections

# 4. Поиск всех файлов .c и .s в проекте
SRCS = $(wildcard Src/*.c) $(wildcard Startup/*.s)
OBJS = $(SRCS:.c=.o)
OBJS := $(OBJS:.s=.o)

# 5. Главное правило сборки
all: $(TARGET).elf $(TARGET).bin

$(TARGET).elf: $(SRCS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) -O binary $< $@

# 6. Очистка проекта
clean:
	rm -f *.elf *.bin *.map Src/*.o Startup/*.o