/*
  Rescriba el programa de la figura 4.2 de manera que la inicialización de la
  variable contador se haga en la declaración, en lugar de hacerlo en la
  instrucción for.
 */

/* Figura 4.2: fig04_02_1.c
  Repetición controlada por contador mediante la instrucción for */
#include <stdio.h>

/* La función main inicia la ejecución del programa */
int main() {
  short contador = 1; /* definición del contador */

  /* la inicialización, condición de repetición e incremento */
  for (; contador <= 10; printf("%hd\n", contador), ++contador)
    ;
}
