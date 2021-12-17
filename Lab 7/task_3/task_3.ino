int mls1=3;
int mls2=4;
int mrs1=5;
int mrs2=6;
int mlen=10;
int mren=11;

void moveForward(int speedPercent)
{
  analogWrite(mlen,map(speedPercent, 0, 100, 0, 255));
  analogWrite(mren,map(speedPercent, 0, 100, 0, 255));
  //Move forward
  //MOve motor 1 Clockwise
  digitalWrite(mls1,HIGH);
  digitalWrite(mls2,LOW);
  //MOve motor 2 Clockwise
  digitalWrite(mrs1,HIGH);
  digitalWrite(mrs2,LOW);
}

void moveBackward(int speedPercent)
{
  analogWrite(mlen,map(speedPercent, 0, 100, 0, 255));
  analogWrite(mren,map(speedPercent, 0, 100, 0, 255));
  //Move Backward
  //move motor 1 anticlockwise
  digitalWrite(mls1,LOW);
  digitalWrite(mls2,HIGH);
  //move motor 2 anticlockwise
  digitalWrite(mrs1,LOW);
  digitalWrite(mrs2,HIGH);
}

void moveForwardRight(int speedPercent)
{
  analogWrite(mlen,map(speedPercent, 0, 100, 0, 255));
  analogWrite(mren,0);
  //Move Forward Right
  //move motor 1 clockwise
  digitalWrite(mls1,HIGH);
  digitalWrite(mls2,LOW);
  //Stop Motor 2
  digitalWrite(mrs1,LOW);
  digitalWrite(mrs2,LOW);
}

void moveForwardLeft(int speedPercent)
{
  analogWrite(mlen,0);
  analogWrite(mren,map(speedPercent, 0, 100, 0, 255));
  //Move Forward Left
  //Stop Motor 2
  digitalWrite(mls1,LOW);
  digitalWrite(mls2,LOW);
  //Move motor 2 clockwise
  digitalWrite(mrs1,HIGH);
  digitalWrite(mrs2,LOW);
}

void setup() {
  pinMode(mls1,OUTPUT);
  pinMode(mls2,OUTPUT);
  pinMode(mrs1,OUTPUT);
  pinMode(mrs2,OUTPUT);
  pinMode(mlen,OUTPUT);
  pinMode(mren,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  moveForward(50);
  delay(1000);
  moveForwardRight(50);
  delay(1000);  
  moveBackward(50);
  delay(1000);
  moveForwardLeft(50);
  delay(1000);
}

