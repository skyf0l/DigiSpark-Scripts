// Change the keyboard layout to that of your target
#define keyboardlayout_fr

// Import CustomDigiKeyboard library
#include "CustomDigiKeyboard.h"

void setup() {
  // Initialize the digital pin as an output
  pinMode(1, OUTPUT);
  // Reset KeyStroke
  DigiKeyboard.sendKeyStroke(0);
}

void loop() {
  // Turn the LED on while program is running
  digitalWrite(1, HIGH);

  // Open mouse settings
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("main.cpl");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);

  // On first settings page
  // Invert mouse buttons
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(50);
  // Decrease double-click speep
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  for (int k = 0; k < 10; k++) {
    DigiKeyboard.sendKeyStroke(KEY_LEFT);
    DigiKeyboard.delay(50);
  }
  // Enable lock click
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(50);
  // Return to pages menu
  for (int k = 0; k < 3; k++) {
    DigiKeyboard.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
    DigiKeyboard.delay(50);
  }

  // Select the second settings page
  DigiKeyboard.sendKeyStroke(KEY_RIGHT);
  DigiKeyboard.delay(50);
  // Change mouse model to inverted big mouse
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  for (int k = 0; k < 4; k++) {
    DigiKeyboard.sendKeyStroke(KEY_RIGHT);
    DigiKeyboard.delay(50);
  }
  // Return to pages menu
  DigiKeyboard.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboard.delay(50);

  // Select the fird settings page
  DigiKeyboard.sendKeyStroke(KEY_RIGHT);
  DigiKeyboard.delay(50);
  // Decrease mouse speed
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  for (int k = 0; k < 10; k++) {
    DigiKeyboard.sendKeyStroke(KEY_LEFT);
    DigiKeyboard.delay(50);
  }
  // Enable random settings
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(50);
  // Return to pages menu
  for (int k = 0; k < 4; k++) {
    DigiKeyboard.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
    DigiKeyboard.delay(50);
  }

  // Select the fourth settings page
  DigiKeyboard.sendKeyStroke(KEY_RIGHT);
  DigiKeyboard.delay(50);
  // Set wheel scroll to 100
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(50);
  DigiKeyboard.print("100");
  DigiKeyboard.delay(50);

  // Apply settings and have fun
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // Turn the LED off
  digitalWrite(1, LOW);
  // End of program
  while (1);
}
