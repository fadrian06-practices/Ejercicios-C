/*
  Escriba un programa que imprima los n�meros del 1 al 4 en la misma l�nea.
  Escriba el programa utilizando los siguientes m�todos:

  a) Mediante una instrucci�n printf sin especificadores de conversi�n.
  b) Mediante una instrucci�n printf con cuatro especificadores de conversi�n.
  c) Mediante cuatro instrucciones printf.
 */

/* Imprime los n�meros del 1 al 4 */
#include <stdio.h>

int main() {
  printf("1 2 3 4\n");

  printf("%d %d %d %d\n", 1, 2, 3, 4);

  printf("1 ");
  printf("2 ");
  printf("3 ");
  printf("4\n");
}
