/* Figura 4.5: fig04_05.c
  Suma con for */
#include <stdio.h>

/* La función main comienza la ejecución del programa */
int main() {
  int suma = 0; /* inicializa la suma */
  int numero;   /* número a adicionar a suma */

  for (numero = 2; numero <= 100; numero += 2) {
    suma += numero; /* suma el número a suma */
  } /* fin del for */

  printf("La suma es %d\n", suma); /* muestra la suma */

  return 0; /* indica terminación exitosa */
} /* fin de la función main */
