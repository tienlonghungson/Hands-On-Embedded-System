int led_pin = 13;
void setup() {
  //set up LED pin to output
  pinMode(led_pin,OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);

  digitalWrite(led_pin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(1, HIGH);
  delay(200);
  digitalWrite(1, LOW);
  digitalWrite(3, HIGH);
  delay(200);
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  delay(200);
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
  delay(200);
  digitalWrite(7, LOW);
  
}
