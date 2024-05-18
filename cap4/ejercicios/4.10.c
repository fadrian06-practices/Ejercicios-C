/*
  Escriba un programa que calcule e imprima el promedio de varios enteros.
  Suponga que el último valor que lee la instrucción scanf es el centinela 9999.
  Una secuencia de entrada típica podría ser 10 8 11 7 9 9999 que indica que
  calculará el promedio de todos los valores que anteceden a 9999.
 */

/* Calcula el promedio de una secuencia */
#include <stdio.h>

int main() {
  int numero = 0, contador = 0, sumatoria = 0;
  float promedio;

  for (; numero != 9999;) {
    sumatoria += numero;

    printf("Introduzca un numero entero (introduzca 9999 para terminar): ");
    scanf("%d", &numero);

    if (numero != 9999)
      ++contador;
  }

  if (!contador)
    contador = 1;

  promedio = (float)sumatoria / contador;
  printf("\nEl promedio es: %f\n\n", promedio);
}
