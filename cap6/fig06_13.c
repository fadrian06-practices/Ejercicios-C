/* Figura 6.13: fig06_13.c
  Paso de arreglos y de elementos de un arreglo a funciones */
#include <stdio.h>
#define TAMANIO 5

/* prototipos de las funciones */
void modificaArreglo(int b[], int tamanio);
void modificaElemento(int e);
void imprimirArreglo(int b[], int tamanio);

/* la función main comienza la ejecución del programa */
int main() {
  int a[TAMANIO] = {0, 1, 2, 3, 4}; /* inicializa a */

  printf("Efectos de pasar arreglos completos por referencia:\n\n");
  printf("los valores del arreglo original son:\n");

  /* muestra el arreglo original */
  imprimirArreglo(a, TAMANIO);

  printf("\n");

  /* pasa el arreglo a modificaArreglo por referencia */
  modificaArreglo(a, TAMANIO);

  printf("Los valores del arreglo modificado son:\n");
  /* muestra el arreglo modificado */
  imprimirArreglo(a, TAMANIO);

  /* muestra el valor de a[3] */
  printf("\n\nEfectos de pasar un elemento del arreglo por valor:\n\n");
  printf("El valor de a[3] es %d\n", a[3]);

  modificaElemento(a[3]); /* pasa el elemento a[3] del arreglo por valor */

  /* muestra el valor de a[3] */
  printf("El valor de a[3] es %d\n", a[3]);

  return 0; /* indica terminación exitosa */
} /* fin de main */

void imprimirArreglo(int b[], int tamanio) {
  int i = 0; /* contador */

  for (; i < tamanio; i++) {
    printf("%3d", b[i]);
  } /* fin de for */
}

/* en la función modificaArreglo, "b" apunta al arreglo original "a" en memoria
 */
void modificaArreglo(int b[], int tamanio) {
  int j; /* contador */

  /* multiplica cada elemento del arreglo por 2 */
  for (j = 0; j < tamanio; j++) {
    b[j] *= 2;
  } /* fin de for */
} /* fin de la función modificaArreglo */

/* en la función modificaElemento, "e" es una copia local del elemento a[3] del
 * arreglo que se pasó desde main */
void modificaElemento(int e) {
  /* multiplica el parámetro por 2 */
  printf("El valor en modificaElemento es %d\n", e *= 2);
} /* fin de la función modificaElemento */
