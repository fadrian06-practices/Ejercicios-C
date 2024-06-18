/*
  Escriba un programa que lea un entero y que determine e imprima si es par o
  impar. [Pista: Utilice el operador módulo. Un número par es un múltiplo de
  dos. Cualquier múltiplo de 2 arroja un residuo de cero, cuando se divide
  entre 2.]
 */

/* Imprime si un entero es par o impar */
#include <stdio.h>

int main() {
  int entero;

  printf("Introduce un entero: ");
  scanf("%d", &entero);

  if (entero % 2 == 0) {
    printf("%d es par\n", entero);
  }

  if (entero % 2 != 0) {
    printf("%d es impar\n", entero);
  }
}
