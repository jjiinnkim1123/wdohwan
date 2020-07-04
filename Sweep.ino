#include <Servo.h>

Servo myservo;  

int sensorPin = A0;
int val = 0;

void setup() {
  myservo.attach(9); 
  Serial.begin(9600);
}

void loop() {
  val = analogRead(sensorPin);
  Serial.println(val);

  val = map(val, 0, 330, 0, 180  );
  myservo.write(val);            
}
