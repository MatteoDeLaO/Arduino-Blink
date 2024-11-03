
void setup() {
   pinMode(9, OUTPUT); // Makes input 9 a output.
}
void loop() {
  digitalWrite(9, 1);  // turn the LED on   delay(1000);                      // wait for a second
  digitalWrite(9, 0);   // turn the LED off 
  delay(1000);  
}