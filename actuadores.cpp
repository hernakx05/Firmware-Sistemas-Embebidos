chivo3: actuadores.cpp
1 // actuadores.cpp
2 #include <Arduino.h>
3 void activarRele(int pin, bool estado) {
4 digitalWrite(pin, estado ? HIGH : LOW);
5 }
