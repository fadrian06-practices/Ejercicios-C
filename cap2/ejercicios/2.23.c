/*
  Escriba un programa que lea cinco enteros y que después imprima el número más
  grande y el más pequeño del grupo. Utilice sólo técnicas de programación que
  haya aprendido en este capítulo.
 */

/* Imprime el más grande y el más pequeño de 5 enteros */
#include <stdio.h>

int main() {
  int num1, num2, num3, num4, num5;
  int mayor, menor;

  printf("Introduce 5 numeros enteros: ");
  scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);

  mayor = num1;
  menor = num1;

  if (mayor < num2) {
    mayor = num2;
  }

  if (mayor < num3) {
    mayor = num3;
  }

  if (mayor < num4) {
    mayor = num4;
  }

  if (mayor < num5) {
    mayor = num5;
  }

  if (menor > num2) {
    menor = num2;
  }

  if (menor > num3) {
    menor = num3;
  }

  if (menor > num4) {
    menor = num4;
  }

  if (menor > num5) {
    menor = num5;
  }

  printf("El numero mayor es %d\n", mayor);
  printf("El numero menor es %d\n", menor);
}
