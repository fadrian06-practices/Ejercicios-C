/* Figura 4.1: fig04_01.c
  Repetición controlada por contador */
#include <stdio.h>

/* La función main inicia la ejecución del programa */
int main() {
  int contador = 1; /* inicialización */

  while (contador <= 10) {    /* condición de repetición */
    printf("%d\n", contador); /* despliega el contador */
    ++contador;               /* incremento */
  }                           /* fin del while */

  return 0; /* indica terminación exitosa */
} /* fin de la función main */
