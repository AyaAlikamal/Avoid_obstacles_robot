#include <Arduino.h>
#include "Motion.h"
#include "Ultrasonic_Sensors.h"
#ifndef System_H
#define System_H
Motion motion;
UL_Sensors ul_sensors;

class System {
public:
  int data;
  System() {
    this->data = 0;
  }
  void init();
  void get_data();
  void set_data();
};
#endif