#include <Ultrasonic.h>
Ultrasonic u = Ultrasonic(7,8);
void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT); // SPEED(0 - 255)
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  analogWrite(11, 255); // Speed Value passs


  pinMode(3, OUTPUT); // SPEED(0 - 255)
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  analogWrite(3, 255); // Speed Value passs
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  int x = Serial.read();
 int d =  u.distanceRead();
 Serial.println(d);

  if(d <= 10){
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    }
       if (x == '1') {
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);

  }

  if (x == '2') {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
  }

  if (x == '3') {
    Serial.println("Left");
     digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
  }
  if (x == '4') {
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
  }
    if (x == '5') {
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
  }
      

 
}
