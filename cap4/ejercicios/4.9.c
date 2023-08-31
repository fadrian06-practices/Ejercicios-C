/*
  Escriba un programa que sume una secuencia de enteros. Asuma que el primer
  entero leído mediante scanf especifica el número de valores restantes que se
  introducirán. Su programa debe leer únicamente un valor cada vez que se
  ejecuta scanf. Una secuencia de entrada típica podría ser 5 100 200 300 400
  500 donde el 5 indica que se sumarán los cinco números subsiguientes.
 */

/* Suma una secuencia de enteros */
#include <stdio.h>

int main() {
  int contador;
  int cantidad;
  int sumatoria = 0;
  int numero;

  printf("Cuantos numeros desea sumar? ");
  scanf("%d", &cantidad);

  for (contador = 1; contador <= cantidad; ++contador) {
    printf("Introduzca un entero: ");
    scanf("%d", &numero);

    sumatoria += numero;
  }

  printf("\nLa suma es: %d\n\n", sumatoria);
}
