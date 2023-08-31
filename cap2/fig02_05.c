/* Figura 2.5: fig02_05.c
  Programa de suma */
#include <stdio.h>
/* la funci�n main inicia la ejecuci�n del programa */
int main() {
  int entero1; /* primer n�mero a introducir por el usuario */
  int entero2; /* segundo n�mero introducir por el usuario */
  int suma;    /* variable en la que se almacenar� la suma */

  printf("Introduzca el primer entero\n"); /* indicador */
  scanf("%d", &entero1);                   /* lee un entero */

  printf("Introduzca el segundo entero\n"); /* indicador */
  scanf("%d", &entero2);                    /* lee un entero */

  suma = entero1 + entero2;        /* asigna el resultado a suma */
  printf("La suma es %d\n", suma); /* imprime la suma */

  return 0; /* indica que el programa termin� con �xito */
} /* fin de la funci�n main */
