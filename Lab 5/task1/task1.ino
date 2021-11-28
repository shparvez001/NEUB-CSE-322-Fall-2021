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
