/* Figura 6.15: fig06_15.c
  Este programa ordena los valores de un arreglo en orden ascendente */
#include <stdio.h>
#define TAMANIO 10

void imprimirArreglo(const int b[], int tamanio) {
  int i = 0;

  for (; i < TAMANIO; i++) {
    printf("%4d", b[i]);
  } /* fin de for */
}

/* la función main comienza la ejecución del programa */
int main() {
  /* inicializa a */
  int a[TAMANIO] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
  int pasadas;  /* contador de pasadas */
  int i;        /* contador de comparaciones */
  int almacena; /* ubicación temporal utilizada para el intercambio de elementos
                 */

  printf("Elementos de datos en el orden original\n");
  /* muestra el arreglo original */
  imprimirArreglo(a, TAMANIO);

  /* ordenamiento burbuja */
  /* ciclo para controlar el número de pasos */
  for (pasadas = 1; pasadas < TAMANIO; pasadas++) {

    /* ciclo para controlar el número de comparaciones por pasada */
    for (i = 0; i < TAMANIO; i++) {

      /* compara los elementos adyacentes y los intercambia si el primer
       * elemento es mayor que el segundo */
      if (a[i] > a[i + 1]) {
        almacena = a[i];
        a[i] = a[i + 1];
        a[i + 1] = almacena;
      } /* fin de if */

    } /* fin del for interno */

  } /* fin del for externo */

  printf("\n\nElementos de datos en orden ascendente\n");
  /* muestra el arreglo ordenado */
  imprimirArreglo(a, TAMANIO);

  printf("\n\n");
  return 0; /* indica terminación exitosa */
} /* fin de main */
