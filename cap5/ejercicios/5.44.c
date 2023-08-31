/*
  Los ejercicios 5.32 a 5.34 desarrollaron un programa de educación asistida por
  computadora para enseñar a un estudiante de primaria a multiplicar. Este
  ejercicio sugiere mejoras a ese programa.

  a) Modifique el programa para permitir al usuario registrar el nivel de
  capacidad. Un nivel igual a 1 significa el uso de números de un solo dígito
  para el problema, un nivel igual a dos significa el uso de números de dos
  dígitos, etcétera.

  b) Modifique el programa para permitir al usuario elegir el tipo de problemas
  que desea estudiar.

  Una opción igual a 1 significa sólo problemas de sumas,
  2 significa sólo problemas de restas,
  3 significa sólo problemas de multiplicación,
  4 significa sólo problemas de división, y
  5 significa la mezcla aleatoria de problemas de todos los tipos.
 */

/* Prueba aritmética asistida */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Operacion { SUMA = 1, RESTA, MULTIPLICACION, DIVISION, TODAS };
enum Booleanos { FALSO, VERDADERO };

short aleatorio(short min, short max) { return (rand() % max) + min; }

short obtenerCapacidad() {
  short capacidad;

  while (1) {
    printf("Nivel de capacidad: ");
    scanf("%hd", &capacidad);
    if (capacidad >= 1)
      return capacidad;
  }
}

enum Operacion obtenerOperacion() {
  short tipoDeProblemas;

  printf("Tipo de problemas:\n\n");
  printf("  1: Sumas\n");
  printf("  2: Restas\n");
  printf("  3: Multiplicaciones\n");
  printf("  4: Divisiones\n");
  printf("  5: Todas las anteriores\n");
  while (1) {
    printf("    (1-5): ");
    scanf("%hd", &tipoDeProblemas);

    if (tipoDeProblemas >= 1 && tipoDeProblemas <= 5)
      return tipoDeProblemas;
  }
}

enum Booleanos aprobo(short correctas, short incorrectas, short limite) {
  if (correctas + incorrectas >= limite) {
    short porcentajeRespuestasCorrectas = ((float)correctas * 100) / limite;
    if (porcentajeRespuestasCorrectas < 75)
      return FALSO;
  }

  return VERDADERO;
}

int imprimirProblema(enum Operacion operacion, long x, long y) {
  long respuesta;

  switch (operacion) {
  case SUMA:
    respuesta = x + y;
    printf("Cuanto es %ld mas %ld: ", x, y);
    break;
  case RESTA:
    respuesta = x - y;
    printf("Cuanto es %ld menos %ld: ", x, y);
    break;
  case MULTIPLICACION:
    respuesta = x * y;
    printf("Cuanto es %ld por %ld: ", x, y);
    break;
  case DIVISION:
    respuesta = x / y;
    printf("Cuanto es %ld entre %ld: ", x, y);
    break;
  default:
    respuesta = imprimirProblema(aleatorio(SUMA, DIVISION), x, y);
  }

  return respuesta;
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

long obtenerRespuestaDelEstudiante() {
  long respuesta;
  scanf("%ld", &respuesta);

  return respuesta;
}

int calcularCapacidadMaxima(short capacidad) {
  int contador = 1;
  int capacidadMaxima = 1;

  for (; contador <= capacidad; ++contador)
    capacidadMaxima *= 10;

  return capacidadMaxima - 1;
}

int main() {
  srand(time(NULL));
  short correctas = 0;
  short incorrectas = 0;
  short capacidad = obtenerCapacidad();
  enum Operacion operacion = obtenerOperacion();
  printf("\n");

  while (1) {
    if (!aprobo(correctas, incorrectas, 10))
      return printf("Por favor, pide ayuda adicional a tu profesor\n\n");

    long x = aleatorio(0, calcularCapacidadMaxima(capacidad));
    long y = aleatorio(0, calcularCapacidadMaxima(capacidad));
    long respuestaCorrecta = imprimirProblema(operacion, x, y);
    long respuestaDelEstudiante = obtenerRespuestaDelEstudiante();

    if (respuestaDelEstudiante == respuestaCorrecta) {
      ++correctas;
      imprimirMensajeRespuestaCorrecta();
      printf("\n\n");
      continue;
    }

    ++incorrectas;
    imprimirMensajeRespuestaIncorrecta();
    printf("\n\n");
  }

  printf("\n");
}
