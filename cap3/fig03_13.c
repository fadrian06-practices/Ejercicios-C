/* Figura 3.13: fig02_13.c
  Preincremento y posincremento */
#include <stdio.h>

/* la función main inicia la ejecución del programa */
int main() {
  int c; /* define la variable */

  /* demuestra el posincremento */
  c = 5;               /* le asigna 5 a c */
  printf("%d\n", c);   /* imprime 5 */
  printf("%d\n", c++); /* imprime 5 y hace el posincremento */
  printf("%d\n", c);   /* imprime 6 */

  /* demuestra el preincremento */
  c = 5;               /* le asigna 5 a c */
  printf("%d\n", c);   /* imprime 5 */
  printf("%d\n", ++c); /* preincrementa y después imprime 6 */
  printf("%d\n", c);   /* imprime 6 */

  return 0; /* indica que el programa finalizó con éxito */
} /* fin de la función main */
