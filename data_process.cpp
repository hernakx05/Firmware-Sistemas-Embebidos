// procesamiento de datos
2 #include <iostream>
3 #include <vector>
4
5 double calcularPromedio(const std::vector<int>& datosSensor) {
6 if(datosSensor.empty()) return 0.0;
7 double suma = 0;
8 for(int val : datosSensor) suma += val;
9 return suma / datosSensor.size();
10 }
11
12 int main() {
13 std::vector<int> datos = {12, 15, 20, 22};
14 std::cout << "Promedio: " << calcularPromedio(datos) << std::endl;
15 return 0;
16 }
