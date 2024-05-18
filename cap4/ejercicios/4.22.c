/*
  Modifique el programa de la figura 4.7 de manera que calcule el promedio de
  calificaciones del grupo.
 */

/* Figura 4.7: fig04_07_1.c
  Cuenta las calificaciones expresadas en letras */
#include <stdio.h>

/* la función main comienza la ejecución del programa */
int main() {
  short calificacion; /* una calificación */
  short cuentaA = 0;  /* número de As */
  short cuentaB = 0;  /* número de Bs */
  short cuentaC = 0;  /* número de Cs */
  short cuentaD = 0;  /* número de Ds */
  short cuentaF = 0;  /* número de Fs */
  float promedio;
  short total;

  printf("Introduzca la letra que corresponde a la calificacion.\n");
  printf("Introduzca el caracter 'Z' para finalizar la entrada de datos.\n");

  /* repite hasta que el usuario digita
  la secuencia de teclas de fin de archivo */
  while ((calificacion = getchar()) != 'Z') {
    /* determina cuál calificación se introdujo */
    switch (calificacion) { /* switch anidado dentro de while */
    case 'A':               /* la calificación es "A" */
    case 'a':               /* o "a" */
      ++cuentaA;            /* incrementa cuentaA */
      break;                /* sale del switch */

    case 'B':    /* la calificación es "B" */
    case 'b':    /* o "b" */
      ++cuentaB; /* incrementa cuentaB */
      break;     /* sale del switch */

    case 'C':    /* la calificación es "C" */
    case 'c':    /* o "c" */
      ++cuentaC; /* incrementa cuentaC */
      break;     /* sale del switch */

    case 'D':    /* la calificación es "D" */
    case 'd':    /* o "d" */
      ++cuentaD; /* incrementa cuentaD */
      break;     /* sale del switch */

    case 'F':    /* la calificación es "F" */
    case 'f':    /* o "f" */
      ++cuentaF; /* incrementa cuentaF */
      break;     /* sale del switch */

    case '\n': /* ignora nuevas líneas */
    case '\t': /* tabulaciones */
    case ' ':  /* y espacios en la entrada */
      break;   /* fin del switch */

    default: /* atrapa todos los demás caracteres */
      printf("Introdujo la letra incorrecta.");
      printf("Introduzca una nueva calificacion.\n");
      break; /* opcional; de todas formas saldrá del switch */
    } /* fin del switch */
  } /* fin del while */

  /* muestra el resumen de los resultados */
  printf("\nLos totales por calificacion son:\n");
  printf("A: %hd\n", cuentaA); /* despliega el número de calificaciones A */
  printf("B: %hd\n", cuentaB); /* despliega el número de calificaciones B */
  printf("C: %hd\n", cuentaC); /* despliega el número de calificaciones C */
  printf("D: %hd\n", cuentaD); /* despliega el número de calificaciones D */
  printf("F: %hd\n", cuentaF); /* despliega el número de calificaciones F */

  total = cuentaA + cuentaB + cuentaC + cuentaD + cuentaF;
  promedio = (float)total / 5;
  printf("Promedio: %.2f\n\n", promedio);
}
