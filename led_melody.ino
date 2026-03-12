const int led[] = {5, 7, 8};   // LED pins
const int ledCount = 3;

const int buzzerPin = 10;     // Buzzer pin
const int buttonPin = 12;     // Button pin

void setup() {
  // Set LED pins as OUTPUT
  for (int i = 0; i < ledCount; i++) {
    pinMode(led[i], OUTPUT);
  }

  // Set buzzer pin as OUTPUT
  pinMode(buzzerPin, OUTPUT);

  // Button with internal pull-up resistor
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {

  // Button pressed (LOW because of INPUT_PULLUP)
  if (digitalRead(buttonPin) == LOW) {

    // LEDs + short beep
    for (int i = 0; i < ledCount; i++) {
      digitalWrite(led[i], HIGH);
      tone(buzzerPin, 1000);   // Simple beep
      delay(300);

      digitalWrite(led[i], LOW);
      noTone(buzzerPin);
      delay(150);
    }

    // Play a nice melody after LEDs finish
    playMelody();

    delay(1000); // Prevent repeated triggering
  }
}

// ================= Melody Function =================
void playMelody() {

  // Simple happy melody (frequencies in Hz)
  int melody[] = {523, 659, 784, 1046, 784, 659, 523};
  int noteDurations[] = {200, 200, 200, 400, 200, 200, 400};

  int notesCount = 7;

  for (int i = 0; i < notesCount; i++) {
    tone(buzzerPin, melody[i]);
    delay(noteDurations[i]);
    noTone(buzzerPin);
    delay(50);
  }
}