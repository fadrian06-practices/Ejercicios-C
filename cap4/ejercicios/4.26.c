/*
  Calcule el valor de π a partir de la serie infinita

  π = 4 - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) + ...
*/

/* Imprime los valores de π en una secuencia infinita */
#include <stdio.h>

int main() {
  double pi = 4;
  double denominador;
  double limite;

  printf("Limite de calculos: ");
  scanf("%lf", &limite);

  for (denominador = 3; denominador <= limite; denominador += 2) {
    pi -= (4.0 / denominador);
    denominador += 2;

    if (denominador > limite)
      break;

    pi += (4.0 / denominador);
  }

  printf("\n\nPI ~= %f", pi);
  printf("\n\n");
}
