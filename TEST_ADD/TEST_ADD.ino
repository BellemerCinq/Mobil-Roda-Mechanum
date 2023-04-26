//Test Drive Almeera Calon Hokage Konoha ke-9
//Moving around a bend, rotate, turn
#include <AFMotor.h>
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

int Speed = 230;
char value;
void setup() {
  Serial.begin(9600);
  motor1.setSpeed(Speed);
  motor2.setSpeed(Speed);
  motor3.setSpeed(Speed);
  motor4.setSpeed(Speed);
}

void loop() {
  if (Serial.available() > 0) {
    value = Serial.read();
  }
  
  if (value == 'F') { //moving around a bend: turn right to back
    motor1.run(FORWARD);
    motor2.run(BACKWARD);
    motor3.run(RELEASE);
    motor4.run(RELEASE);} 
    
    else if (value == 'B') { //moving around a bend: turn left to back
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(BACKWARD);
    motor4.run(FORWARD);}
    
    else if (value == 'L') { //moving around a bend: turn right to front
    motor1.run(BACKWARD);
    motor2.run(FORWARD);
    motor3.run(RELEASE);
    motor4.run(RELEASE);} 

    else if (value == 'R') { //moving around a bend: turn left to front
    motor1.run(RELEASE);
    motor2.run (RELEASE);
    motor3.run(FORWARD);
    motor4.run(BACKWARD);}

    else if (value == 'G') { //rotate left to back
    motor1.run(BACKWARD);
    motor2.run(FORWARD);
    motor3.run(BACKWARD);
    motor4.run(FORWARD);}

    else if (value == 'I') { //rotate right to back
    motor1.run(FORWARD);
    motor2.run(BACKWARD);
    motor3.run(FORWARD);
    motor4.run(BACKWARD);}

    else if (value == 'J') { //turn back right    
    motor1.run(FORWARD);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(BACKWARD);}

    else if (value == 'H') { //turn back left
    motor1.run(BACKWARD);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(FORWARD);}
    
    else {
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);}
}
