void setup() {
  // initialize digital pin LED_BUILTIN as an output. The built-in LED is at pin PB5 on the board. 
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait 1000ms for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait 1000ms for a second
}
