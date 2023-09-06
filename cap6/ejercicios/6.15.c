/*
  Utilice un arreglo con un solo subíndice para resolver el siguiente problema.
  Lea 20 números, en donde cada uno se encuentre entre 10 y 100, inclusive.
  Mientras se lee cada número, despliéguelo solamente si no es un duplicado de
  un número ya leído. Prevenga el “peor de los casos”, en el cual los veinte
  números sean diferentes. Utilice el menor tamaño posible del arreglo para
  resolver este problema.
 */

#include <stdio.h>
#define NUMEROS 100 - 10 + 1

enum Booleano { FALSO, VERDADERO };

int main() {
  int i = 1;
  int numero;
  enum Booleano numeros[NUMEROS] = {FALSO};

  for (; i <= 20; ++i) {
    do {
      printf("(%d/20) Introduzca un numero: ", i);
      scanf("%d", &numero);
    } while (numero < 10 || numero > 100);

    if (!numeros[numero - 10]) {
      printf("Numero no duplicado: %d\n\n", numero);
      numeros[numero - 10] = !numeros[numero - 10];
    }
  }

  printf("\n");
}
