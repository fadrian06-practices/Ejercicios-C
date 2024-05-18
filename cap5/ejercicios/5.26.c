/*
  Se dice que un número entero es un número perfecto, si la suma de sus
  factores, incluso el 1 (pero no el número mismo), arroja el mismo número. Por
  ejemplo, 6 es un número perfecto debido a que 6 = 1 + 2 + 3. Escriba la
  función perfecto que determine si el parámetro numero es un número perfecto.
  Utilice esta función en un programa que determine e imprima los números
  perfectos entre 1 y 1000. Imprima los factores de cada número perfecto para
  confirmar que el número es realmente perfecto. Rete el poder de su computadora
  y pruebe números más grandes que 1000.
 */

/* Imprime los números perfectos entre 1 y 1000 */
#include <stdio.h>

enum Booleano { FALSO, VERDADERO };

enum Booleano perfecto(long numero) {
  long suma = 1;
  long contador = 2;

  for (; contador < numero; ++contador)
    if (numero % contador == 0)
      suma += contador;

  return numero == suma;
}

void imprimirFactores(int numero) {
  long contador = 1;

  for (; contador < numero; ++contador)
    if (numero % contador == 0)
      printf("%ld ", contador);
}

int main() {
  int contador = 1;

  printf("Numero\tFactores\n");

  for (; contador <= 1000; ++contador) {
    printf("%6d\t", contador);

    enum Booleano esPerfecto = perfecto(contador);

    if (esPerfecto) {
      imprimirFactores(contador);
      printf("\tEs perfecto");
    }

    printf("\n");
  }

  printf("\n");
}
