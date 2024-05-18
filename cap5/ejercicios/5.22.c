/*
  Escriba segmentos de programa que lleven a cabo cada una de las
  siguientes tareas:

  a) Calcular la parte entera de un cociente, cuando el entero a se divide entre
  el entero b.
  b) Calcular el residuo entero, cuando el entero a se divide entre el entero b.
  c) Utilice los segmentos de programa desarrolladas en a) y b),
  para escribir una función que introduzca un entero entre 1 y 32767 y que
  imprima una serie de dígitos, y que cada par de ellos se encuentre separado
  por dos espacios. Por ejemplo, el entero 4562 se debe imprimir como:

  4 5 6 2
*/

/*
  Parte a)
    int a = 10;
    int b = 3;
    int resultado = a / b;

  Parte b)
    int a = 10;
    int b = 3;
    int residuo = a % b;

  Parte c)
*/

/* Imprime dígitos separados */
#include <stdio.h>

void imprimirDigitos(int entero) {
  if (entero < 1 || entero > 32767) {
    printf("El numero tiene que estar entre 1 y 32767");

    return;
  }

  int numeroReverso = 0;
  int digito;

  while (entero > 0) {
    digito = entero % 10;
    numeroReverso = numeroReverso * 10 + digito;
    entero /= 10;
  }

  while (numeroReverso > 0) {
    digito = numeroReverso % 10;
    printf("%d  ", digito);
    numeroReverso /= 10;
  }
}
