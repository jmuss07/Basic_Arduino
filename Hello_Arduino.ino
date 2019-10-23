int ledPin1 = 12;
int ledPin2 = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);//This sets the digital pin as the output
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

 Serial.println("Blink");

  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(300);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(300);
}
