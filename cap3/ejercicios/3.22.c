/* Demuestra la diferencia entre el predecremento y el postdecremento */
#include <stdio.h>

int main() {
  int x = 5;

  printf("PREDECREMENTO\n");
  printf("Valor inicial de X: %d\n", x);
  printf("Valor de X despues del predecremento: %d\n", --x);
  printf("Valor final de X: %d\n\n", x);

  x = 5;
  printf("POSTDECREMENTO\n");
  printf("Valor inicial de X: %d\n", x);
  printf("Valor de X se imprime y luego se decrementa: %d\n", x);
  printf("Valor final de X: %d", x);

  printf("\n\n");
}
