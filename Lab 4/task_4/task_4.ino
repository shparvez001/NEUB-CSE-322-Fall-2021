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