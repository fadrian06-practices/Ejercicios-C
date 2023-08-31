/*
  Escriba un programa que lea tres enteros diferentes de cero y que determine (y
  despliegue) si pueden representar los lados de un triángulo recto.
 */

/* Imprime si dado tres enteros diferentes de cero se puede construir
  un triángulo rectángulo */
#include <stdio.h>

int main() {
  int lado1, lado2, lado3;
  int cateto1, cateto2;
  int hipotenusa;

  printf("Introduzca tres valores diferentes de cero\n");
  printf("y le dire si puede armar un triangulo rectangulo o no: ");
  scanf("%d%d%d", &lado1, &lado2, &lado3);

  if (lado1 == 0)
    return printf("Los tres valores deben ser distintos de cero");
  else if (lado2 == 0)
    return printf("Los tres valores deben ser distintos de cero");
  else if (lado3 == 0)
    return printf("Los tres valores deben ser distintos de cero");

  if (lado1 > lado2) {
    hipotenusa = lado1;
    cateto1 = lado2;
  } else {
    hipotenusa = lado2;
    cateto1 = lado1;
  }

  if (hipotenusa > lado3)
    cateto2 = lado3;
  else {
    hipotenusa = lado3;
    cateto1 = lado1;
    cateto2 = lado2;
  }

  if (hipotenusa * hipotenusa == cateto1 * cateto1 + cateto2 * cateto2)
    printf("Se puede formar un triangulo rectangulo");
  else
    printf("No se puede formar un triangulo rectangulo");

  printf("\n\n");
}
