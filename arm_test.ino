#include <Servo.h>

Servo servo1; //grip
Servo servo2;//rotate
Servo servo3;//base
Servo servo4;//arm

int pos1=50;
int pos2=90;
int pos3=0;
int pos4=0;


void setup() {
  Serial.begin(9600);
  servo1.attach(11); //to attach  servo 
  servo2.attach(5);
  servo3.attach(9);
   servo4.attach(6);
}


void loop() {

 if (Serial.available()) {  // Returns true if there is serial input.
    char ch = Serial.read();// waits for the character 

  if (ch == 'r') {
      if (pos1 < 70) {
        pos1 += 10;
      }
    } else if (ch == 'f') {
      if (pos1 > 0) {
        pos1 -= 10; }}

         if (ch == 'w') {
      if (pos2 < 180) {
        pos2 += 10;
      }
    } else if (ch == 's') {
      if (pos2 > 90) {
        pos2 -= 10; }}

         if (ch == 'a') {
      if (pos3 < 180) {
        pos3 += 10;
      }
    } else if (ch == 'q') {
      if (pos3 > 15) {
        pos3 -= 10; }}

         if (ch == 'e') {
      if (pos4 < 180) {
        pos4 += 10;
      }
    } else if (ch == 'd') {
      if (pos4 > 0) {
        pos4 -= 10; }}
    
// enters the position for each servo motor.

  
  //delay(10);
  servo2.write(pos3);//rotate
  //delay(10);
 servo3.write(pos2);//base
 //delay(10);
   servo4.write(pos1);//arm
//delay(10);
servo1.write(pos4); //gripq
//delay(10);
 }
  
}
