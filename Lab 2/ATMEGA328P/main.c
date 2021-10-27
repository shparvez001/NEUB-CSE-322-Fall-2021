#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
  DDRB=0xff; //Declare full port C as output
  while(1)
  {
    PORTB=0x00;      //Turn of all output
    _delay_ms(1000);  //Wait for 100ms
    PORTB=0xff;      //Turn on all output
    _delay_ms(1000);  //Wait for 100 ms
  }
}