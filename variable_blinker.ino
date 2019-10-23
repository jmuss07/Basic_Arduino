int ledPin = 2;
int buttonPin = 12;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); //This sets the digital pin as the output
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(buttonPin);
  Serial.println(val);
  if (val == LOW) {
    digitalWrite(ledPin, LOW);
  } else if (val == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
  }
}
