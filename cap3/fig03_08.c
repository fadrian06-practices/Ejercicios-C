/* Figura 3.8: fig03_08.c
  Programa para obtener el promedio de calificaciones de un grupo mediante
  una repetición controlada por centinela */
#include <stdio.h>

/* la función main inicia la ejecución del programa */
int main() {
  int contador;     /* número de calificaciones introducidas */
  int calificacion; /* valor de la calificación */
  int total;        /* total de las calificaciones */
  float promedio;   /* número con punto decimal para el promedio */

  /* fase de inicialización */
  total = 0;    /* inicializa el total */
  contador = 0; /* inicializa el contador del ciclo */

  /* fase de procesamiento */
  /* obtiene la primera calificación del usuario */
  printf("Introduce la calificacion, -1 para terminar: ");
  /* indicador para la entrada */
  scanf("%d", &calificacion);

  /* repite el ciclo mientras no se introduzca el valor centinela */
  while (calificacion != -1) {
    total = total + calificacion; /* suma calificación a total */
    contador = contador + 1;      /* incrementa el contador */

    /* obtiene la siguiente calificación del usuario */
    printf("Introduce la calificacion, -1 para terminar: ");
    /* indicador para la entrada */
    scanf("%d", &calificacion); /* lee la siguiente calificación */
  } /* fin del while */

  /* fase de terminación */
  /* si el usuario introdujo al menos una calificación */
  if (contador != 0) {
    /* calcula el promedio de todas las calificaciones introducidas */
    promedio = (float)total / contador; /* evita que se trunque */

    /* despliega el promedio con dos dígitos de presición */
    printf("El promedio del grupo es: %.2f\n", promedio);
  } /* fin del if */
  else { /* si no se introdujo calificación alguna, despliega el mensaje */
    printf("No se introdujeron calificaciones\n");
  } /* fin del else */

  return 0; /* indica que el programa terminó con éxito */
} /* fin de la función main */
