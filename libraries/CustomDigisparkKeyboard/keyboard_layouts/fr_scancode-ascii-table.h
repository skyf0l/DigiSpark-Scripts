// Lookup table to convert ascii characters in to keyboard scan codes
// Format: most signifficant bit indicates if scan code should be sent with shift modifier
// remaining 7 bits are to be used as scan code number.

#include "keyboard-keys.h"

const uint16_t ascii_to_scan_code_table[] PROGMEM = {
  // /* ASCII: 0 */ 0,  // null  NUL
  // /* ASCII: 1 */ 0,  // start of heading  SOH
  // /* ASCII: 2 */ 0,  // start of text STX
  // /* ASCII: 3 */ 0,  // end of text EOT
  // /* ASCII: 4 */ 0,  // end of transmission EOT
  // /* ASCII: 5 */ 0,  // enquiry ENQ
  // /* ASCII: 6 */ 0,  // acknowledge ACK
  // /* ASCII: 7 */ 0,  // bell  BEL
  /* ASCII: 8 */ KEY_BACKSPACE, // backpace  BS
  /* ASCII: 9 */ KEY_TAB, // horizontal tab  HT
  /* ASCII: 10 */ KEY_ENTER,  // line feed, new line LF, NL
  /* ASCII: 11 */ 0,  // vertical tab  VT
  /* ASCII: 12 */ 0,  // form feed, new page FF, NP
  /* ASCII: 13 */ 0,  // carriage return CR
  /* ASCII: 14 */ 0,  // shift out SO
  /* ASCII: 15 */ 0,  // shift in  SI
  /* ASCII: 16 */ 0,  // data link escape  DLE
  /* ASCII: 17 */ 0,  // device control 1  DC1
  /* ASCII: 18 */ 0,  // device control 2  DC2
  /* ASCII: 19 */ 0,  // device control 3  DC3
  /* ASCII: 20 */ 0,  // device control 4  DC4
  /* ASCII: 21 */ 0,  // negative acknowledge  NAK
  /* ASCII: 22 */ 0,  // synchonous idle SYN
  /* ASCII: 23 */ 0,  // end of transmission block ETB
  /* ASCII: 24 */ 0,  // cancel  CAN
  /* ASCII: 25 */ 0,  // end of medium EM
  /* ASCII: 26 */ 0,  // substitute  SUB
  /* ASCII: 27 */ KEY_ESC,  // escape  ESC
  /* ASCII: 28 */ 0,  // file separator  FS
  /* ASCII: 29 */ 0,  // group separator GS
  /* ASCII: 30 */ 0,  // record separator  RS
  /* ASCII: 31 */ 0,  // unit separator  US
  /* ASCII: 32 */ KEY_SPACE,  // space
  /* ASCII: 33 */ KEY_SLASH,  // ! &excl;  exclamation mark
  /* ASCII: 34 */ KEY_3,  // " &quot;  double quotation mark
  /* ASCII: 35 */ KEY_3 | MOD_ALT_RIGHT << 8, // # &num; number sign, pound
  /* ASCII: 36 */ KEY_RIGHT_BRACE,  // $ &dollar;  dollar sign
  /* ASCII: 37 */ KEY_QUOTE | MOD_SHIFT_LEFT << 8,  // % &percnt;  percent sign
  /* ASCII: 38 */ KEY_1,  // & &amp; ampersand
  /* ASCII: 39 */ KEY_4,  // ' &apos;  apostrophe, single quote mark
  /* ASCII: 40 */ KEY_5,  // ( &lpar;  left parenthesis
  /* ASCII: 41 */ KEY_MINUS,  // ) &rpar;  right parenthesis
  /* ASCII: 42 */ KEY_NUMBER,  // * &ast; asterisk (or KEY_BACKSLASH)
  /* ASCII: 43 */ KEY_EQUAL | MOD_SHIFT_LEFT << 8,  // + &plus;  plus sign
  /* ASCII: 44 */ KEY_M,  // , &comma; comma
  /* ASCII: 45 */ KEY_6,  // - &minus;   &hyphen;  minus sign, hyphen
  /* ASCII: 46 */ KEY_COMMA | MOD_SHIFT_LEFT << 8,  // . &period;  period, decimal point, full stop
  /* ASCII: 47 */ KEY_PERIOD | MOD_SHIFT_LEFT << 8,  // / &sol; slash, virgule, solidus
  /* ASCII: 48 */ KEY_0 | MOD_SHIFT_LEFT << 8,  // digit 0
  /* ASCII: 49 */ KEY_1 | MOD_SHIFT_LEFT << 8,  // digit 1
  /* ASCII: 50 */ KEY_2 | MOD_SHIFT_LEFT << 8,  // digit 2
  /* ASCII: 51 */ KEY_3 | MOD_SHIFT_LEFT << 8,  // digit 3
  /* ASCII: 52 */ KEY_4 | MOD_SHIFT_LEFT << 8,  // digit 4
  /* ASCII: 53 */ KEY_5 | MOD_SHIFT_LEFT << 8,  // digit 5
  /* ASCII: 54 */ KEY_6 | MOD_SHIFT_LEFT << 8,  // digit 6
  /* ASCII: 55 */ KEY_7 | MOD_SHIFT_LEFT << 8,  // digit 7
  /* ASCII: 56 */ KEY_8 | MOD_SHIFT_LEFT << 8,  // digit 8
  /* ASCII: 57 */ KEY_9 | MOD_SHIFT_LEFT << 8,  // digit 9
  /* ASCII: 58 */ KEY_PERIOD,  // : &colon; colon
  /* ASCII: 59 */ KEY_COMMA,  // ; &semi;  semicolon
  /* ASCII: 60 */ KEY_ANGLE_BRACE,  // < &lt;  less-than sign
  /* ASCII: 61 */ KEY_EQUAL,  // = &equals;  equal sign
  /* ASCII: 62 */ KEY_ANGLE_BRACE | MOD_SHIFT_LEFT << 8,  // > &gt;  greater-than sign
  /* ASCII: 63 */ KEY_M | MOD_SHIFT_LEFT << 8,  // ? &quest; question mark
  /* ASCII: 64 */ KEY_0 | MOD_ALT_RIGHT << 8, // @ &commat;  commercial at sign
  /* ASCII: 65 */ KEY_Q | MOD_SHIFT_LEFT << 8,  // capital A
  /* ASCII: 66 */ KEY_B | MOD_SHIFT_LEFT << 8,  // capital B
  /* ASCII: 67 */ KEY_C | MOD_SHIFT_LEFT << 8,  // capital C
  /* ASCII: 68 */ KEY_D | MOD_SHIFT_LEFT << 8,  // capital D
  /* ASCII: 69 */ KEY_E | MOD_SHIFT_LEFT << 8,  // capital E
  /* ASCII: 70 */ KEY_F | MOD_SHIFT_LEFT << 8,  // capital F
  /* ASCII: 71 */ KEY_G | MOD_SHIFT_LEFT << 8,  // capital G
  /* ASCII: 72 */ KEY_H | MOD_SHIFT_LEFT << 8,  // capital H
  /* ASCII: 73 */ KEY_I | MOD_SHIFT_LEFT << 8,  // capital I
  /* ASCII: 74 */ KEY_J | MOD_SHIFT_LEFT << 8,  // capital J
  /* ASCII: 75 */ KEY_K | MOD_SHIFT_LEFT << 8,  // capital K
  /* ASCII: 76 */ KEY_L | MOD_SHIFT_LEFT << 8,  // capital L
  /* ASCII: 77 */ KEY_SEMICOLON | MOD_SHIFT_LEFT << 8,  // capital M
  /* ASCII: 78 */ KEY_N | MOD_SHIFT_LEFT << 8,  // capital N
  /* ASCII: 79 */ KEY_O | MOD_SHIFT_LEFT << 8,  // capital O
  /* ASCII: 80 */ KEY_P | MOD_SHIFT_LEFT << 8,  // capital P
  /* ASCII: 81 */ KEY_A | MOD_SHIFT_LEFT << 8,  // capital Q
  /* ASCII: 82 */ KEY_R | MOD_SHIFT_LEFT << 8,  // capital R
  /* ASCII: 83 */ KEY_S | MOD_SHIFT_LEFT << 8,  // capital S
  /* ASCII: 84 */ KEY_T | MOD_SHIFT_LEFT << 8,  // capital T
  /* ASCII: 85 */ KEY_U | MOD_SHIFT_LEFT << 8,  // capital U
  /* ASCII: 86 */ KEY_V | MOD_SHIFT_LEFT << 8,  // capital V
  /* ASCII: 87 */ KEY_Z | MOD_SHIFT_LEFT << 8,  // capital W
  /* ASCII: 88 */ KEY_X | MOD_SHIFT_LEFT << 8,  // capital X
  /* ASCII: 89 */ KEY_Y | MOD_SHIFT_LEFT << 8,  // capital Y
  /* ASCII: 90 */ KEY_W | MOD_SHIFT_LEFT << 8,  // capital Z
  /* ASCII: 91 */ KEY_5 | MOD_ALT_RIGHT << 8, // [ &lsqb;  left square bracket
  /* ASCII: 92 */ KEY_8 | MOD_ALT_RIGHT << 8, // \ &bsol;  backslash, reverse solidus
  /* ASCII: 93 */ KEY_MINUS | MOD_ALT_RIGHT << 8, // ] &rsqb;  right square bracket
  /* ASCII: 94 */ KEY_9 | MOD_ALT_RIGHT << 8, // ^ &circ;  spacing circumflex accent
  /* ASCII: 95 */ KEY_8,  // _ &lowbar;   &horbar; spacing underscore, low line, horizontal bar
  /* ASCII: 96 */ KEY_7 | MOD_ALT_RIGHT << 8, // ` &grave; spacing grave accent, back apostrophe
  /* ASCII: 97 */ KEY_Q,  // small a
  /* ASCII: 98 */ KEY_B,  // small b
  /* ASCII: 99 */ KEY_C,  // small c
  /* ASCII: 100 */ KEY_D, // small d
  /* ASCII: 101 */ KEY_E, // small e
  /* ASCII: 102 */ KEY_F, // small f
  /* ASCII: 103 */ KEY_G, // small g
  /* ASCII: 104 */ KEY_H, // small h
  /* ASCII: 105 */ KEY_I, // small i
  /* ASCII: 106 */ KEY_J, // small j
  /* ASCII: 107 */ KEY_K, // small k
  /* ASCII: 108 */ KEY_L, // small l
  /* ASCII: 109 */ KEY_SEMICOLON, // small m
  /* ASCII: 110 */ KEY_N, // small n
  /* ASCII: 111 */ KEY_O, // small o
  /* ASCII: 112 */ KEY_P, // small p
  /* ASCII: 113 */ KEY_A, // small q
  /* ASCII: 114 */ KEY_R, // small r
  /* ASCII: 115 */ KEY_S, // small s
  /* ASCII: 116 */ KEY_T, // small t
  /* ASCII: 117 */ KEY_U, // small u
  /* ASCII: 118 */ KEY_V, // small v
  /* ASCII: 119 */ KEY_Z, // small w
  /* ASCII: 120 */ KEY_X, // small x
  /* ASCII: 121 */ KEY_Y, // small y
  /* ASCII: 122 */ KEY_W, // small z
  /* ASCII: 123 */ KEY_4 | MOD_ALT_RIGHT << 8,  // { &lcub;  left brace, left curly bracket
  /* ASCII: 124 */ KEY_6 | MOD_ALT_RIGHT << 8,  // | &verbar;  vertical bar
  /* ASCII: 125 */ KEY_EQUAL | MOD_ALT_RIGHT << 8,  // } &rcub;  right brace, right curly bracket
  /* ASCII: 126 */ KEY_2 | MOD_ALT_RIGHT << 8,  // ~ &tilde; tilde accent
  /* ASCII: 127 */ KEY_DELETE,  // delete  DEL
};