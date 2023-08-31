/*
  Escriba una función que despliegue en el margen izquierdo de la pantalla
  un cuadrado sólido de asteriscos cuyas medidas se especifiquen mediante
  el parámetro lado. Por ejemplo, si lado es 4, la función despliega:

  ****
  ****
  ****
  ****
*/

/* Imprime un cuadrado de lado n */
#include <stdio.h>

void imprimirCuadrado(int lado) {
  int fila, columna;

  for (fila = 1; fila <= lado; ++fila) {
    for (columna = 1; columna <= lado; ++columna)
      printf("*");

    printf("\n");
  }
}
