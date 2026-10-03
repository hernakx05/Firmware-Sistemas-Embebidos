// src/lectura_boton.cpp
2 #include <Arduino.h>
3 bool estaBotonPresionado(int pin) {
4 return digitalRead(pin) == HIGH;
5 }
