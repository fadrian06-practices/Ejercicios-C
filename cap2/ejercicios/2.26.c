/* Determina si el primero de 2 enteros es múltiplo del segundo */
#include <stdio.h>

int main() {
  int num1, num2;

  printf("Introduce dos numeros enteros: ");
  scanf("%d%d", &num1, &num2);

  if (num1 % num2 == 0) {
    printf("%d es multiplo de %d\n", num1, num2);
    return 0;
  }

  printf("%d no es multiplo de %d\n", num1, num2);
  printf("\n");
}
