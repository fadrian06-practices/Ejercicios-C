/*
  El interés simple para un préstamo se calcula mediante la fórmula:
  interés = préstamo * tasa * días / 365;
  La fórmula anterior asume que tasa es la tasa de interés anual, y por lo
  tanto incluye la división entre 365 (días). Desarrolle un programa que
  introduzca préstamo, tasa y días para varios préstamos, y que calcule y
  despliegue el interés simple para cada préstamo, utilizando la fórmula
  anterior.

  Objetivo
  Calcular el interés simple.

  Mejoramiento 1
  Recolectar datos necesarios.
  Calcular el interés simple.
  Imprimir el interés simple

  Mejoramiento 2
  Leer préstamo
  Leer tasa
  Leer días para varios préstamos
  Calcular el interés simple
  Imprimir el interés simple

  Mejoramiento 3
  Mientras no se introduzca el valor centinela (-1)
    Leer préstamo
    Leer tasa
    Leer días para varios préstamos
    Calcular el interés simple
    Imprimir el interés simple
*/

/* Calcula el interés simple */
#include <stdio.h>

int main() {
  float montoPrestamo;
  float tasaInteres;
  int periodoPrestamo;
  float interes;

  printf("Introduzca el monto del prestamo (-1 para terminar): ");
  scanf("%f", &montoPrestamo);

  while (montoPrestamo != -1) {
    printf("Introduzca la tasa de interes: ");
    scanf("%f", &tasaInteres);

    printf("Introduzca el periodo de prestamo en dias: ");
    scanf("%d", &periodoPrestamo);

    interes = montoPrestamo * tasaInteres * ((float)periodoPrestamo / 365);
    printf("El monto del interes es $%.2f\n", interes);

    printf("\n");

    printf("Introduzca el monto del prestamo (-1 para terminar): ");
    scanf("%f", &montoPrestamo);
  }

  return 0;
}
