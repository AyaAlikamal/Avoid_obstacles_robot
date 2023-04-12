#include "Ultrasonic_Sensors.h"
#include "Motion.h"
#include "config.h"
UL_Sensors ul_sensor;
Motion motion_r;

void setup() {
Serial.begin(9600);
ul_sensor.init();
motion_r.init();
}

void loop() {
motion_r.Final_Direction(ul_sensor.Max_direction());
}
