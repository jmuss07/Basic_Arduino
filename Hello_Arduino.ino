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

  digitalWrite(ledPin1, HIGH); //turns led 1 on
  digitalWrite(ledPin2, LOW); // turns led 2 off
  delay(300);
  digitalWrite(ledPin1, LOW); //turns led 1 off
  digitalWrite(ledPin2, HIGH); //turns led 2 on
  delay(300);
}
//I reused my code from last year, but was mildly unsure as to how to make it fade, so i just used 2 leds instead and made them alternate.
