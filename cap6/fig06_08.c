/* Figura 6.8: fig06_08.c
  Programa de impresión de un Histograma */
#include <stdio.h>
#define TAMANIO 10

/* la función main comienza la ejecución del programa */
int main() {
  /* usar una lista de inicialización para inicializar el arreglo n */
  int n[TAMANIO] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
  int i; /* contador for externo para los elementos del arreglo */
  int j; /* contador for interno cuenta *s en cada barra del histograma */

  printf("%s%13s%17s\n", "Elemento", "Valor", "Histograma");

  /* para cada elemento del arreglo n, muestra una barra en el histograma */
  for (i = 0; i < TAMANIO; i++) {
    printf("%8d%13d%7c", i, n[i], ' ');

    for (j = 0; j <= n[i]; j++) { /* imprime una barra */
      printf("%c", '*');
    } /* fin del for interno */

    printf("\n"); /* fin de una barra en el histograma */
  }               /* fin del for externo */

  return 0; /* indica terminación exitosa */
} /* fin de main */
