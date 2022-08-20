
char value ;
void setup() {
  // put your setup code here, to run once:
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(11, OUTPUT);
 Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
 while (Serial.available() > 0) {
   value = Serial.read();
   Serial.println(value);

 }

}
