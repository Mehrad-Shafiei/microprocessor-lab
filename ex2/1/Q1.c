#include <mega16.h>

static unsigned  int timecounter ;

interrupt [TIM0_OVF] void timer0_ovf_isr(void)
{  
    TCNT0 = 31;
       ++timecounter; 
    if (timecounter == 3333)
  {
        PORTC.0 = (PORTC.0 ^ 1); 
        timecounter = 0; 
   }

}

void main(void)
{

    DDRC = 0x01; 
    TCCR0=0x02;
    TCNT0=31;
    TIMSK=0x01;
    /* enable interrupts */
    #asm("sei")
    while(1) 
    {

      }
}
