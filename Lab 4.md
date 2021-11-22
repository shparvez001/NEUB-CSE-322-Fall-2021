# NEUB CSE 322 Fall 2021 Lab 4
Find all Codes at  [Lab 4](https://github.com/shparvez001/NEUB-CSE-322-Fall-2021/tree/main/Lab%204).
## Task 1
EEPROM read and write code.
```c
#include<avr/io.h>
#include<avr/eeprom.h>
#include<util/delay.h>

int main()
{
  unsigned char i;

  DDRC=0xFF; // PORTC is output

  for(i=0;i<255;i++)
  {
    eeprom_write_byte((unsigned char *)i,i);
  }

  for(i=0;i<255;i++)
  {
    PORTC=eeprom_read_byte((unsigned char *)i);
    _delay_ms(1000);
  }

  while(1)
  {
  }
  return 0;
}
```

## Task 2
Using EEPROM to store a pattern of LED and pulsing through the pattern.
```c
#include<avr/io.h>
#include<avr/eeprom.h>
#include<util/delay.h>

int main()
{
  unsigned char i;

  DDRC = 0xFF; // PORTC is output
  //After first upload comment the following three lines. These are redundant. 
  eeprom_write_byte((unsigned char *)0, 27);
  eeprom_write_byte((unsigned char *)1, 34);
  eeprom_write_byte((unsigned char *)2, 4);
  
  while (1)
  {
    for (i = 0; i < 3; i++)
    {
      PORTC = eeprom_read_byte((unsigned char *)i);
      _delay_ms(1000);
    }
  }
  return 0;
}
```

## Task 3
Reading analong value using built-in ADC.
```c
int sensorPin = A0;   
int ledPin = 13;    
int sensorValue = 0; 

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  digitalWrite(ledPin, HIGH);
  delay(sensorValue);
  digitalWrite(ledPin, LOW);
  delay(sensorValue);
}
```

## Task 4
Reading voltage using built-in ADC.
```c
int sensorPin = A0;  
int sensorValue = 0; 
float volt=0.0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  volt=5*(float)sensorValue/1023;
  Serial.println(volt);
}
```

