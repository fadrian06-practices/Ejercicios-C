/* Escriba un programa que calcule
  e imprima la suma de los enteros pares del 2 al 30. */

/* Imprime la suma de los enteros pares entre 2 y 30 */
#include <stdio.h>

int main() {
  int numero = 2, sumatoria = 0;

  for (; numero <= 30; numero += 2)
    sumatoria += numero;

  printf("La suma de los numeros pares entre 2 y 30 es: %d\n\n", sumatoria);
}
