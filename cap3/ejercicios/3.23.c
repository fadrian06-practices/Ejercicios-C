/*
  Escriba un programa que utilice un ciclo para imprimir los números 1 a 10
  dentro de la misma línea, separados cada uno por tres espacios en blanco.
*/

/* Imprime los números del 1 al 10 */
#include <stdio.h>

int main() {
  int i = 1;

  while (i <= 10)
    printf("%d   ", i++);

  printf("\n\n");
}
