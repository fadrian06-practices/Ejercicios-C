// Figura 15.7: fig15_07.cpp
// Las referencias se deben inicializar
#include <iostream>

using std::cout;
using std::endl;

int main() {
  int x = 3, &y; // Error: y se debe inicializar

  cout << "x = " << x << endl << "y = " << y << endl;
  y = 7;
  cout << "x = " << x << endl << "y = " << y << endl;

  return 0;
} // fin de la función main
