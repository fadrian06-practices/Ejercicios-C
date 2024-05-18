/*
  A menudo, la función factorial se utiliza en problemas de probabilidad. El
  factorial de un entero positivo n (se escribe n! y se pronuncia
  “n factorial”) es igual al producto de los enteros positivos de 1 a n. Escriba
  un programa que evalúe los factoriales de los enteros de 1 a 5. Imprima los
  resultados de manera tabular. ¿Qué dificultad debe usted prever al calcular el
  factorial de 20?
 */

/* Imprime los factoriales de 1 a 5 */
#include <stdio.h>

int main() {
  double n = 1, factorial = 1, temporal;

  printf("n\tn!\n\n");

  for (; n <= 5; ++n) {
    temporal = n;

    while (temporal >= 1)
      factorial *= temporal--;

    printf("%.0f\t%.0f\n", n, factorial);
    factorial = 1;
  }

  n = 20;

  while (n >= 1)
    factorial *= n--;

  printf("20\t%.0f\n\n", factorial);
}
