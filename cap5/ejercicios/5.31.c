/*
  Escriba un programa que simule un volado (el lanzamiento de una moneda).

  1. Por cada volado, el programa deberá imprimir Cara o Cruz.
  2. Permita que el programa lance la moneda 100 veces y cuente el número de veces
  que aparece cada lado de la moneda.
  3. Imprima los resultados.

  El programa debe llamar a una función aparte llamada resultado, la cual no
  tiene argumentos y devuelve 0 para Cara y 1 para Cruz. [Nota: Si el programa
  simula de manera realista el lanzamiento de monedas, entonces cada lado debe
  aparecer aproximadamente la mitad de las veces, para un total de 50 Caras y 50
  Cruces.]
 */

/* Juego del lanzamiento de moneda */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum LadoDeMoneda { CARA, CRUZ };

enum LadoDeMoneda resultado() {
  return ((rand() % 10) + 1) <= 5;
}

int main() {
  short caras = 0, cruces = 0;
  short contador = 1;

  srand(time(NULL));

  for (; contador <= 100; ++contador) {
    printf("%3d  ", contador);
    if (resultado() == CRUZ) {
      ++cruces;
      printf("Cruz");
    } else {
      ++caras;
      printf("Cara");
    }

    printf("\n");
  }

  printf("\n\n");
  printf("Resultados de cara: %d\n", caras);
  printf("Resultados de cruz: %d\n", cruces);
  printf("\n");
}
