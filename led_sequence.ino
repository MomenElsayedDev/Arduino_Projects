// Arduino Basic LED Sequence
// Controls multiple LEDs using an array and a for loop

const int led[] = {5, 7, 8};   // LED pins
const int ledCount = 3;        // Number of LEDs

void setup() {
  // Set each LED pin as OUTPUT
  for (int i = 0; i < ledCount; i++) {
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  // Turn LEDs ON one by one
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(led[i], HIGH);  // Turn LED ON
    delay(500);                  // Wait 500ms
    digitalWrite(led[i], LOW);   // Turn LED OFF
  }
}