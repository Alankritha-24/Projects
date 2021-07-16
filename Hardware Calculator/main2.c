#include <avr/io.h>
#include <util/delay.h>
int main(void)
    {
DDRC=0x00;// for input port-LED
DDRD=0xff;// for output port-Switch
while(1)
      {
          if(PC0==0x01)// checking the status of PIN, if it is '1', turns on the LED
        {
          _delay_ms(100); // for debouncing of switch
           PORTD=0x00;   // Turning on the LED
        }
           else if(PC0==0x00)// checking the status of PIN, if it is '0', turns off the LED
        {
           _delay_ms(100); // For debouncing of switch
            PORTD=0x01;// Turning off the LED
        }
     }
}
