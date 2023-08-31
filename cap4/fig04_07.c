/* Figura 4.7: fig04_07.c
  Cuenta las calificaciones expresadas en letras */
#include <stdio.h>

/* la función main comienza la ejecución del programa */
int main() {
  int calificacion; /* una calificación */
  int cuentaA = 0;  /* número de As */
  int cuentaB = 0;  /* número de Bs */
  int cuentaC = 0;  /* número de Cs */
  int cuentaD = 0;  /* número de Ds */
  int cuentaF = 0;  /* número de Fs */

  printf("Introduzca la letra que corresponde a la calificacion.\n");
  printf("Introduzca el caracter 'Z' para finalizar la entrada de datos.\n");

  /* repite hasta que el usuario digita
  la secuencia de teclas de fin de archivo */
  while ((calificacion = getchar()) != 'z') {
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
      printf("Introdujo la letra incorrecta.\n");
      printf("Introduzca una nueva calificacion.\n");
      break; /* opcional; de todas formas saldrá del switch */
    }        /* fin del switch */
  }          /* fin del while */

  /* muestra el resumen de los resultados */
  printf("\nLos totales por calificacion son:\n");
  printf("A: %d\n", cuentaA); /* despliega el número de calificaciones A */
  printf("B: %d\n", cuentaB); /* despliega el número de calificaciones B */
  printf("C: %d\n", cuentaC); /* despliega el número de calificaciones C */
  printf("D: %d\n", cuentaD); /* despliega el número de calificaciones D */
  printf("F: %d\n", cuentaF); /* despliega el número de calificaciones F */

  return 0; /* indica terminación exitosa del programa */
} /* fin de la función main */
