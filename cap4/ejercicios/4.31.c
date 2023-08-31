/*
  Escriba un programa que imprima la siguiente figura de rombo. Usted puede
  utilizar instrucciones printf que impriman ya sea un asterisco individual (*),
  o un espacio en blanco individual. Maximice el uso de las repeticiones
  (mediante instrucciones for anidadas) y minimice el número de instrucciones
  printf.
      *
     ***
    *****
   *******
  *********
   *******
    *****
     ***
      *
*/

/* Imprime un rombo */
#include <stdio.h>

int main() {
  short espacios, asterisco, fila;

  /*----------  Mitad superior + mitad  ----------*/
  for (fila = 1; fila <= 5; ++fila) {
    for (espacios = fila; espacios < 5; ++espacios)
      printf(" ");

    for (asterisco = 1; asterisco < fila * 2; ++asterisco)
      printf("*");

    printf("\n");
  }

  /*----------  Mitad inferior  ----------*/
  for (fila = 5 - 1; fila > 0; --fila) {
    for (espacios = 5; espacios > fila; --espacios)
      printf(" ");

    for (asterisco = 1; asterisco < fila * 2; ++asterisco)
      printf("*");

    printf("\n");
  }
}
