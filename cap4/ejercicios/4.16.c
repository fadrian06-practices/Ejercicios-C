/*
  Escriba un programa que imprima los patrones siguientes de manera separada,
  uno debajo del otro. Utilice ciclos for para generar los patrones. Todos los
  asteriscos (*) deben imprimirse mediante una sola instrucción printf de la
  forma printf(“*”); (esto provoca que los asteriscos se impriman uno al lado
  del otro). Pista: Los dos últimos patrones requieren que cada línea comience
  con el número apropiado de espacios en blanco.

      (A)          (B)           (C)               (D)
  *             **********    **********                 *
  **            *********      *********                **
  ***           ********        ********               ***
  ****          *******          *******              ****
  *****         ******            ******             *****
  ******        *****              *****            ******
  *******       ****                ****           *******
  ********      ***                  ***          ********
  *********     **                    **         *********
  **********    *                      *        **********
 */

/* Imprime patrones de asteriscos */
#include <stdio.h>

int main() {
  /*----------  PATRÓN A  ----------*/;
  int fila = 1, columna;

  for (; fila <= 10; ++fila) {
    for (columna = 1; columna <= fila; ++columna)
      printf("*");

    printf("\n");
  }

  printf("\n");

  /*----------  PATRÓN B  ----------*/
  fila = 10;

  for (; fila; --fila) {
    for (columna = 1; columna <= fila; ++columna)
      printf("*");

    printf("\n");
  }
  printf("\n");

  /*----------  PATRÓN C  ----------*/
  fila = 10;
  int espacios;

  for (; fila; --fila) {
    espacios = 10 - fila;

    for (; espacios; --espacios)
      printf(" ");

    for (columna = fila; columna; --columna)
      printf("*");

    printf("\n");
  }

  printf("\n");

  /*----------  PATRÓN D  ----------*/
  fila = 1;

  for (; fila <= 10; ++fila) {
    espacios = 10 - fila;

    for (; espacios; --espacios)
      printf(" ");

    for (columna = fila; columna; --columna)
      printf("*");

    printf("\n");
  }

  printf("\n");
}
