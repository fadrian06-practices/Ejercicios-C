/* Figura 6.6: fig06_06.c
  Calcula la suma de los elementos del arreglo */
#include <stdio.h>
#define TAMANIO 12

/* la función main comienza la ejecución del programa */
int main() {
  /* utiliza una lista de inicialización para inicializar el arreglo */
  int a[TAMANIO] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
  int i;         /* contador */
  int total = 0; /* suma del arreglo */

  /* suma el contenido del arreglo a */
  for (i = 0; i < TAMANIO; i++) {
    total += a[i];
  } /* fin de for */

  printf("El total de los elementos del arreglo es %d\n", total);
  return 0; /* indica terminación exitosa */
} /* fin de main */
