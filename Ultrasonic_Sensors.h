#include <Arduino.h>
#ifndef US_H
#define US_H
#define echopin_A A3
#define trigpin_A A2
#define echopin_B A1
#define trigpin_B A0
#define echopin_C 12
#define trigpin_C 13

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
