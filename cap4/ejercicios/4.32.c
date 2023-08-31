/*
  Modifique el programa que escribió en el ejercicio 4.31 para que lea un número
  en el rango de 1 a 19 para especificar el número de líneas del rombo. Su
  programa debe desplegar un rombo del tamaño apropiado.
 */

/* Imprime un rombo de tamaño variable */
#include <stdio.h>

int main() {
  short filas = 1, mitad;
  short espacios, asterisco, fila;

  while (filas) {
    printf("Cuantas filas (entre 1 y 19) del rombo quiere imprimir: ");
    scanf("%hd", &filas);
    mitad = filas / 2;
    if (filas >= 1 && filas <= 19)
      break;

    printf("El rombo puede tener entre 1 y 19 filas\n\n");
  }

  /*----------  Mitad superior + mitad  ----------*/
  for (fila = 1; fila <= mitad; ++fila) {
    for (espacios = fila; espacios < mitad; ++espacios)
      printf(" ");

    for (asterisco = 1; asterisco < fila * 2; ++asterisco)
      printf("*");

    printf("\n");
  }

  /*----------  Mitad inferior  ----------*/
  for (fila = mitad - 1; fila > 0; --fila) {
    for (espacios = mitad; espacios > fila; --espacios)
      printf(" ");

    for (asterisco = 1; asterisco < fila * 2; ++asterisco)
      printf("*");

    printf("\n");
  }
}
