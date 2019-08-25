#include <EEPROM.h>

// start reading from the first byte (address 0) of the EEPROM
int address = 0;
byte value;

void setup() {
  // initialize serial and wait for port to open:
  Serial_begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
}

void loop() {
  // read a byte from the current address of the EEPROM
  value = EEPROM_read(address);

  Serial_print_u(address);
  Serial_print_s("\t");
  Serial_print_ub(value, DEC);
  Serial_println();

  // Advance to the next address, when at the end restart at the beginning.

  address = address + 1;
  if (address == EEPROM_length()) {
    address = 0;
  }

  /***
    As the EEPROM sizes are powers of two, wrapping (preventing overflow) of an
    EEPROM address is also doable by a bitwise and of the length - 1.

    ++address &= EEPROM_length() - 1;
  ***/

  delay(500);
}
