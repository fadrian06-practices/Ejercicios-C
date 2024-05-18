/* Figura 3.6: fig03_06.c
  Programa para obtener el promedio de calificaciones de un grupo mediante
  una repetición controlada por contador */
#include <stdio.h>

/* la función main inicia la ejecución del programa */
int main() {
  int contador;     /* número de las calificacion siguiente */
  int calificacion; /* valor de la calificación */
  int total;        /* suma de las calificaciones introducidas por el usuario */
  int promedio;     /* promedio de las calificaciones */

  /* fase de inicialización */
  total = 0;    /* inicializa total */
  contador = 1; /* inicializa el contador del ciclo */

  /* fase de procesamiento */
  while (contador <= 10) {                  /* repite 10 veces */
    printf("Introduzca la calificacion: "); /* indicador para la entrada */
    scanf("%d", &calificacion);   /* lee la calificación del usuario */
    total = total + calificacion; /* suma la calificación al total */
    contador = contador + 1;      /* incrementa el contador */
  } /* fin del while */

  /* fase de terminación */
  promedio = total / 10; /* división entera */

  /* despliega el resultado */
  printf("El promedio del grupo es %d\n", promedio);

  return 0; /* indica que el programa terminó con éxito */
} /* fin de la función main */
