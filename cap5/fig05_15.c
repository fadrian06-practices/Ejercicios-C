/* Figura 5.15: fig05_15.c
  Función recursiva de fibonacci */
#include <stdio.h>

long fibonacci(long n); /* prototipo de la función */

/* la función main comienza la ejecución del programa */
int main() {
  long resultado; /* valor fibonacci */
  long numero;    /* número a introducir por el usuario */

  /* obtiene un entero del usuario */
  printf("Introduzca un entero: ");
  scanf("%ld", &numero);

  /* calcula el valor fibonacci del número introducido por el usuario */
  resultado = fibonacci(numero);

  /* despliega el resultado */
  printf("Fibonacci(%ld) = %ld\n", numero, resultado);

  return 0; /* indica terminación exitosa */
} /* fin de main */

/* definición de la función recursiva fibonacci */
long fibonacci(long n) {
  /* caso base */
  if (n == 0 || n == 1) {
    return n;
  } /* fin de if */
  else { /* paso recursivo */
    return fibonacci(n - 1) + fibonacci(n - 2);
  } /* fin de else */
} /* fin de la función fibonacci */
