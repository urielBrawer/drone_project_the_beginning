void setup() {
  // Start the Serial communication at 9600 baud rate
  Serial.begin(9600);
  Serial.println("Arduino ready to receive pings...");
}

void loop() {
  // Check if there's data available on the Serial input
  if (Serial.available() > 0) {
    // Read the incoming string from the serial input
    String input = Serial.readStringUntil('\n');
    // Remove any trailing newline characters
    input.trim(); // This will modify the input string in place
    // Check if the input string matches "ping"
    if (input == "ping") {
      // Respond with a "pong" message
      Serial.println("pong");
    }
  }
}
