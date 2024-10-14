const int led = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
Serial.begin(9600)
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() > 0);{
  int command = Serial.parseInt();
  if (command == 101){
    digitalWrite(led,HIGH);
  }
  else if (command == 201){
    digitalWrite(led,LOW);
  }
}
}
