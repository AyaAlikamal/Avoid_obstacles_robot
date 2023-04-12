#include "Motion.h"
void Motion::init() {
  pinMode(Motor1_right_pin, OUTPUT);
  pinMode(Motor2_right_pin, OUTPUT);

  pinMode(Motor1_left_pin, OUTPUT);
  pinMode(Motor2_left_pin, OUTPUT);
  
  analogWrite(Motor1_right_pin, 0);
  analogWrite(Motor2_right_pin, 0);
  analogWrite(Motor1_left_pin, 0);
  analogWrite(Motor2_left_pin, 0);
};
void Motion::Forword() {
  digitalWrite(Motor1_right_pin, HIGH);
  digitalWrite(Motor1_left_pin, LOW);
  analogWrite(Motor1_right_pin, Speed);

  digitalWrite(Motor2_right_pin, HIGH);
  analogWrite(Motor2_right_pin, Speed);
  digitalWrite(Motor2_left_pin, LOW);
};
void Motion::Backword() {
  digitalWrite(Motor1_left_pin, HIGH);
  analogWrite(Motor1_left_pin, Speed);
  digitalWrite(Motor1_right_pin,LOW);

  digitalWrite(Motor2_left_pin, HIGH);
  analogWrite(Motor2_left_pin, Speed);
  digitalWrite(Motor2_right_pin, LOW);
};
void Motion::Right() {
  digitalWrite(Motor1_left_pin, HIGH);
  analogWrite(Motor1_left_pin, Speed);
  digitalWrite(Motor1_right_pin, LOW);

digitalWrite(Motor2_right_pin, HIGH);
  digitalWrite(Motor2_left_pin, LOW);
  analogWrite(Motor2_right_pin, Speed);
};
void Motion::Left() {
  digitalWrite(Motor1_left_pin, LOW);
  analogWrite(Motor1_right_pin, Speed);
  digitalWrite(Motor1_right_pin, HIGH);

  digitalWrite(Motor2_right_pin, LOW);
  digitalWrite(Motor2_left_pin, HIGH);
  analogWrite(Motor2_left_pin, Speed);
};
void Motion::Stop() {
  analogWrite(Motor1_right_pin, 0);
  analogWrite(Motor2_right_pin, 0);
  analogWrite(Motor1_left_pin, 0);
  analogWrite(Motor2_left_pin, 0);
};
void Motion::Final_Direction(int ul_data) {
  if (ul_data == 1) {
    Forword();
  } else if (ul_data == 3) {
    Backword();
  } else if (ul_data == 2 || ul_data == 4) {
    Left();
  } else {
    Stop();
  }
};