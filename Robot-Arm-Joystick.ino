#include <Servo.h>
int shoulder_stick = A0;
int elbow_stick = A1;
int pot = A2;
Servo shoulder;
Servo elbow;
Servo hand;

void setup() {
  Serial.begin(9600);
  shoulder.attach(3);
  elbow.attach(5);
  hand.attach(6);

}

void loop() {
  int shoulder_spin = analogRead(shoulder_stick);
  shoulder_spin = map(shoulder_spin, 0, 1023, 0, 180);
  shoulder.write(shoulder_spin);
  int elbow_bend = analogRead(elbow_stick);
  elbow_bend = map(elbow_bend, 0, 1023, 0, 180);
  elbow.write(elbow_bend);
  int hand_open = analogRead(pot);
  hand_open = map(hand_open, 0, 1023, 0, 180);
  hand.write(hand_open);
  

}
