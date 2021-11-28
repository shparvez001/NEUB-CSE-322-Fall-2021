//Basic switch Operation
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
