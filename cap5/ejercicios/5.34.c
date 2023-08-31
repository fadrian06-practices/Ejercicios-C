/*
  Sistemas más sofisticados de educación asistida por computadora monitorean el
  rendimiento de un estudiante a lo largo de un periodo de tiempo. A menudo, la
  decisión de comenzar un nuevo tema se basa en el éxito del estudiante con
  los temas previos. Modifique el programa del ejercicio 5.33 para que cuente el
  número de respuestas correctas e incorrectas del estudiante. Después de
  contestar diez preguntas, su programa debe calcular el porcentaje de
  respuestas correctas. Si el porcentaje es menor que 75 por ciento, su programa
  debe imprimir “Por favor, pide ayuda adicional a tu profesor” y terminar.
 */

/* Examen de multiplicación asistido */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Booleano { FALSO, VERDADERO };

int aleatorio(int min, int max) { return (rand() % (max + min)) + min; }

enum Booleano aprobo(short correctas, short incorrectas, short limite) {
  if (correctas + incorrectas == limite) {
    short porcentajeRespuestasCorrectas = ((float)correctas / limite) * 100;
    if (porcentajeRespuestasCorrectas < 75)
      return FALSO;
  }

  return VERDADERO;
}

void imprimirMensajeRespuestaCorrecta() {
  switch (aleatorio(1, 4)) {
  case 1:
    printf("Muy bien!");
    break;
  case 2:
    printf("Excelente!");
    break;
  case 3:
    printf("Buen trabajo!");
    break;
  default:
    printf("Manten ese buen rendimiento!");
  }
}

void imprimirMensajeRespuestaIncorrecta() {
  switch (aleatorio(1, 4)) {
  case 1:
    printf("No. Por favor intenta de nuevo");
    break;
  case 2:
    printf("Incorrecto. Trata una vez mas");
    break;
  case 3:
    printf("No te rindas!");
    break;
  default:
    printf("No. Sigue intentando");
  }
}

int main() {
  int entero;
  int correctas = 0, incorrectas = 0;

  srand(time(NULL));

  while (1) {

    int aleatorio1 = aleatorio(0, 99);
    int aleatorio2 = aleatorio(0, 99);

    while (1) {
      if (!aprobo(correctas, incorrectas, 10))
        return printf("Por favor, pide ayuda adicional a tu profesor\n\n");

      printf("Cuanto es %d por %d: ", aleatorio1, aleatorio2);
      scanf("%d", &entero);

      if (entero == aleatorio1 * aleatorio2) {
        ++correctas;
        imprimirMensajeRespuestaCorrecta();
        printf("\n\n");
        continue;
      }

      ++incorrectas;
      imprimirMensajeRespuestaIncorrecta();
      printf("\n\n");
    }
  }

  printf("\n");
}
