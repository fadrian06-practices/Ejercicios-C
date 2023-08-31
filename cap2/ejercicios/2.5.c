/* Multiplica tres enteros */
#include <stdio.h>

int main() {
  int x, y, z, resultado;
  printf("Introduce tres enteros: ");
  scanf("%d%d%d", &x, &y, &z);
  resultado = x * y * z;
  printf("El resultado es %d\n", resultado);
}
