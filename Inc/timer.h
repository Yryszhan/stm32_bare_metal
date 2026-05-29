#ifndef TIMER_H
#define TIMER_H

#define RCC_APB1ENR (*(volatile unsigned int *)0x4002101C)

#define TIM2_CR1 (*(volatile unsigned int *)0x40000000)
#define TIM2_CR2 (*(volatile unsigned int *)0x40000004)
#define TIM2_PSC (*(volatile unsigned int *)0x40000028)
#define TIM2_ARR (*(volatile unsigned int *)0x4000002C)
#define TIM2_EGR (*(volatile unsigned int *)0x40000014)

void timer2_init(void);
void timer2_start(void);

#endif 




