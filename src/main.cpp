#include <Arduino.h>

// put function declarations here:
int lightSensorPin = A0; // Pin connected to the light sensor
int lightSensorValue ; // Variable to store the light sensor value
int delayTime = 1000; // Delay time in milliseconds
int greenLedPin = 2; // Pin connected to the green LED
int redLedPin = 3; // Pin connected to the red LED
void setup() {
  // put your setup code here, to run once:

pinMode(lightSensorPin, INPUT); // Set the light sensor pin as input
pinMode(greenLedPin, OUTPUT); // Set the green LED pin as output
pinMode(redLedPin, OUTPUT); // Set the red LED pin as output
Serial.begin(9600); // Initialize serial communication at 9600 bps
}

void loop() {
  // put your main code here, to run repeatedly:
lightSensorValue = analogRead(lightSensorPin); // Read the light sensor value
Serial.print("Light Sensor Value: "); // Print the message
Serial.print(lightSensorValue); // Print the light sensor value
Serial.println(); // Print a new line
delay(delayTime); // Wait for 1 second before the next reading

if(lightSensorValue < 600){
digitalWrite(greenLedPin, HIGH); // Turn on the green LED
}
else 
digitalWrite(redLedPin, HIGH); // Turn on the red LED
}

