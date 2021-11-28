# NEUB CSE 322 Fall 2021 Lab 5
Find all Codes at  [Lab 5](https://github.com/shparvez001/NEUB-CSE-322-Fall-2021/tree/main/Lab%205).
![Lab 5 Task 1 Circuit](https://raw.githubusercontent.com/shparvez001/NEUB-CSE-322-Fall-2021/main/Lab%205/TASK_1_bb.png)
## Task 1
Using LDR as sensor.
```c
int sensorPin= A0;
float sensorValue=0;
float voltage=0;


void setup() {
  Serial.begin(115200);  //115200 is the baudrate
}

void loop() {
  sensorValue=analogRead(sensorPin);
  voltage=sensorValue*5/1024;
  Serial.print("Sensor Value: "); //After printing doesnot moves to newline
  Serial.print(sensorValue);
  Serial.print(" Voltage Read: ");
  Serial.println(voltage); //After printing moves to newline
  delay(500);
}
```

## Task 2
Basic switch Operation.
![Lab 5 Task 2 Circuit](https://raw.githubusercontent.com/shparvez001/NEUB-CSE-322-Fall-2021/main/Lab%205/TASK_2_bb.png)
```c
int switchPin=5;
int ledPin=13;
int switchStatus=0;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() {
  switchStatus=digitalRead(switchPin);
  digitalWrite(ledPin,switchStatus);
  Serial.println(switchStatus);
  delay(500);

}
```

## Task 3
Using switch with interrupt.
![Lab 5 Task 3 Circuit](https://raw.githubusercontent.com/shparvez001/NEUB-CSE-322-Fall-2021/main/Lab%205/TASK_3_bb.png)
```c
int switchPin=2;
int ledPin=13;
int switchStatus=0;
bool ledStatus=false; 

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(ledPin, ledStatus);
  attachInterrupt(0,ledToggle,FALLING);
}

void loop() {
}

void ledToggle()
{
  Serial.println("ISR activated");
  if(ledStatus==false)
  {
    ledStatus=true;
  }
  else
  {
    ledStatus=false;
  }
  digitalWrite(ledPin, ledStatus);
}
```

