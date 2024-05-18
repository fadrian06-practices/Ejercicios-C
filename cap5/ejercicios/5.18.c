/*
  Escriba un programa que introduzca una serie de enteros y los pase, uno a la
  vez, a una función llamada impar que utilice el operador módulo para
  determinar si un entero es impar. La función debe tomar un argumento entero y
  devolver 1 si el entero es impar o 0 si no lo es.
 */

/* Imprime si un número es par o impar */
#include <stdio.h>

enum Booleano { FALSO, VERDADERO };

enum Booleano par(int entero) { return entero % 2 == 0; }

int obtenerNumero() {
  int numero;

  printf("Introduzca un numero (-1 para terminar): ");
  scanf("%d", &numero);

  return numero;
}

int main() {
  while (1) {
    int numero = obtenerNumero();

    if (numero == -1)
      break;

    if (par(numero)) {
      printf("%d es par\n\n", numero);
      continue;
    }

    printf("%d es impar\n\n", numero);
  }

  printf("\n\n");
}
