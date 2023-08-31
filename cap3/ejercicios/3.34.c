/*
  Modifique el programa que escribió en el ejercicio 3.33 de manera que
  despliegue el perímetro del cuadrado. Por ejemplo, si su programa lee un
  tamaño 5, debe desplegar:
    *****
    *   *
    *   *
    *   *
    *****
*/

/* Imprime perímetros de cuadrados de lado n, donde 1 <= n <= 20 */
#include <stdio.h>

int main() {
  int lado; /* La medida de uno de los lados del cuadrado */
  int contadorFilas = 0;
  int contadorColumnas;

  printf("Introduzca la medida de uno de los lados del cuadrado");
  printf(" (entre 1 y 20): ");
  scanf("%d", &lado);

  printf("\n");

  if (lado >= 1)
    if (lado <= 20) {
      while (contadorFilas++ < lado) {
        contadorColumnas = 0;
        while (contadorColumnas++ < lado) {
          if (contadorFilas == 1) {
            printf("*");

            if (contadorColumnas == lado)
              printf("\n");
          } else if (contadorFilas == lado) {
            printf("*");

            if (contadorColumnas == lado)
              printf("\n");
          } else {
            if (contadorColumnas == 1)
              printf("*");
            else if (contadorColumnas == lado) {
              printf("*");
              printf("\n");
            } else
              printf(" ");
          }
        }
      }
    }

  printf("\n");
}
