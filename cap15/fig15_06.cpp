// Figura 15.6: fig15_06.cpp
// Las referencias se deben inicializar
#include <iostream>

using std::cout;
using std::endl;

int main() {
  int x = 3, &y = x; // y no es un alias para x

  cout << "x = " << x << endl << "y = " << y << endl;
  y = 7;
  cout << "x = " << x << endl << "y = " << y << endl;

  return 0;
} // fin de la función main
