#include "Ultrasonic_Sensors.h"
void UL_Sensors::init() {
  pinMode(echopin_A, INPUT);
  pinMode(trigpin_A, OUTPUT);
  pinMode(echopin_B, INPUT);
  pinMode(trigpin_B, OUTPUT);
  pinMode(echopin_C, INPUT);
  pinMode(trigpin_C, OUTPUT);
};

void UL_Sensors::UL_SA() {
  digitalWrite(trigpin_A, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin_A, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin_A, LOW);
  duration_A = pulseIn(echopin_A, HIGH);
  distance_A = duration_A * 0.034 / 2;
  Serial.print("Distance_A: ");
  Serial.print(distance_A);
  Serial.println(" cm");
};

void UL_Sensors::UL_SB() {
  digitalWrite(trigpin_B, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin_B, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin_B, LOW);
  duration_B = pulseIn(echopin_B, HIGH);
  distance_B = duration_B * 0.034 / 2;
  Serial.print("Distance_B: ");
  Serial.print(distance_B);
  Serial.println(" cm");
};

void UL_Sensors::UL_SC() {
  digitalWrite(trigpin_C, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin_C, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin_C, LOW);
  duration_C = pulseIn(echopin_C, HIGH);
  distance_C = duration_C * 0.034 / 2;
  Serial.print("Distance_C: ");
  Serial.print(distance_C);
  Serial.println(" cm");
};

int UL_Sensors::M_direction() {
  UL_SA();
  UL_SB();
  UL_SC();
  if (distance_A > distance_B) {
    if (distance_A > distance_C) {
      return 1;
      // Serial.println("US_A");
    } else {
       return 3;
      // Serial.println("US_C");
    }
  } else if (distance_B > distance_C) {
    // Serial.println("US_B");
     return 2;
  } else {
    // Serial.println("US_C");
     return 1; 
  }
};
