#include <Ds1302.h>

const int axisX = A0; // axis X connected to A0
const int axisY = A1; // axis Y connected to A1
const int buttonPin = 7; // the joystick button is connected to D7
int valX, valY, valButton = 0; //variables for storing axis and button values

void setup() {
pinMode(buttonPin, INPUT_PULLUP); // configuring D7 as an INPUT with the power on
// the pull-up resistor
Serial.begin(9600);
}

void loop() {
valX = analogRead(axisX); // the value of the X-axis
valY = analogRead(axisY); // the value of the Y-axis
valButton = 1 - digitalRead(buttonPin); // button value (inverted)
// output the values to the port monitor
Serial.print("X:"); Serial.print(valX, DEC);
Serial.print(" | Y:"); Serial.print(valY, DEC);
Serial.print(" | Button: "); Serial.println(valButton, DEC);
delay(500); // pause before the next data reading
}