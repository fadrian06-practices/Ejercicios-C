/* Figura 4.12: fig04_12.c
  Uso de la instrucción continue dentro de la instrucción for */
#include <stdio.h>

/* la función main inicia la ejecución del programa */
int main() {
  int x; /* contador */

  /* repite el ciclo 10 veces */
  for (x = 1; x <= 10; ++x) {
    /* si x es 5 continúa con la siguiente iteración del ciclo */
    if (x == 5) {
      continue; /* ignora el resto del código en el cuerpo del ciclo */
    } /* fin del if */

    printf("%d ", x); /* despliega el valor de x */
  } /* fin del for */

  printf("\nUtiliza continue para ignorar la impresion del valor 5\n");
  return 0; /* indica la terminación exitosa del programa */
} /* fin del función main */
