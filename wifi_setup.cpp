 #include <WiFi.h>
2 void conectarWiFi(const char* ssid, const char* password) {
3 WiFi.begin(ssid, password);
4 while (WiFi.status() != WL_CONNECTED) {
5 delay(500);
6 }
7 }
