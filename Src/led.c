#include "led.h"

void led_init(void){

    RCC_APB2ENR |= (1 << 4);

    GPIO_CRH &= ~(0xF << 20);
    GPIO_CRH |= (0x2 << 20);

}

void led_blink(unsigned int delay_time_on , unsigned int delay_time_off){

    GPIO_ODR_LED &= ~(1 << 13);
    for(volatile int i = 0; i < delay_time_on; i++);

    GPIO_ODR_LED |= (1 << 13);
    for(volatile int i = 0; i < delay_time_off; i++);
}

void led_on(){
    GPIO_ODR_LED &= ~(1 << 13);
}

void led_off(){
    GPIO_ODR_LED |= (1 << 13);
}

