#include <Arduino.h>
#include"config.h"
#ifndef Motio_H
#define Motion_H


class Motion {
private:
  void setMotor_1();
  void setMotor_2();
public:
  int strat_speed;
  int motor_speed_1;
  int motor_speed_2;
  Motion() {
    this->motor_speed_1 = 0;
    this->motor_speed_2 = 0;
    this->strat_speed = 120;
  };
  void init();
  int Set_ul_data(int data);
};
#endif