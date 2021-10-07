#include <mega16.h>
#include <delay.h>


int n=0;
void main(void)
{

DDRA =0x00;
DDRB =0xFF;

while (1)
{
if (PINA.0==1){
for(n=0;n<8;n++){
PORTB = PORTB *2 ;
 delay_ms(100);   
} 
for(n=0;n<8;n++){
PORTB = PORTB /2 ;
delay_ms(100);   
                } 
             }
                
      }
}
