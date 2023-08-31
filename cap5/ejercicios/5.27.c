/*
  Se dice que un entero es primo si sólo es divisible entre 1 y entre sí mismo.
  Por ejemplo, 2, 3, 5 y 7 son primos, pero 4, 6, 8 y 9 no lo son.

  a) Escriba una función que determine si un número es primo.
  b) Utilice esta función en un programa que determine e imprima todos los
  números primos entre 1 y 10,000. ¿Cuántos de estos 10,000 números tiene que
  verificar realmente antes de que esté seguro de que encontró todos los números
  primos?
  c) Inicialmente podría usted pensar que n/2 es el límite máximo que
  debe probar para ver si un número es primo, pero sólo necesita ir tan arriba
  como la raíz cuadrada de n. ¿Por qué?

  Rescriba el programa, y ejecútelo de ambas maneras. Estime la mejora en
  el rendimiento.
 */

/* Imprime los primeros 10 mil números primos */
#include <math.h>
#include <stdio.h>

enum Booleano { FALSO, VERDADERO };

enum Booleano esPrimo(long entero) {
  long contador;
  unsigned long limite = sqrt(entero);
  // int limite = entero / 2;

  if (entero <= 1)
    return FALSO;

  for (contador = 2; contador <= limite; ++contador)
    if (entero % contador == 0)
      return FALSO;

  return VERDADERO;
}

int main() {
  long contador = 1;
  unsigned short fila = 0;
  unsigned short numerosPorFila = 10;
  long verificados = 0;

  printf("Numeros primos\n--------------\n");
  for (; contador <= 10000; ++contador) {
    if (!esPrimo(contador))
      continue;

    ++verificados;
    printf("%ld\t", contador);
    ++fila;
    if (fila == numerosPorFila) {
      printf("\n");
      fila = 0;
    }
  }

  printf("\n\n");
  printf("Se verificaron %ld numeros para encontrar los primos", verificados);
  printf("\n\n");
}
