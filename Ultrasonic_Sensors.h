#include <Arduino.h>
#include"config.h"
#ifndef US_H
#define US_H


class UL_Sensors {
private:
  long duration_A, duration_B, duration_C;
  float distance_A, distance_B, distance_C;
  void UL_SA();
  void UL_SB();
  void UL_SC();
public:
  UL_Sensors() {
  };
  void init();
  int M_direction();
};
#endif
