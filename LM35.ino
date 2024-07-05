/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 */

const int thermistorPin = A0; // Analog pin connected to thermistor
const int redLedPin = 5;    // Digital pin connected to red LED
const int yellowLedPin = 6;  // Digital pin connected to yellow LED
const int greenLedPin = 7;  // Digital pin connected to green LED

int thermistorValue;
float temperature;

void setup() {
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
}

void loop() {
  thermistorValue = analogRead(thermistorPin);
  // Convert analog reading to temperature (replace with actual NTC thermistor formula if needed)
  temperature = thermistorValue * (5.0 / 1023.0); 

  if (temperature < 30) {
    digitalWrite(greenLedPin, HIGH);  // Green LED on for temperatures below 30°C
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, LOW);
  } else if (temperature >= 30 && temperature <= 80) {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH); // Yellow LED on for temperatures between 30°C and 80°C (inclusive)
    digitalWrite(redLedPin, LOW);
  } else {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, HIGH);    // Red LED on for temperatures above 80°C
  }
  delay(1000); // Delay for 1 second before reading again
}