/*
  Escriba un programa que imprima una tabla de todos lo números romanos
  equivalentes a los números decimales en el rango de 1 a 100.
 */

/* Imprime los 100 primeros números romanos */
#include <stdio.h>

int main() {
  short contador, copiaContador, unidad, decena, centena;
  printf("PRIMEROS 100 NUMEROS ROMANOS\n\n");
  printf("Decimal\tRomano\n-------\t------\n");

  for (contador = 1; contador <= 100; ++contador) {
    printf("%hd\t", contador);

    copiaContador = contador;
    unidad = copiaContador % 10;
    copiaContador /= 10;
    decena = copiaContador % 10;
    copiaContador /= 10;
    centena = copiaContador % 10;

    if (centena == 1)
      printf("C");

    switch (decena) {
    case 1:
      printf("X");
      break;
    case 2:
      printf("XX");
      break;
    case 3:
      printf("XXX");
      break;
    case 4:
      printf("XL");
      break;
    case 5:
      printf("L");
      break;
    case 6:
      printf("LX");
      break;
    case 7:
      printf("LXX");
      break;
    case 8:
      printf("LXXX");
      break;
    case 9:
      printf("XC");
    }

    switch (unidad) {
    case 1:
      printf("I");
      break;
    case 2:
      printf("II");
      break;
    case 3:
      printf("III");
      break;
    case 4:
      printf("IV");
      break;
    case 5:
      printf("V");
      break;
    case 6:
      printf("VI");
      break;
    case 7:
      printf("VII");
      break;
    case 8:
      printf("VIII");
      break;
    case 9:
      printf("IX");
    }

    printf("\n");
  }

  printf("\n");
}
