/* Figura 5.7: fig05_07.c
  Escalamiento y cambio de enteros producidos por 1 + rand() % 6 */

#include <stdio.h>
#include <stdlib.h>

/* la función main comienza la ejecución del programa */
int main() {
  int i; /* contador */

  /* repite 20 veces */
  for (i = 1; i <= 20; ++i) {
    /* obtiene y despliega un número aleatorio entre 1 y 6 */
    printf("%10d", 1 + (rand() % 6));

    /* si el contador es divisible entre 5,
    comienza una nueva linea de salida */
    if (i % 5 == 0) {
      printf("\n");
    } /* fin de if */
  }   /* fin de for */

  return 0;
} /* fin de main */
