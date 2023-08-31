/*
  Escriba un programa que lea el radio de un círculo (como un valor float) y que
  calcule y despliegue el diámetro, la circunferencia y el área. Utilice el
  valor 3.14159 para π.
 */

/* Calcula el diámetro, circunferencia y area de un radio dado */
#include <stdio.h>

int main() {
  float radio;
  float pi = 3.14159;

  printf("Introduzca el radio de un circulo: ");
  scanf("%f", &radio);

  printf("\nEl diametro es: %f\n", radio * 2);
  printf("La circunferencia es: %f\n", pi * radio * 2);
  printf("El area es: %f\n\n", pi * radio * radio);
}
