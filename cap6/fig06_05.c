/* Figura 6.5: fig06_05.c
  Inicializa los elementos del arreglo s a los enteros pares de 2 a 20 */
#include <stdio.h>
#define TAMANIO 10

/* la función main comienza la ejecución del programa */
int main() {
  /* se puede utilizar la constante simbólica TAMANIO para especificar el tamaño
   * del arreglo */
  int s[TAMANIO]; /* el arreglo contiene 10 elementos */
  int j;          /* contador */

  for (j = 0; j < TAMANIO; j++) { /* establece los valores */
    s[j] = 2 + 2 * j;
  } /* fin de for */

  printf("%s%13s\n", "Elemento", "Valor");

  /* muestra el contenido del arreglo s de forma tabular */
  for (j = 0; j < TAMANIO; j++) {
    printf("%8d%13d\n", j, s[j]);
  } /* fin de for */

  return 0; /* indica terminación exitosa */
} /* fin de main */
