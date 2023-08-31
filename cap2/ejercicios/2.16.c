/* Calcula la suma, resta, multiplicación, división
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
