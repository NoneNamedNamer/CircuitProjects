# include  <Servo.h> // Подключение библиотеки Servo 
Servo servo1;  // Создание объекта servo1 класса Servo 
const  int  pinServo =  8 ;  // Пин для подключения сервопривода 
const  int  POT =  0 ;  // Аналоговый вход A0 для подключения  потенциометра 
int  valpot =  0 ;  // Переменная для хранения значения  потенциометра 
int  angleServo =  0 ;  // Переменная для хранения угла  поворота сервопривода 
void  setup  ()  { 
servo1.attach(pinServo);  // Подключение сервопривода  к выводу pinServo 
} 
void  loop  ()  { 
valpot = analogRead(POT);  // Чтение данных потенциометра 
angleServo =  map (valpot,  0 ,  1023 ,  0 ,  180 );  // Масштабирование  значения к 
//интервалу 0-180 
servo1.write(angleServo);  // Поворот сервопривода  на полученный угол 
delay( 15 );  // Пауза для ожидания поворота сервопривода 
}