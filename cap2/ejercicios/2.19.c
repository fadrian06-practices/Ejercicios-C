/* Imprimir la suma, el promedio, el producto, el más pequeño
  y el más grande de tres enteros */
#include <stdio.h>

int main() {
  int num1, num2, num3, suma, menor, mayor;

  printf("Escriba tres enteros diferentes: ");
  scanf("%d%d%d", &num1, &num2, &num3);

  suma = num1 + num2 + num3;
  printf("La suma es %d\n", suma);
  printf("El promedio es %d\n", suma / 3);

  if (num1 < num2)
    if (num1 < num3)
      menor = num1;

  if (num1 < num3)
    if (num1 < num2)
      menor = num1;

  if (num2 < num1)
    if (num2 < num3)
      menor = num2;

  if (num2 < num3)
    if (num2 < num1)
      menor = num2;

  if (num3 < num1)
    if (num3 < num2)
      menor = num3;

  if (num3 < num2)
    if (num3 < num1)
      menor = num3;

  printf("El numero mas pequenio es %d\n", menor);

  if (num1 > num2)
    if (num1 > num3)
      mayor = num1;

  if (num1 > num3)
    if (num1 > num2)
      mayor = num1;

  if (num2 > num1)
    if (num2 > num3)
      mayor = num2;

  if (num2 > num3)
    if (num2 > num1)
      mayor = num2;

  if (num3 > num1)
    if (num3 > num2)
      mayor = num3;

  if (num3 > num2)
    if (num3 > num1)
      mayor = num3;

  printf("El numero mas grande es %d\n\n", mayor);
}
