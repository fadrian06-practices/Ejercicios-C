/*
  Rescriba el programa de la figura 4.7 y remplace la instrucción switch con una
  instrucción if…else anidada; sea cuidadoso al manejar el caso default.
  Después, rescriba esta nueva versión reemplazando la instrucción anidada
  if…else con una serie de instrucciones if; aquí también tenga cuidado al
  manejar el caso default (esto es más difícil que la versión con if…else
  anidado). Este ejercicio demuestra que switch es conveniente y que cualquier
  instrucción switch se puede escribir únicamente con instrucciones de selección
  simple.
 */

/* Figura 4.7: fig04_07_3.c
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

  /* repite hasta que el usuario digita la secuencia de teclas de fin de archivo
   */
  while ((calificacion = getchar()) != 'z') {
    /* determina cuál calificación se introdujo */

    /*----------  SWITCH  ----------*/
    // switch (calificacion) { /* switch anidado dentro de while */
    //  case 'A': /* la calificación es "A" */
    //  case 'a': /* o "a" */
    //    ++cuentaA; /* incrementa cuentaA */
    //    break; /* sale del switch */

    //  case 'B': /* la calificación es "B" */
    //  case 'b': /* o "b" */
    //    ++cuentaB; /* incrementa cuentaB */
    //    break; /* sale del switch */

    //  case 'C': /* la calificación es "C" */
    //  case 'c': /* o "c" */
    //    ++cuentaC; /* incrementa cuentaC */
    //    break; /* sale del switch */

    //  case 'D': /* la calificación es "D" */
    //  case 'd': /* o "d" */
    //    ++cuentaD;  incrementa cuentaD
    //    break; /* sale del switch */

    //  case 'F': /* la calificación es "F" */
    //  case 'f': /* o "f" */
    //    ++cuentaF; /* incrementa cuentaF */
    //    break; /* sale del switch */

    //  case '\n': /* ignora nuevas líneas */
    //  case '\t': /* tabulaciones */
    //  case ' ': /* y espacios en la entrada */
    //    break; /* fin del switch */

    //  default: /* atrapa todos los demás caracteres */
    //    printf("Introdujo la letra incorrecta.\n");
    //    printf("Introduzca una nueva calificacion.\n");
    //    break; /* opcional; de todas formas saldrá del switch */
    // } /* fin del switch */

    /*----------  IF...ELSE  ----------*/
    if (calificacion == 'A' || calificacion == 'a')
      ++cuentaA;
    else if (calificacion == 'B' || calificacion == 'b')
      ++cuentaB;
    else if (calificacion == 'C' || calificacion == 'c')
      ++cuentaC;
    else if (calificacion == 'D' || calificacion == 'd')
      ++cuentaD;
    else if (calificacion == 'F' || calificacion == 'f')
      ++cuentaF;
    else if (calificacion == '\n' || calificacion == '\t' ||
             calificacion == ' ')
      continue;
    else {
      printf("Introdujo la letra incorrecta.\n");
      printf("Introduzca una nueva calificacion.\n");
    }

    /*----------  IF  ----------*/
    // if (calificacion == 'A' || calificacion == 'a')
    //  ++cuentaA;
    // if (calificacion == 'B' || calificacion == 'b')
    //  ++cuentaB;
    // if (calificacion == 'C' || calificacion == 'c')
    //  ++cuentaC;
    // if (calificacion == 'D' || calificacion == 'd')
    //  ++cuentaD;
    // if (calificacion == 'F' || calificacion == 'f')
    //  ++cuentaF;
    // if (calificacion == '\n' || calificacion == '\t' || calificacion == ' ')
    //  continue;
    // if (calificacion != 'A' && calificacion != 'a'
    //  && calificacion != 'B' && calificacion != 'b'
    //  && calificacion != 'C' && calificacion != 'c'
    //  && calificacion != 'D' && calificacion != 'd'
    //  && calificacion != 'F' && calificacion != 'f'
    //  && calificacion != '\n' && calificacion != '\t' && calificacion != ' '
    // ) {
    //  printf("Introdujo la letra incorrecta.\n");
    //  printf("Introduzca una nueva calificacion.\n");
    // }
  }

  /* muestra el resumen de los resultados */
  printf("\nLos totales por calificacion son:\n");
  printf("A: %d\n", cuentaA); /* despliega el número de calificaciones A */
  printf("B: %d\n", cuentaB); /* despliega el número de calificaciones B */
  printf("C: %d\n", cuentaC); /* despliega el número de calificaciones C */
  printf("D: %d\n", cuentaD); /* despliega el número de calificaciones D */
  printf("F: %d\n", cuentaF); /* despliega el número de calificaciones F */

  printf("\n\n");
}
