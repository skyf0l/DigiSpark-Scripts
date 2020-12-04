#define keyboardlayout_fr
#include "CustomDigiKeyboard.h"

void setup() {
  // init digikeyboard
  DigiKeyboard.sendKeyStroke(0);
}

void loop() {
  // print all ascii char
  DigiKeyboard.print("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~ \n");

  // enf of program
  while(1);
}
