#include <Joystick.h>
Joystick_ joystick;

// Analog Pin Definitions
#define THROTTLE_L 0
#define THROTTLE_R 1
#define THROTTLE_MAX 768

// Digital Pin Definitions


// Analog states
int throttle_l = 0;
int throttle_r = 0;

void setup() {
  // Start Gamepad Emulation
  //joystick.begin();
  Serial.begin(9600);

  // Configure gamepad mode and settings
  //joystick.setThrottleRange(0, 768);
}

void loop() {
  // Read Inputs
  throttle_l = analogRead(THROTTLE_L);
  throttle_r = analogRead(THROTTLE_R);

  // Send Controller State
  //joystick.setThrottle(throttle_l);
  Serial.println(throttle_l);
  delay(10);
}
