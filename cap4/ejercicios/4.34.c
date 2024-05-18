/*
  Escriba un programa que imprima una tabla que contenga los equivalentes de los
  números 1 a 256 en decimal, binario, octal, y hexadecimal. Si desea intentar
  este ejercicio y no conoce estos sistemas de numeración, primero lea el
  Apéndice E.
*/

/* Imprime los primeros 256 decimales, binarios, octales y hexadecimales */
#include <stdio.h>

int main() {
  short decimal, copiaDecimal, eleccion = 256, digito, posicion;

  printf("Decimal\t\tBinario\t\tOctal\t\tHexadecimal\n\n");

  for (decimal = 1; decimal <= eleccion; ++decimal) {
    // Imprimir el decimal
    printf("%d\t\t", decimal);

    // Imprimir el binario
    for (posicion = 1; posicion <= decimal; posicion *= 2)
      ;

    copiaDecimal = decimal;
    digito = copiaDecimal / posicion;

    if (digito)
      printf("%d", digito);

    copiaDecimal %= posicion;
    posicion /= 2;

    for (; posicion; copiaDecimal %= posicion, posicion /= 2) {
      digito = copiaDecimal / posicion;
      printf("%d", digito);
    }

    printf("\t\t");

    // Imprimir el octal
    for (posicion = 1; posicion <= decimal; posicion *= 8)
      ;

    copiaDecimal = decimal;
    digito = copiaDecimal / posicion;

    if (digito)
      printf("%d", digito);

    copiaDecimal %= posicion;
    posicion /= 8;

    for (; posicion; copiaDecimal %= posicion, posicion /= 8) {
      digito = copiaDecimal / posicion;
      printf("%d", digito);
    }

    printf("\t\t");

    // Imprimir el hexadecimal
    for (posicion = 1; posicion <= decimal; posicion *= 16)
      ;

    copiaDecimal = decimal;
    digito = copiaDecimal / posicion;

    switch (digito) {
    case 15:
      printf("F");
      break;
    case 14:
      printf("E");
      break;
    case 13:
      printf("D");
      break;
    case 12:
      printf("C");
      break;
    case 11:
      printf("B");
      break;
    case 10:
      printf("A");
      break;
    case 0:
      break;
    default:
      printf("%d", digito);
    }

    copiaDecimal %= posicion;
    posicion /= 16;

    for (; posicion; copiaDecimal %= posicion, posicion /= 16) {
      digito = copiaDecimal / posicion;
      switch (digito) {
      case 15:
        printf("F");
        break;
      case 14:
        printf("E");
        break;
      case 13:
        printf("D");
        break;
      case 12:
        printf("C");
        break;
      case 11:
        printf("B");
        break;
      case 10:
        printf("A");
        break;
      default:
        printf("%d", digito);
      }
    }

    printf("\n");
  }
}
