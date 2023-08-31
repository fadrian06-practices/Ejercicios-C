/*
  Escriba un programa que encuentre el menor de varios enteros. Suponga que el
  primer valor a leer especifica el número de valores restantes.
 */

/* Encuentra el menor de varios enteros */
#include <stdio.h>

int main() {
  int numero = 0, menor = 0, cantidad, contador = 1;

  printf("Cuantos numeros desea ingresar? ");
  scanf("%d", &cantidad);

  for (; contador <= cantidad; ++contador) {
    printf("Introduzca un numero: ");
    scanf("%d", &numero);

    if (!menor || numero < menor)
      menor = numero;
  }

  printf("El menor es: %d\n\n", menor);
}
