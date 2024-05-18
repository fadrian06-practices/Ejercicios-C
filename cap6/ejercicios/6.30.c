/*
  (El cedazo de Eratóstenes.) Un entero primo es cualquier entero divisible sólo
  por sí mismo y por el número 1. El método del cedazo de Eratóstenes se utiliza
  para localizar números primos. Éste funciona de la siguiente manera:

  1) Crea un arreglo con todos los elementos inicializados en 1 (verdadero). Los
  elementos del arreglo con subíndices primos permanecerán como 1. Los demás
  elementos, en algún momento se establecerán en cero.

  2) Comienza con un subíndice 2, cada vez que se encuentra un elemento del
  arreglo cuyo valor es 1, repite a lo largo del resto del arreglo y establece
  en cero cada elemento cuyo subíndice sea múltiplo del subíndice para el
  elemento con valor de 1. Para un subíndice 2 del arreglo, todos los elementos
  que pasen de 2 y que sean múltiplos de 2, se establecerán en cero (subíndices
  4, 6, 8, 10, etcétera); para un subíndice de 3, todos los elementos que pasen
  de 3 y que sean múltiplos de 3, se establecerán en cero (subíndices 6, 9, 12,
  15, etcétera). Cuando este proceso termina, los elemento del arreglo que aún
  permanecen en 1, indican que el subíndice es un número primo. Estos subíndices
  pueden entonces desplegarse.

  Escriba un programa que utilice un arreglo de 1000 elementos para determinar y
  desplegar los números primos entre el 2 y el 999. Ignore el elemento 0 del
  arreglo.
 */

#include <stdio.h>
#define NUMEROS 1000
#define COLUMNAS 18

enum Booleano { FALSO, VERDADERO };

void descartarCompuestos(enum Booleano numeros[], int cantidad, int primo) {
  int i = primo * 2;

  for (; i < cantidad; i += primo)
    numeros[i] = FALSO;
}

int obtenerSiguientePrimo(enum Booleano numeros[], int cantidad, int primo) {
  while (primo < cantidad) {
    ++primo;

    if (numeros[primo])
      return primo;
  }

  return primo;
}

void imprimirPrimos(enum Booleano numeros[], int cantidad) {
  int i = 0;
  int columnas = 1;

  for (; i < cantidad; ++i) {
    if (numeros[i]) {
      printf("%-5d", i);

      if (columnas % COLUMNAS == 0)
        printf("\n");

      ++columnas;
    }
  }
}

int main() {
  enum Booleano numeros[NUMEROS];
  int i = 0;

  for (; i < NUMEROS; ++i)
    numeros[i] = VERDADERO;

  numeros[0] = FALSO;
  numeros[1] = FALSO;

  for (i = 2; i < NUMEROS;) {
    descartarCompuestos(numeros, NUMEROS, i);
    i = obtenerSiguientePrimo(numeros, NUMEROS, i);
  }

  imprimirPrimos(numeros, NUMEROS);
  printf("\n\n");
}
