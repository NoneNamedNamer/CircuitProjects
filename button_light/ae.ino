#include <Ds1302.h>

const int axisX = A0; // ось X подключена к A0
const int axisY = A1; // ось Y подключена к A1
const int buttonPin = 7; // кнопка джойстика подключена к D7
int valX, valY, valButton = 0; // переменные для хранения значений осей и кнопки

void setup() {
pinMode(buttonPin, INPUT_PULLUP); // конфигурируем D7 как INPUT с включением
//подтягивающего резистора
Serial.begin(9600);
}

void loop() {
valX = analogRead(axisX); // значение оси X
valY = analogRead(axisY); // значение оси Y
valButton = 1 - digitalRead(buttonPin); // значение кнопки (инвертированное)
// выводим значения в монитор порта
Serial.print("X:"); Serial.print(valX, DEC);
Serial.print(" | Y:"); Serial.print(valY, DEC);
Serial.print(" | Button: "); Serial.println(valButton, DEC);
delay(500); // пауза перед следующим считыванием данных
}