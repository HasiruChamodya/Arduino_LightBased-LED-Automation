#include <Arduino.h>

// put function declarations here:
int lightSensorPin = A0; // Pin connected to the light sensor
int lightSensorValue ; // Variable to store the light sensor value
int delayTime = 1000; // Delay time in milliseconds
void setup() {
  // put your setup code here, to run once:

pinMode(lightSensorPin, INPUT); // Set the light sensor pin as input
Serial.begin(9600); // Initialize serial communication at 9600 bps
}

void loop() {
  // put your main code here, to run repeatedly:
lightSensorValue = analogRead(lightSensorPin); // Read the light sensor value
Serial.print("Light Sensor Value: "); // Print the message
Serial.print(lightSensorValue); // Print the light sensor value
Serial.println(); // Print a new line
delay(delayTime); // Wait for 1 second before the next reading

}

