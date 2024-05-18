/* Calcula X a la potencia Y */
#include <stdio.h>

int main() {
  int x, y;
  int contador = 1;
  int potencia = 1;

  printf("Introduce el valor de X: ");
  scanf("%d", &x);

  printf("Introduce la potencia Y: ");
  scanf("%d", &y);

  while (contador <= y) {
    potencia *= x;
    ++contador;
  }

  printf("El resultado es: %d\n\n", potencia);
}
