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
  int num1, num2, num3, suma, menor, mayor;

  printf("Escriba tres enteros diferentes: ");
  scanf("%d%d%d", &num1, &num2, &num3);

  suma = num1 + num2 + num3;
  printf("La suma es %d\n", suma);
  printf("El promedio es %d\n", suma / 3);

  if (num1 < num2) {
    if (num1 < num3) {
      menor = num1;
    }
  }

  if (num1 < num3) {
    if (num1 < num2) {
      menor = num1;
    }
  }

  if (num2 < num1) {
    if (num2 < num3) {
      menor = num2;
    }
  }

  if (num2 < num3) {
    if (num2 < num1) {
      menor = num2;
    }
  }

  if (num3 < num1) {
    if (num3 < num2) {
      menor = num3;
    }
  }

  if (num3 < num2) {
    if (num3 < num1) {
      menor = num3;
    }
  }

  printf("El numero menor es %d\n", menor);

  if (num1 > num2) {
    if (num1 > num3) {
      mayor = num1;
    }
  }

  if (num1 > num3) {
    if (num1 > num2) {
      mayor = num1;
    }
  }

  if (num2 > num1) {
    if (num2 > num3) {
      mayor = num2;
    }
  }

  if (num2 > num3) {
    if (num2 > num1) {
      mayor = num2;
    }
  }

  if (num3 > num1) {
    if (num3 > num2) {
      mayor = num3;
    }
  }

  if (num3 > num2) {
    if (num3 > num1) {
      mayor = num3;
    }
  }

  printf("El numero mayor es %d\n\n", mayor);
}
