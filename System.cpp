#include "System.h"

void System::init() {
  motion.init();
  ul_sensors.init();
};
void System::get_data() {
  data = ul_sensors.M_direction();
};
void System::set_data() {
  motion.Set_ul_data(data);
};
