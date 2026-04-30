// Figura 15.1: fig15_01.cpp
// Programa de suma
#include <iostream>

int main() {
  int entero1;

  std::cout << "Introduzca el primer entero\n";
  std::cin >> entero1;

  int entero2, suma; // declaración

  std::cout << "Introduzca el segundo entero\n";
  std::cin >> entero2;
  suma = entero1 + entero2;
  std::cout << "La suma es " << suma << std::endl;

  return 0; // indica que el programa terminó de manera exitosa
} // fin de la función main
