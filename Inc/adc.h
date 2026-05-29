#ifndef ADC_H
#define ADC_H 

#define RCC_APB2ENR (*(volatile unsigned int *)0x40021018)
#define RCC_CFGR (*(volatile unsigned int *)0x40021004)
#define GPIOA_CRL (*(volatile unsigned int *)0x40010800)

#define ADC1_SR (*(volatile unsigned int *)0x40012400)
#define ADC1_CR1 (*(volatile unsigned int *)0x40012404)
#define ADC1_CR2 (*(volatile unsigned int *)0x40012408)
#define ADC1_SQR3 (*(volatile unsigned int *)0x40012434)
#define ADC1_DR (*(volatile unsigned int *)0x4001244C)

void adc1_init(void);
unsigned int adc1_read(void);

#endif
