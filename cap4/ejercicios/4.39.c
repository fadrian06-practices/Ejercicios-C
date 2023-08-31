/*
  Describa en general cómo eliminaría cualquier instrucción continue de un
  ciclo, y cómo la remplazaría con alguna estructura equivalente. Utilice la
  técnica que desarrolló aquí, para eliminar la instrucción continue del
  programa de la figura 4.12.
 */

/* Figura 4.12: fig04_12_1.c
  Uso de la instrucción continue dentro de la instrucción for */
#include <stdio.h>

/* la función main inicia la ejecución del programa */
int main() {
  short x; /* contador */

  /* repite el ciclo 10 veces */
  for (x = 1; x <= 10; ++x) {
    /* si x es 5 continúa con la siguiente iteración del ciclo */
    if (x != 5)
      printf("%hd ", x); /* despliega el valor de x */
  }

  printf("\nUtiliza continue para ignorar la impresion del valor 5\n");
}
