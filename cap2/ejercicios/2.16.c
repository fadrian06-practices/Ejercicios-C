/*
  Escriba un programa que pida al usuario escribir dos números, que obtenga los
  dos números por parte del usuario, y que imprime la suma, el producto, la
  diferencia, el cociente y el residuo de los dos números.
 */

/* Calcula la suma, resta, multiplicación, división
  y el residuo de dos enteros */
#include <stdio.h>

int main() {
  int num1, num2;

  printf("Escriba dos numeros: ");
  scanf("%d%d", &num1, &num2);

  printf("La suma es %d\n", num1 + num2);
  printf("El producto es %d\n", num1 * num2);
  printf("La diferencia es %d\n", num1 - num2);
  printf("El cociente es %d\n", num1 / num2);
  printf("El residuo es %d\n\n", num1 % num2);
}
