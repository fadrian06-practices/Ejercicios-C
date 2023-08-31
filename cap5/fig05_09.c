/* Figura 5.9: fig05_09.c
  Randomización del programa de dados */
#include <stdio.h>
#include <stdlib.h>

/* la función main comienza la ejecución del programa */
int main() {
  int i;            /* contador */
  unsigned semilla; /* número que se utiliza para establecer la semilla del
  generador de números aleatorios */

  printf("Introduzca la semilla: ");
  scanf("%u", &semilla); /* observe el %u para el unsigned */

  srand(semilla);

  /* repite 10 veces */
  for (i = 1; i <= 10; ++i) {
    /* obtiene y despliega un número aleatorio entre 1 y 6 */
    printf("%10d", 1 + (rand() % 6));

    /* si contador es divisible entre 5, comienza una nueva línea de salida */
    if (i % 5 == 0) {
      printf("\n");
    } /* fin de if */
  }   /* fin de for */

  return 0; /* indica terminación exitosa */
} /* fin de main */
