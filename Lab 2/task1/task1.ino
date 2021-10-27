#include<avr/io.h>

int main(void)
{
  //setup
  DDRB=0x00; //Declare full port b as input
  DDRC=0xff; //Declare full port C as output
  //DDRD=0x03; //IIII IIOO
  //DDRD|=(1<<2); //Declare PD2 as output
  //DDRD = (1<<DDD3)|(1<<DDD2)|(1<<DDD1)|(1<<DDD0); //Declaring PD0-PD3 as outputs

  unsigned int i;
  
  while(1)
  {
    //loop
    i=PINB;   //Store value of PB0-PB7 as decimal number in i
    PORTC=i;  //Output value of i to PORT C
  }
}

