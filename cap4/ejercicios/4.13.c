/* Escriba un programa que calcule
  e imprima el producto de enteros del 1 al 15. */

/* Imprime el producto de los 15 primeros enteros */
#include <stdio.h>

int main() {
  double numero = 1, producto = 1;

  for (; numero <= 15; ++numero)
    producto *= numero;

  printf("El producto de los enteros del 1 al 15 es: %.0f\n\n", producto);
}
