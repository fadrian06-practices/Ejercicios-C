/*
  Defina una función llamada hipotenusa que calcule la longitud de la hipotenusa
  de un triángulo recto, cuando se introducen los otros dos lados. Utilice esta
  función en un programa que determine la longitud de la hipotenusa para cada
  uno de los siguientes triángulos. La función debe tomar dos argumentos de tipo
  double y devolver la hipotenusa como double. Verifique su programa con los
  valores de los lados especificados en la figura 5.18.

  Triángulo   Lado 1    Lado 2
  1           3.0       4.0
  2           5.0       12.0
  3           8.0       15.0
 */

/* Calcula la hipotenusa */
#include <math.h>
#include <stdio.h>

double hipotenusa(double lado1, double lado2) {
  return sqrt(pow(lado1, 2) + pow(lado2, 2));
}

int main() {
  double lado1, lado2;

  printf("Introduzca el lado 1: ");
  scanf("%lf", &lado1);
  printf("Introduzca el lado 2: ");
  scanf("%lf", &lado2);

  printf("La hipotenusa es: %.2lf\n", hipotenusa(lado1, lado2));
}
