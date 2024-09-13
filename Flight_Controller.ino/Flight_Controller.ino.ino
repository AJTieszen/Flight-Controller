

int led_delta = 1;
int led_intensity = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  analogWrite(LED_BUILTIN, led_intensity);
  led_intensity += led_delta;

  if(led_intensity >= 255) led_delta = -1;
  if(led_intensity <= 0) led_delta = 1;

  delay(5);
}
