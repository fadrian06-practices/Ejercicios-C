/*
  (Eliminación de duplicados.) En el capítulo 12, se explora la estructura de
  datos árbol de búsqueda binaria de alta velocidad. Una característica del
  árbol de búsqueda binaria es que los valores duplicados se descartan cuando se
  hacen inserciones en el árbol. A esto se le conoce como eliminación de
  duplicados.

  Escriba un programa que produzca 20 números aleatorios entre 1 y 20. El
  programa debe almacenar en un arreglo todos los valores no duplicados.
  Utilice el arreglo más pequeño posible para llevar a cabo esta tarea.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ALEATORIOS 20

short aleatorio(short min, short max) {
  return (rand() % max) + min;
}

void agregarNumero(short numeros[], short cantidad, short numero) {
  short i = 0;

  for (; i < cantidad; ++i) {
    if (numeros[i] == numero)
      return;

    if (!numeros[i]) {
      numeros[i] = numero;
      return;
    }
  }
}

int main() {
  short numeros[ALEATORIOS] = {0};
  short i = 0;
  srand(time(NULL));

  for (; i < ALEATORIOS; ++i) {
    short numero = aleatorio(1, 20);
    agregarNumero(numeros, ALEATORIOS, numero);
  }

  for (i = 0; i < ALEATORIOS; ++i) {
    printf("numeros[%hd] = %hd\n", i, numeros[i]);
  }
}
