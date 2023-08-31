/* Compara dos enteros */
#include <stdio.h>

int main() {
  int num1, num2;

  printf("Introduce dos enteros: ");
  scanf("%d%d", &num1, &num2);

  if (num1 > num2)
    printf("%d es mas grande que %d\n", num1, num2);

  if (num1 == num2)
    printf("Estos numeros son iguales\n");

  printf("\n");
}
