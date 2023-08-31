/*
  Escriba una función multiplo que determine para un par de enteros, si el
  segundo es múltiplo del primero. La función debe tomar dos argumentos enteros
  y devolver 1 (verdadero) si el segundo es un múltiplo del primero, y de lo
  contrario 0 (falso). Utilice esta función en un programa que introduzca una
  serie de pares de enteros.
 */

#include <stdio.h>

enum Booleano { FALSO, VERDADERO };

enum Booleano multiplo(int x, int y) {
  return y % x == 0;
}

int obtenerEntero(short centinela) {
  int entero;
  if (centinela)
    printf("Introduzca un entero (%hd para terminar): ", centinela);
  else
    printf("Introduzca un entero: ");
  scanf("%d", &entero);
  return entero;
}

int main() {
  while (1) {
    int entero1 = obtenerEntero(-1);
    if (entero1 == -1)
      break;

    int entero2 = obtenerEntero(FALSO);
    if (multiplo(entero1, entero2)) {
      printf("%d es multiplo de %d\n\n", entero2, entero1);
      continue;
    }

    printf("%d no es multiplo de %d\n\n", entero2, entero1);
  }
}
