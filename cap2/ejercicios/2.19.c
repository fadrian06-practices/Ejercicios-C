/*
  Escriba un programa que introduzca tres diferentes enteros desde el teclado,
  después que imprima la suma, el promedio, el producto, el número más pequeño y
  el más grande de éstos. Solamente utilice la forma de selección simple de la
  instrucción if, que aprendió en este capítulo. El diálogo en la pantalla debe
  aparecer de la siguiente forma:

  Escriba tres enteros diferentes: 13 27 14
  La suma es 54
  El promedio es 18
  El producto es 4914
  El número más pequeño es 13
  El número más grande es 27
 */

/* Imprimir la suma, el promedio, el producto, el más pequeño
  y el más grande de tres enteros */
#include <stdio.h>

int main() {
  int num1, num2, num3, suma, producto, menor, mayor;

  printf("Escriba tres enteros diferentes: ");
  scanf("%d%d%d", &num1, &num2, &num3);

  suma = num1 + num2 + num3;
  producto = num1 * num2 * num3;
  menor = mayor = num1;

  printf("La suma es %d\n", suma);
  printf("El promedio es %d\n", suma / 3);
  printf("El producto es %d\n", producto);

  if (menor > num2) {
    menor = num2;
  }

  if (menor > num3) {
    menor = num3;
  }

  printf("El numero menor es %d\n", menor);

  if (mayor < num2) {
    mayor = num2;
  }

  if (mayor < num3) {
    mayor = num3;
  }

  printf("El numero mayor es %d\n", mayor);
}
