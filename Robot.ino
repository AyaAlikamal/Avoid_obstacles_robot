#include "System.h"

System system_r;
void setup() {
  Serial.begin(9600);
  system_r.init();
}
void loop() {
  system_r.get_data();
  system_r.set_data();
}
