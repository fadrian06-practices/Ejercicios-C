/* Figura 6.9: fig06_09.c
  Lanza un dado de seis lados 6000 veces */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANIO 7

/* la función main comienza la ejecución del programa */
int main() {
  int cara;                      /* valor aleatorio del dado entre 1 y 6 */
  int tiro;                      /* contador de tiros de 1 a 6000 */
  int frecuencia[TAMANIO] = {0}; /* inicializa a 0 la cuenta */

  srand(time(NULL)); /* generador de semilla de números aleatorios */

  /* tira el dado 6000 veces */
  for (tiro = 1; tiro <= 6000; tiro++) {
    cara = 1 + rand() % 6;
    ++frecuencia[cara]; /* reemplaza la instrucción switch de la linea 26 de la
                           figura 5.8 */
  } /* fin de for */

  printf("%s%17s\n", "Cara", "Frecuencia");

  /* muestra los elementos 1-6 de frecuencia de forma tabular */
  for (cara = 1; cara < TAMANIO; cara++) {
    printf("%4d%17d\n", cara, frecuencia[cara]);
  } /* fin de for */

  return 0; /* indica terminación exitosa */
}
