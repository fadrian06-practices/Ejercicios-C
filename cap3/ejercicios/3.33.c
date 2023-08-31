/*
  Escriba un programa que lea la medida de uno de los lados de un cuadrado y que
  despliegue dicho cuadrado con asteriscos. Su programa debe trabajar con
  cuadrados de tamaño entre 1 y 20. Por ejemplo, si su programa lee un tamaño 4,
  debe desplegar:

  ****
  ****
  ****
  ****
*/

/* Imprime cuadrados de longitud n donde 1 <= n <= 20 */
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
    if (lado <= 20)
      while (contadorFilas++ < lado) {
        contadorColumnas = 0;
        while (contadorColumnas++ < lado) {
          printf("*");

          if (contadorColumnas == lado)
            printf("\n");
        }
      }

  printf("\n");
}
