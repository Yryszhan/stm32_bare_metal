#include "led.h"
//#include "button.h"
#include "delay.h"
#include "adc.h"
#include "loop.h"
#include "timer.h"

volatile unsigned int val = 0;

int main(void){
  
     led_init();
     delay_init();
     adc1_init();
     timer2_init();

     timer2_start();
    
     while (1) {
      
      val = adc1_read();
      
      if (val > 2048) {
       led_on();
      }
      else {
        led_off();
      }
     }
}

/*void loop(){
 
   val = adc1_read();

   if (val < 2048) {
     led_on();
   }
   else {
      led_off();
   }
} */