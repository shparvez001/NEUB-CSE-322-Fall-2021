# NEUB CSE 322 Fall 2021 Lab 2
Find all Codes at  [Lab 2](https://github.com/shparvez001/NEUB-CSE-322-Fall-2021/tree/main/Lab%202).
## Task 1
Create a function to output PWM with a specified duty cycle to any given port. eg: ```pwm(port, dutyCycle);```.
```c
#include<avr/io.h>
#include<util/delay.h>
void pwm(char port, int duty)
{
  int ton=100;
  float x=((ton*100)/duty)-ton;
  int toff=(int)x;
  if (port=='B')
  {
    PORTB=0xff;
    _delay_ms((int)ton);
    PORTB=0x00;
    _delay_ms((int)toff);
  }
  if (port=='C')
  {
    PORTC=0xff;
    _delay_ms((int)ton);
    PORTC=0x00;
    _delay_ms((int)toff);
  }
  if (port=='D')
  {
    PORTD=0xff;
    _delay_ms((int)ton);
    PORTD=0x00;
    _delay_ms((int)toff);
  }
  
}
int main()
{
  DDRB=0xff;

  while(1)
  {
    pwm('B',50);
  }
}
```