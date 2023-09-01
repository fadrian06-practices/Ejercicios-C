/* Figura 6.14: fig06_14.c
  Demostración del calificador de tipo const con arreglos */
#include <stdio.h>

void intentaModifElArreglo(const int b[]); /* prototipo de la función */

/* la función main comienza la ejecución del programa */
int main() {
  int a[] = {10, 20, 30}; /* inicializa a */

  intentaModifElArreglo(a);
  printf("%d %d %d\n", a[0], a[1], a[2]);

  return 0; /* indica terminación exitosa */
} /* fin de main */

/* en la función intentaModifElArreglo, el arreglo b es const, por lo tanto no
 * se puede utilizar para modificar el arreglo original a en main. */
void intentaModifElArreglo(const int b[]) {
  b[0] /= 2; /* error */
  b[1] /= 2; /* error */
  b[2] /= 2; /* error */
} /* fin de la función intentaModifElArreglo */
