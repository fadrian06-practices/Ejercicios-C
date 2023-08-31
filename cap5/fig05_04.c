/* Figura 5.4: fig05_04.c
  Encuentra el máximo de tres enteros */

#include <stdio.h>

int maximo(int x, int y, int z); /* prototipo de la función */

/* la función main comienza la ejecución del programa */
int main() {
  int numero1; /* primer entero */
  int numero2; /* segundo entero */
  int numero3; /* tercer entero */

  printf("Introduzca tres enteros: ");
  scanf("%d%d%d", &numero1, &numero2, &numero3);

  /* numero1, numero2 y numero3 son argumentos
    para la llamada a la función máximo */
  printf("El maximo es: %d\n", maximo(numero1, numero2, numero3));
  return 0; /* indica terminación exitosa */
} /* fin de la función main */

/* Definición de la función máximo */
/* x, y y z son parámetros */
int maximo(int x, int y, int z) {
  int max = x; /* asume que x es el mayor */

  if (y > max) { /* si y es mayor a max, asigna y a max */
    max = y;
  } /* fin de if */

  if (z > max) { /* si z es mayor que max, asigna z a max */
    max = z;
  } /* fin de if */

  return max; /* max es el valor más grande */
} /* fin de la función máximo */
