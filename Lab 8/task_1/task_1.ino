#include<Servo.h>

Servo myservo1;
int servo1pin=9;
int val;

void setup() {
  myservo1.attach(servo1pin);
  Serial.begin(115200);
}

void loop() {
  if(Serial.available()>0)
  {
    val=Serial.read();   //Input 0-9
    Serial.print(val);
    Serial.print("-");
    val=val-48;
    val=val*20;
    Serial.println(val);
    myservo1.write(val);   //Angle should be between 0 degree to 180 degree
    delay(1000);
  }
}
