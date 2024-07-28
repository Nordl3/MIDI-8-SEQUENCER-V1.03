// Define the pin for the built-in LED
const int ledPin = 13; // D13 on the Arduino Nano

// Define the pin for the input signal
const int inputPin = A5; // D19 on the Arduino Nano

void setup() {
  // Initialize the built-in LED pin as an output
  pinMode(ledPin, OUTPUT);

  // Initialize the input pin as an input
  pinMode(inputPin, INPUT);
}

void loop() {
  // Read the state of the input pin
  int inputState = digitalRead(inputPin);

  // Set the LED state to match the input pin state
  digitalWrite(ledPin, inputState);
}
