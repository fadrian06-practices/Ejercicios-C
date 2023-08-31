/*
  La serie de Fibonacci
  0, 1, 1, 2, 3, 5, 8, 13, 21, …
  comienza con los términos 0 y 1, y tiene la propiedad de que cada término
  sucesivo es la suma de los dos términos precedentes.

  a) Escriba una función no recursiva fibonacci(n) que calcule el enésimo número
  de Fibonacci.

  b) Determine el número de Fibonacci más grande que se puede
  imprimir en su sistema. Modifique el programa del inciso a) para utilizar un
  número double en lugar de un int para calcular y devolver los números de
  Fibonacci. Permita que el programa haga un ciclo hasta que falle debido a que
  excede el valor más alto.
 */

/* Imprime el mayor fibonacchi soportado */
#include <stdio.h>

double fibonacci(double n) {
  unsigned long contador = 1;
  long ultimo = 1, penultimo = 0;
  double resultado;

  for (; contador < n; ++contador) {
    resultado = penultimo + ultimo;
    penultimo = ultimo;
    ultimo = resultado;
  }

  return resultado;
}

int main() {
  double contador = 1;

  while (fibonacci(contador) >= 0)
    ++contador;

  --contador;
  printf("Maximo fibonacci soportado: %.0lf\n", contador);
  printf("fibonacci(%.0lf) = %.0lf\n\n", contador, fibonacci(contador));
}
