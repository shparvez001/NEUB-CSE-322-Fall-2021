# NEUB CSE 322 Fall 2021 Lab 2
Find all Codes at  [Lab 2](https://github.com/shparvez001/NEUB-CSE-322-Fall-2021/tree/main/Lab%202).
## Task 1
Basic Input and output code for AVR.
```c
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
```

## Task 2
LED blinking code in AVR. Also hardware implementation.
```c
#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
  DDRB=0xff; //Declare full port C as output
  while(1)
  {
    PORTB=0x00;      //Turn of all output
    _delay_ms(500);  //Wait for 100ms
    PORTB=0xff;      //Turn on all output
    _delay_ms(100);  //Wait for 100 ms
  }
}
```

## Task 3
LED blinking code in AVR. Simulation in proteus.
```c
//Code same as task 2
```

## Tasks to be submitted by students
1. All Codes (Task 1 and Task 2)
2. Video of task 2 running on hardware.
3. Video of simulation running.

Submit through github classroom.
[Submission link](https://classroom.github.com/a/QvJMZTzK)
