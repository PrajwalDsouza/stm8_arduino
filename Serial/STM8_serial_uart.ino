#include <Serial.h>

void setup() {
  //Pin PD5 is TX and pin PD6 is RX
  Serial_begin(9600); // Initialize serial communication at a baud rate of 9600 (9600 bits per second)
}

void loop() {

  Serial_write('Hello World!');  // Transmit 'Hello World!' serially
  while (Serial_available()) {
    Serial_print_s(Serial_read()); // Print out incoming data while incoming bytes are available
  }

  delay(10);
}
