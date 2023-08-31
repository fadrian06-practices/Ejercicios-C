/* Figura 2.5: fig02_05.c
  Programa de suma */
#include <stdio.h>
/* la función main inicia la ejecución del programa */
int main() {
  int entero1; /* primer número a introducir por el usuario */
  int entero2; /* segundo número introducir por el usuario */
  int suma;    /* variable en la que se almacenará la suma */

  printf("Introduzca el primer entero\n"); /* indicador */
  scanf("%d", &entero1);                   /* lee un entero */

  printf("Introduzca el segundo entero\n"); /* indicador */
  scanf("%d", &entero2);                    /* lee un entero */

  suma = entero1 + entero2;        /* asigna el resultado a suma */
  printf("La suma es %d\n", suma); /* imprime la suma */

  return 0; /* indica que el programa terminó con éxito */
} /* fin de la función main */
