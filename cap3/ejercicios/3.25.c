/* Imprime los 10 primeros números y sus múltiplos de potencias de 10 */
#include <stdio.h>

int main() {
  int n = 0;

  printf("N\t10*N\t100*N\t1000*N\n\n");

  while (n++ < 10)
    printf("%d\t%d\t%d\t%d\n", n, 10 * n, 100 * n, 1000 * n);

  printf("\n");
}
