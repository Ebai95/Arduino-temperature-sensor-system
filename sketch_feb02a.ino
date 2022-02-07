
float temp;
int tempPin = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  temp = analogRead(tempPin);
  temp = temp * 0.48828125;  // converting volts to degree celsius ---- 0.48828125 = [(5v*1000)/1024]10
  Serial.print("The temperature is  = ");
  Serial.print(temp);
  Serial.print("*C");
  Serial.println(  "deg.Celsius");
  delay(300000);

}
