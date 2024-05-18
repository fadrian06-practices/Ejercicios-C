/*
  Escriba un programa que imprima los números del 1 al 4 en la misma línea.
  Escriba el programa utilizando los siguientes métodos:

  a) Mediante una instrucción printf sin especificadores de conversión.
  b) Mediante una instrucción printf con cuatro especificadores de conversión.
  c) Mediante cuatro instrucciones printf.
 */

/* Imprime los números del 1 al 4 */
#include <stdio.h>

int main() {
  printf("1 2 3 4\n");

  printf("%d %d %d %d\n", 1, 2, 3, 4);

  printf("1 ");
  printf("2 ");
  printf("3 ");
  printf("4\n");
}
