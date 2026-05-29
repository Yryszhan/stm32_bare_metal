#include "timer.h"

void timer2_init(){

    RCC_APB1ENR |= (1 << 0);

    TIM2_PSC = 7200 - 1;

    TIM2_ARR = 10000 - 1;

    TIM2_CR2 &= ~(7 << 4);
    TIM2_CR2 |= (2 << 4);

    TIM2_EGR |= (1 << 0);
}

void timer2_start(){

    TIM2_CR1 |= (1 << 0);
}