/*
  Escriba un programa que pida al usuario escribir dos n�meros, que obtenga los
  dos n�meros por parte del usuario, y que imprime la suma, el producto, la
  diferencia, el cociente y el residuo de los dos n�meros.
 */

/* Calcula la suma, resta, multiplicaci�n, divisi�n
  y el residuo de dos enteros */
#include <stdio.h>

int main() {
  int num1, num2;

  printf("Escriba dos numeros: ");
  scanf("%d%d", &num1, &num2);

  printf("La suma es %d\n", num1 + num2);
  printf("La resta es %d\n", num1 - num2);
  printf("La multiplicacion es %d\n", num1 * num2);
  printf("La division es %d\n", num1 / num2);
  printf("El resto de la division es %d\n\n", num1 % num2);
}
