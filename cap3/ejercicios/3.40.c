/*
  Escriba un programa que despliegue el siguiente patrón en la pantalla:

  * * * * * * * *
   * * * * * * * *
  * * * * * * * *
   * * * * * * * *
  * * * * * * * *
   * * * * * * * *
  * * * * * * * *
   * * * * * * * *
 */

/* Imprime patrón de asteriscos */
#include <stdio.h>

int main() {
  int fila = 1;
  int columna = 1;

  while (fila <= 8) {
    if (fila % 2 == 0)
      printf(" ");

    while (columna <= 8) {
      printf("* ");
      ++columna;
    }

    printf("\n");
    columna = 1;
    ++fila;
  }

  printf("\n");
}
