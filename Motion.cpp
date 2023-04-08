#include "Motion.h"

void Motion::init() {
  pinMode(Motor1_Pin, OUTPUT);
  pinMode(Motor2_pin, OUTPUT);
  analogWrite(Motor1_Pin, strat_speed);
  analogWrite(Motor1_Pin, strat_speed);
};
void Motion::setMotor_1() {
  analogWrite(Motor1_Pin, motor_speed_1);
};
void Motion::setMotor_2() {
  analogWrite(Motor2_pin, motor_speed_2);
};
int Motion::Set_ul_data(int ul_data) {
  if (ul_data == 1) {
    motor_speed_1 = 150;
    motor_speed_2 = 230;
    setMotor_1();
    setMotor_2();
  } else if (ul_data == 2) {
    motor_speed_1 = 230;
    motor_speed_2 = 230;
    setMotor_1();
    setMotor_2();
  } else if (ul_data == 3) {
    motor_speed_1 = 230;
    motor_speed_2 = 150;
    setMotor_1();
    setMotor_2();
  } else {
    motor_speed_1 = 0;
    motor_speed_2 = 0;
    setMotor_1();
    setMotor_2();
  }
};