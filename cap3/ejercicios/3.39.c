/*
  Escriba un programa que lea un número entero y que determine y despliegue
  cuántos dígitos del entero son sietes.
 */

/* Imprime la cantidad de Sietes (7) de un entero dado */
#include <stdio.h>

int main() {
  int contadorSietes = 0;
  int numero;
  int digito;

  printf("Introduzca un numero entero: ");
  scanf("%d", &numero);

  while (numero) {
    digito = numero % 10;

    if (digito == 7)
      ++contadorSietes;

    numero /= 10;
  }

  printf("La cantidad de sietes es: %d\n\n", contadorSietes);
}
