// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef Servo_Test_H_
#define Servo_Test_H_
#include "Arduino.h"
//add your includes for the project Servo_Test here

#include "Servo.h"
#include "LiquidCrystal.h"

//end of add your includes here
#ifdef __cplusplus
extern "C" {
#endif
void loop();
void setup();
#ifdef __cplusplus
} // extern "C"
#endif

//add your function definitions for the project Servo_Test here

bool pan();
int distance();
void display(int x, int y, int d, int near, int nearX, int nearY, int rangeX, int rangeY);

//Do not add code below this line
#endif /* Servo_Test_H_ */
