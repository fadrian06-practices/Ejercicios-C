/* Figura 6.12: fig06_12.c
  El nombre de un arreglo es lo mismo que &arreglo[0] */
#include <stdio.h>

/* la función main comienza la ejecución del programa */
int main() {
  char arreglo[5]; /* define un arreglo de 5 elementos */

  printf("%11s = %p\n", "arreglo", arreglo);
  printf("%11s = %p\n", "&arreglo[0]", &arreglo[0]);
  printf("%11s = %p\n", "&arreglo", &arreglo);

  return 0; /* indica terminación exitosa */
} /* fin de main */
