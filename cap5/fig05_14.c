/* Figura 5.14: fig05_14.c
  Función factorial recursiva */
#include <stdio.h>

long factorial(long numero); /* prototipo de la función */

/* la función main comienza la ejecución del programa */
int main() {
  int i; /* contador */

  /* repite 11 veces; durante cada iteración, calcula el factorial(i)
  y despliega el resultado */
  for (i = 0; i <= 10; ++i) {
    printf("%2d! = %ld\n", i, factorial(i));
  } /* fin de for */

  return 0; /* indica terminación exitosa */
} /* fin de main */

/* definición recursiva de la función factorial */
long factorial(long numero) {
  /* caso base */
  if (numero <= 1) {
    return 1;
  }      /* fin de if */
  else { /* paso recursivo */
    return (numero * factorial(numero - 1));
  } /* fin de else */
} /* fin de la función factorial */
