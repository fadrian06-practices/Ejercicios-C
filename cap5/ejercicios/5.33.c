/*
  Al uso de las computadoras en la educación se le conoce como Educación
  Asistida por Computadora (EAC). Un problema que se presenta en los ambientes
  EAC es la fatiga estudiantil. Esto puede eliminarse variando los diálogos de
  las computadoras para mantener la atención de los estudiantes.

  Modifique el programa del ejercicio 5.32, de manera que se impriman distintos
  comentarios para cada pregunta contestada de manera correcta y para cada
  pregunta contestada de manera incorrecta, de la siguiente forma:

  Mensajes para una respuesta correcta:
    ¡Muy bien!
    ¡Excelente!
    ¡Buen trabajo!
    ¡Mantén ese buen rendimiento!

  Mensajes para una respuesta incorrecta:
    No. Por favor intenta de nuevo.
    Incorrecto. Trata una vez más.
    No te rindas!
    No. Sigue intentando.

  Utilice el generador de números aleatorios para elegir un número de 1 a 4 y
  que seleccione el mensaje apropiado para cada respuesta. Utilice una
  instrucción switch con instrucciones printf para configurar los mensajes.
 */

/* Exámen de multiplicación asistido */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int min, int max) { return (rand() % (max + min)) + min; }

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

  srand(time(NULL));

  while (1) {
    int aleatorio1 = aleatorio(0, 99);
    int aleatorio2 = aleatorio(0, 99);

    while (1) {
      printf("Cuanto es %d por %d: ", aleatorio1, aleatorio2);
      scanf("%d", &entero);

      if (entero == aleatorio1 * aleatorio2) {
        imprimirMensajeRespuestaCorrecta();
        printf("\n\n");
        break;
      }

      imprimirMensajeRespuestaIncorrecta();
      printf("\n\n");
    }
  }

  printf("\n");
}
