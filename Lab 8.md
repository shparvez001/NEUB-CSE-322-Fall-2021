# NEUB CSE 322 Fall 2021 Lab 8
Find all Codes at  [Lab 8](https://github.com/shparvez001/NEUB-CSE-322-Fall-2021/tree/main/Lab%208).
## Task 1
Servo motor driving.
```c
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
```

## Task 2
Write a code for light follower robot.
```c
//To be done by students
```

## Hometaks
1. Change the code in task 1 so that the angle can be directly input in the serial monitor (0-180) instead of just 0-9.
2. Build a light follower robot using 2 motyors and 3 LDR.
3. Make a video demonstrating working hometask 2.

Submit through google classroom.
