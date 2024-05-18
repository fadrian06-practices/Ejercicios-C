/*
  Una crítica de las instrucciones break y continue es que no son estructuradas
  En realidad, las instrucciones break y continue siempre se pueden remplazar
  con instrucciones estructuradas, sin embargo, hacerlo puede resultar
  perjudicial. En general, describa cómo eliminaría cualquier instrucción break
  de un ciclo, y cómo la remplazaría con algún equivalente estructurado.
  [Pista: La instrucción break abandona un ciclo desde el cuerpo mismo del
  ciclo. La otra manera de abandonar el ciclo es al fallar la condición de
  terminación de éste. Considere utilizar una prueba de continuación de ciclo
  como una segunda prueba que indique un “abandono temprano debido a una
  condición break”.] Utilice la técnica que desarrolló aquí, para eliminar la
  instrucción break del programa de la figura 4.11.
 */

/* Figura 4.11: fig04_11_1.c
  Uso de la instrucción break dentro de la instrucción for */
#include <stdio.h>

/* la función comienza la ejecución del programa */
int main() {
  short x, ruptura; /* contador */

  /* repite 10 veces el ciclo */
  for (x = 1; x <= 10; ++x) {
    /* si x es 5 termina el ciclo */
    if (x == 5) {
      ruptura = x;
      x = 11;
    } /* fin del if */

    if (x <= 10)
      printf("%d ", x); /* despliega el valor de x */
  } /* fin del for */

  printf("\nRompe el ciclo en x == %hd\n", ruptura);
}
