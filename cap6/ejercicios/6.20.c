/*
  Escriba un programa que ejecute 1000 juegos de craps (sin intervención humana)
  y responda las siguientes preguntas

  a) ¿Cuántos juegos se ganan en el primer tiro, en el segundo tiro, …, en el
  tiro número 20, y después del tiro número 20?
  b) ¿Cuántos juegos se pierden en el primer tiro, en el segundo tiro, …, en el
  tiro número 20, y después del tiro número 20?
  c) ¿Cuál es la oportunidad de ganar en craps? (Nota: Usted debe saber que
  craps es uno de los juegos de casino más imparciales. ¿Qué cree usted que
  significa esto?
  d) ¿Cuál es la duración promedio de un juego de craps?
  e) ¿Mejoran las oportunidades de ganar con la duración del juego?
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* contiene el prototipo de la función time */
#define PARTIDAS 1000
#define TIROS 21 + 1

/* constantes de enumeración que representan el estado del juego */
enum Estatus { CONTINUA, GANA, PIERDE };

short aleatorio(short min, short max) { return rand() % max + min; }

/* tiro de dados, calcula la suma y despliega los resultados */
int tiraDados() {
  int dado1 = aleatorio(1, 6); /* toma el aleatorio para el dado 1 */
  int dado2 = aleatorio(1, 6); /* toma el aleatorio para el dado 2 */
  int sumaTemp = dado1 + dado2;

  /* despliega los resultados de este tiro */
  printf("El jugador tiro %d + %d = %d\n", dado1, dado2, sumaTemp);

  return sumaTemp; /* devuelve la suma de los dados */
}

enum Estatus craps(int victorias[], int perdidas[]) {
  short miPunto; /* punto ganado */
  short tiro = 0;

  enum Estatus estado; /* puede contener CONTINUA, GANA o PIERDE */

  short suma = tiraDados(); /* primer tiro de los dados */
  ++tiro;

  /* determina el estado del juego basado en la suma de los dados */
  switch (suma) {
  /* gana en el primer tiro */
  case 7:
  case 11:
    estado = GANA;
    break;
  /* pierde en el primer tiro */
  case 2:
  case 3:
  case 12:
    estado = PIERDE;
    break;
  /* recuerda el punto */
  default:
    estado = CONTINUA;
    miPunto = suma;
    printf("Su punto es %d\n", miPunto);
  }

  /* mientras el juego no se complete */
  while (estado == CONTINUA) {
    suma = tiraDados(); /* tira de nuevo los dados */
    ++tiro;

    /* determina el estatus del juego */
    if (suma == miPunto) /* gana por punto */
      estado = GANA;
    else if (suma == 7) /* pierde al tirar 7 */
      estado = PIERDE;
  }

  /* despliega mensaje de triunfo o derrota */
  if (estado == GANA) {
    printf("El jugador gana\n");
    ++victorias[tiro];
  } else {
    printf("El jugador pierde\n");
    ++perdidas[tiro];
  }

  return estado;
}

void imprimirResultados(int victorias[], int perdidas[]) {
  short tiro = 1;
  int victoriasTotales = 0;

  printf("  Tiro | Victorias | Perdidas\n");
  printf("-----------------------------\n");

  for (; tiro < TIROS; ++tiro) {
    printf("  %4d | %9d | %8d\n", tiro, victorias[tiro], perdidas[tiro]);
    victoriasTotales += victorias[tiro];
  }

  double oportunidadDeGanar = (double)victoriasTotales / PARTIDAS;
  printf("\nOportunidad de ganar: %.0lf%c\n", oportunidadDeGanar * 100, '%');
}

int main() {
  int partida = 1;
  int victorias[TIROS] = {0};
  int perdidas[TIROS] = {0};

  /* randomiza el generador de números aleatorios mediante la función time */
  srand(time(NULL));

  for (; partida <= PARTIDAS; ++partida) {
    printf("Partida (%d/%d)\n", partida, PARTIDAS);
    craps(victorias, perdidas);
    printf("\n");
  }

  imprimirResultados(victorias, perdidas);
  printf("\n");
}
