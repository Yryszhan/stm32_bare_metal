#include "button.h"


void button_init(){
 
    RCC_APB2ENR |= (1 << 2);
    
    GPIOA_CRL &= ~(0xF << 0);
    GPIOA_CRL |= (0x8 << 0);
    GPIOA_ODR |= (1 << 0);
}

unsigned int button_read(void){
    
    if((GPIOA_IDR & (1 << 0)) == 0){
        return 1;
    }
    else {
        return 0;
    }
}