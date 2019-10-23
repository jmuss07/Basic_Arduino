#include <Servo.h>

Servo myServo;

int btn1Pin = 3;
int btn2Pin = 2;
int servoPin = 9;
int btn1State;
int btn2State;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);6-
 myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
 btn1State = digitalRead(btn1Pin);
 btn2State = digitalRead(btn2Pin);
  if (btn1State == HIGH) {
    Serial.println("Button 1 is on");
    digitalWrite(btn1Pin, HIGH);
  } if (btn2State == HIGH) {
   Serial.println("Button 2 is on");
  }
}
