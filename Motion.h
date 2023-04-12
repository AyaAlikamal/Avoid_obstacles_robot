#include <Arduino.h>
#include "config.h"
#ifndef Motio_H
#define Motion_H
class Motion {
private:
  void Forword();
  void Backword();
  void Right();
  void Left();
  void Stop();
public:
  int Speed;
  int motor_speed_1;
  int motor_speed_2;
  Motion() {
    this->motor_speed_1 = 0;
    this->motor_speed_2 = 0;
    this->Speed = 80;
  };
  void init();
  void Final_Direction(int ul_data);
};
#endif