/* Figura 6.7: fig06_07.c
  Programa de respuestas de examen */
#include <stdio.h>
#define TAMANIO_RESPUESTA 40 /* define el tamaño de los arreglos */
#define TAMANIO_FRECUENCIA 11

/* la función main comienza la ejecución del programa */
int main() {
  int respuesta; /* contador a través de las 40 respuestas */
  int rango;     /* contador de rangos de 1 a 10 */

  /* inicializa los contadores de frecuencia a 0 */
  int frecuencia[TAMANIO_FRECUENCIA] = {0};

  /* coloca las respuestas del exámen dentro del arreglo respuestas */
  int respuestas[TAMANIO_RESPUESTA] = {
      1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7,
      6, 5, 7, 6, 8, 6, 7, 5, 6, 6,  5, 6, 7, 5, 6, 4,  8, 6, 8, 10};

  /* por cada respuesta selecciona el valor de un elemento del arreglo
  respuestas y utiliza dicho valor como subíndice en el arreglo
  frecuencia para determinar el elemento a incrementar */
  for (respuesta = 0; respuesta < TAMANIO_RESPUESTA; respuesta++) {
    ++frecuencia[respuestas[respuesta]];
  } /* fin de for */

  /* despliega los resultados */
  printf("%s%17s\n", "Rango", "Frecuencia");

  /* muestra las frecuencias en forma tabular */
  for (rango = 1; rango < TAMANIO_FRECUENCIA; rango++) {
    printf("%5d%17d\n", rango, frecuencia[rango]);
  } /* fin de for */

  return 0; /* indica terminación exitosa */
} /* fin de main */
