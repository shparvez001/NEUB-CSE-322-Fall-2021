//Using switch with interrupt
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


