#include <avr/pgmspace.h>
// Lookup table to convert ascii characters in to keyboard scan codes
// Format: most signifficant bit indicates if scan code should be sent with shift modifier
// remaining 7 bits are to be used as scan code number.

/*
 * #define keyboardlayout_fr
 * #include "CustomDigiKeyboard.h"
 * => enable fr keyboard layout
 *
 * #define keyboardlayout_us // or nothing because it's the default keyboard
 * #include "CustomDigiKeyboard.h"
 * => enable us keyboard layout
 */

#if defined(keyboardlayout_us)
  #include "keyboard_layouts/us_scancode-ascii-table.h"

#elif defined(keyboardlayout_fr)
  #include "keyboard_layouts/fr_scancode-ascii-table.h"

#else
  #include "keyboard_layouts/us_scancode-ascii-table.h"
#endif