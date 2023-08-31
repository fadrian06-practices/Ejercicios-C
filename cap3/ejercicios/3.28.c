/*
  Modifique el programa de la figura 3.10 para validar sus entradas. Para
  cualquier entrada, si el valor introducido es diferente a 1 o 2, continúe el
  ciclo hasta que el usuario digite un valor correcto.
*/

/* Figura 3.10: fig03_10_1.c
  Análisis de los resultados de un examen */
#include <stdio.h>

/* la función main inicia la ejecución del programa */
int main() {
  /* inicializa las variables en las declaraciones */
  int aprobados = 0;  /* número de aprobados */
  int reprobados = 0; /* número de reprobados */
  int estudiante = 1; /* contador de estudiantes */
  int resultado;      /* resultado de un examen */

  /* procesa 10 estudiantes mediante un ciclo controlado por contador */
  while (estudiante <= 10) {
    /* indica al usuario que introduzca un valor */
    printf("Introduzca el resultado (1=aprobado, 2=reprobado): ");
    scanf("%d", &resultado);

    /* si el resultado es igual que 1, incrementa aprobados */
    if (resultado == 1) {
      ++aprobados;
      ++estudiante;
    }
    /* si el resultado es igual que 2, incrementa reprobados */
    else if (resultado == 2) {
      ++reprobados;
      ++estudiante;
    }
  }

  /* fase de terminación */
  /* despliega el número de aprobados y reprobados */
  printf("Aprobados %d\n", aprobados);
  printf("Reprobados %d\n", reprobados);

  /* si aprobaron más de 8 estudiantes, imprime "objetivo alcanzado" */
  if (aprobados > 8)
    printf("Objetivo alcanzado\n");

  printf("\n");
}
