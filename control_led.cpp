// src/control_led.cpp
2 #include <Arduino.h>
3 void parpadearLED(int pin, int retrasoMs) {
4 digitalWrite(pin, HIGH);
5 delay(retrasoMs);
6 digitalWrite(pin, LOW);
7 delay(retrasoMs);
8 }
