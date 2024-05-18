/* Figura 6.22: fig06_22.c
  Ejemplo de un arreglo de doble subíndice */
#include <stdio.h>
#define ESTUDIANTES 3
#define EXAMENES 4

/* prototipos de las funciones */
int minimo(const int calificaciones[][EXAMENES], int alumnos, int examenes);
int maximo(const int calificaciones[][EXAMENES], int alumnos, int examenes);
double promedio(const int estableceCalif[], int examenes);
void despliegaArreglo(const int calificaciones[][EXAMENES], int alumnos,
                      int examenes);

/* la función main comienza la ejecución del programa */
int main() {
  int estudiante; /* contador de estudiantes */

  /* inicializa las calificaciones para tres estudiantes (filas) */
  const int calificacionesEstudiantes[ESTUDIANTES][EXAMENES] = {
      {77, 68, 86, 73}, {96, 87, 89, 78}, {70, 90, 86, 81}};

  /* muestra el arreglo calificacionesEstudiantes */
  printf("El arreglo es:\n");
  despliegaArreglo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES);

  /* determina el valor más pequeño y el valor más grande de las calificaciones
   */
  printf("\n\nCalificacion mas baja: %d\nCalificacion mas alta: %d\n",
         minimo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES),
         maximo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES));

  /* calcula el promedio de calificaciones de cada estudiante */
  for (estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
    printf("El promedio de calificacion del estudiante %d es %.2f\n",
           estudiante,
           promedio(calificacionesEstudiantes[estudiante], EXAMENES));
  } /* fin de for */

  return 0; /* indica terminación exitosa */
} /* fin de main */

/* Encuentra la calificación mínima */
int minimo(const int calificaciones[][EXAMENES], int alumnos, int examenes) {
  int i;               /* contador de estudiantes */
  int j;               /* contador de examenes */
  int califBaja = 100; /* inicializa a la calificación más alta posible */

  /* ciclo a través de las filas de calificaciones */
  for (i = 0; i < alumnos; i++) {
    /* ciclo a través de las columnas de calificaciones */
    for (j = 0; j < examenes; j++) {
      if (calificaciones[i][j] < califBaja) {
        califBaja = calificaciones[i][j];
      } /* fin de if */
    } /* fin del for interno */
  } /* fin del for externo */

  return califBaja; /* devuelve la calificación mínima */
} /* fin de la función main */

/* Encuentra la calificación más alta */
int maximo(const int calificaciones[][EXAMENES], int alumnos, int examenes) {
  int i;             /* contador de estudiantes */
  int j;             /* contador de examenes */
  int califAlta = 0; /* inicializa a la calificación más baja posible */

  /* ciclo a través de las filas de calificaciones */
  for (i = 0; i < alumnos; i++) {
    /* ciclo a través de las columnas de calificaciones */
    for (j = 0; j < examenes; j++) {
      if (calificaciones[i][j] > califAlta) {
        califAlta = calificaciones[i][j];
      } /* fin de if */
    } /* fin del for interno */
  } /* fin del for externo */

  return califAlta; /* devuelve la calificación máxima */
} /* fin de la función maximo */

/* Determina la calificación promedio para un estudiante en especial */
double promedio(const int conjuntoDeCalificaciones[], int examenes) {
  int i;         /* contador de exámenes */
  int total = 0; /* suma de las calificaciones del examen */

  /* total de calificaciones de un estudiante */
  for (i = 0; i < examenes; i++) {
    total += conjuntoDeCalificaciones[i];
  } /* fin de for */

  return (double)total / examenes; /* promedio */
} /* fin de la función promedio */

/* Imprime el arreglo */
void despliegaArreglo(const int calificaciones[][EXAMENES], int alumnos,
                      int examenes) {
  int i; /* contador de estudiantes */
  int j; /* contador de examenes */

  /* muestra el encabezado de las columnas */
  printf("%34s%5s%5s%5s", "[0]", "[1]", "[2]", "[3]");

  /* muestra las calificaciones en forma tabular */
  for (i = 0; i < alumnos; i++) {
    /* muestra la etiqueta de la fila */
    printf("\ncalificacionesEstudiantes[%d] ", i);

    /* muestra las calificaciones de un estudiante */
    for (j = 0; j < examenes; j++) {
      printf("%5d", calificaciones[i][j]);
    } /* fin del for interno */
  } /* fin del for externo */
} /* fin de la función despliegaArreglo */
