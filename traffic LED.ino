int redLed = 9;int greenLed = 10;int yellowLed = 11;
void setup() {  pinMode(redLed, OUTPUT);  pinMode(greenLed, OUTPUT);  pinMode(yellowLed, OUTPUT);}
void loop() {  digitalWrite(redLed, HIGH);  digitalWrite(greenLed, LOW);  digitalWrite(yellowLed, LOW);  delay(300);
  digitalWrite(redLed, LOW);  digitalWrite(greenLed, HIGH);  digitalWrite(yellowLed, LOW);  delay(300);
  digitalWrite(redLed, LOW);  digitalWrite(greenLed, LOW);  digitalWrite(yellowLed, HIGH);  delay(300);}
