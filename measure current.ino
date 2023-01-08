#include "ACS750.h"

/*
  This example shows how to set zero point of your sensor
*/

// We have 50 amps version sensor connected to A1 pin of arduino
// Replace with your version if necessary
ACS750 sensor(ACS750LCA_050, A1);

void setup() {
  Serial.begin(9600);
  sensor.calibrate();
}
void loop() {
  float I = sensor.getCurrentAC();
  Serial.println(String("I =")+ I + "A");
  }
