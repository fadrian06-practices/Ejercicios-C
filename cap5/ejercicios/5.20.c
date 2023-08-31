/*
  Modifique la función creada en el ejercicio 5.19 para formar el cuadrado de
  cualquier carácter que especifiquemos en el parámetro caracterLlenado. De este
  modo, si lado es igual a 5 y caracterLlenado es “#”, entonces esta función
  debe imprimir:

  #####
  #####
  #####
  #####
  #####
 */

/* Imprime un cuadrado del cualquier símbolo */
#include <stdio.h>

void imprimirCuadrado(int lado, char caracterLlenado) {
  int fila, columna;

  for (fila = 1; fila <= lado; ++fila) {
    for (columna = 1; columna <= lado; ++columna)
      printf("%c", caracterLlenado);

    printf("\n");
  }
}
