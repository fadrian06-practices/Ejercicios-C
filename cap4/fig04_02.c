/* Figura 4.2: fig04_02.c
  Repetición controlada por contador mediante la instrucción for */
#include <stdio.h>

/* La función main inicia la ejecución del programa */
int main() {
  int contador; /* definición del contador */

  /* la inicialización, condición de repetición e incremento */
  for (contador = 1; contador <= 10; ++contador) {
    printf("%d\n", contador);
  } /* fin del for */

  return 0; /* indica terminación exitosa del programa */
} /* fin de la función main */
