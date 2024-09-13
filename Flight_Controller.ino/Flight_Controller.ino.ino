#include <Joystick.h>
Joystick_ joystick;

// Analog Pin Definitions
#define THROTTLE_L 0
#define THROTTLE_R 1

// Digital Pin Definitions


// Analog states
int throttle_l = 0;
int throttle_r = 0;

void setup() {
  // Start Gamepad Emulation
  joystick.begin();
}

void loop() {
  // Read In
}
