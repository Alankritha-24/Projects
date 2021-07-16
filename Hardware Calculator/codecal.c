//Turns LED on and off
#include <avr/io.h>
#include <util/delay.h>

 
int main (void)
{


  /* Arduino boards have a LED at PB5 */
 //set PB5, pin 13 of arduino as output
  DDRB    |= ((1 << DDB5));
  DDRC    &= ~((1 << DDC0));
  while (1) {
//turn led off
if(PC0==0) {  
    PORTB = ((0<<  PB5));
   _delay_ms(100); 
}
//turn led on
else {
    PORTB = ((1<<  PB5));
    _delay_ms(100); 
  }
}
  /* . */
  return 0;

}
