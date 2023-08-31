/*
  Imprima una tabla con los equivalentes en decimal, binario, octal, y
  hexadecimal. Si desea intentar este ejercicio y no conoce estos sistemas de
  numeración, primero lea el Apéndice E.
 */

/* Equivalencias Decimal-Binario-Octal-Hexadecimal */
#include <stdio.h>

int main() {
  int decimal, copiaDecimal, eleccion, digito, posicion;

  printf("Cuantos numeros desea ver? ");
  scanf("%d", &eleccion);

  printf("\n\nDecimal\t\tBinario\t\tOctal\t\tHexadecimal\n\n");
  printf("0\t\t0\t\t0\t\t0\n");

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
  
  printf("\n");
}
