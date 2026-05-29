#ifndef BUTTON_H
#define BUTTON_H

#define RCC_APB2ENR (*(volatile unsigned int *)0x40021018)

#define GPIOA_CRL (*(volatile unsigned int *)0x40010800)
#define GPIOA_IDR (*(volatile unsigned int *)0x40010808)
#define GPIOA_ODR (*(volatile unsigned int *)0x4001080C)

void button_init(void);
unsigned int button_read(void);

#endif
