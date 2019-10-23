int ledPin1 = 2;
int ledPin2 = 4;
int buttonPin1 = 12;
int buttonPin2 = 8;
int val1 = 0;
int val2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT); //This sets the digital pin as the output
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val1 = digitalRead(buttonPin1);
  
  val2 = digitalRead(buttonPin2);
  Serial.println(val1);
  Serial.println(val2);
  if (val1 == LOW) {
    digitalWrite(ledPin1, LOW);
  } else if (val1 == HIGH) {
    digitalWrite(ledPin1, HIGH);
    delay(100);
    digitalWrite(ledPin1, LOW);
    delay(100);
  }
  if (val2 == LOW) {
    digitalWrite(ledPin2,LOW);
  }else if (val2 == HIGH) {
    digitalWrite(ledPin2, HIGH);
    delay(100);
    digitalWrite(ledPin2, LOW);
    delay(100);
  }
}
