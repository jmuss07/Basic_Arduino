int Pin1 = 13; 
int Pin2 = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Pin1,OUTPUT); //This sets the digital pin as the output
  pinMode(Pin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("blink");
  digitalWrite(Pin1,HIGH); //This turns the first LED on
  digitalWrite(Pin2,LOW); // This turns the second LED off
  delay(300); //This sets a 300 millisecond delay beforethe next command can take place
  digitalWrite(Pin1,LOW);
  digitalWrite(Pin2,HIGH);
  delay(300);
}
