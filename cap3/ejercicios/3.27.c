/*
  Mediante un método similar al del ejercicio 3.24, encuentre los dos
  valores más grandes de los 10 números. [Nota: Debe introducir un número a la
  vez.]
*/

/* Imprime los dos mayores de 10 números */
#include <stdio.h>

int main() {
  int contador = 1;
  int numero;
  int mayor1 = 0;
  int mayor2 = 0;

  while (contador++ <= 10) {
    printf("(%d/10) Introduzca un numero: ", contador - 1);
    scanf("%d", &numero);

    if (numero > mayor1) {
      mayor2 = mayor1;
      mayor1 = numero;
    } else if (numero > mayor2)
      if (numero <= mayor1)
        mayor2 = numero;
  }

  printf("Los numeros mayores son: %d y %d\n\n", mayor1, mayor2);
}
