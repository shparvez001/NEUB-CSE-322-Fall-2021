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


