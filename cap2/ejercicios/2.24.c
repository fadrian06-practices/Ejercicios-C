/* Imprime si un entero es par o impar */
#include <stdio.h>

int main() {
  int entero;

  printf("Introduce un entero: ");
  scanf("%d", &entero);

  if (entero % 2 == 0) {
    printf("%d es par\n", entero);
    return 0;
  }

  printf("%d es impar\n", entero);
}
