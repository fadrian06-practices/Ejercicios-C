// Figura 15.3: fig15_03.cpp
// Uso de una función inline para calcular
// el volumen de un cubo.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

inline double cubo(const double s) { return s * s * s; }

int main() {
  double lado;

  for (int k = 1; k < 4; k++) {
    cout << "Introduzca la longitud de un lado del cubo: ";
    cin >> lado;
    cout << "El Volumen del cubo con lado " << lado << " es " << cubo(lado)
         << endl;
  } // fin de for

  return 0;
} // fin de la función main
