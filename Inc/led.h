#ifndef LED_H
#define LED_H

#define RCC_APB2ENR (*(volatile unsigned int *)0x40021018)
#define GPIO_CRH (*(volatile unsigned int *)0x40011004)
#define GPIO_ODR_LED (*(volatile unsigned int *)0x4001100C)

void led_init(void);
void led_blink(unsigned int delay_time_on , unsigned int delay_time_off);
void led_on(void);
void led_off(void);

#endif