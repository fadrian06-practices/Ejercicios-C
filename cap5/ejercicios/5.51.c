/*
  Modifique el programa del juego de craps que aparece en la figura 5.10 para
  permitir las apuestas.

  1. Empaque, como una función, la porción del programa que ejecuta un juego de
  craps.
  2. Inicialice la variable saldoBanco en $1000.
  3. Indique al usuario que introduzca la apuesta.
  4. Utilice un ciclo while para verificar si la apuesta es menor o igual que
  saldoBanco; si no es así, indique al usuario que reintroduzca la apuesta hasta
  que lo haga con una cantidad válida.
  5. Después de introducir una cantidad válida, ejecute el juego de craps.
  6. Si el jugador pierde, disminuya saldoBanco con el importe de la apuesta,
  imprima el nuevo saldoBanco, verifique si saldoBanco es igual que cero, y si
  lo es imprima el mensaje “Lo siento. ¡Su saldo se agoto!”.
  7 Durante el transcurso del juego, imprima mensajes para crear algo de
  “conversación” tal como “mhm…, parece que va a la quiebra”, o “¡Ande!,
  atrévase!”, o “¡Ya estás grande, ahora es el momento de arriesgarse!”
 */

/* Juego de craps con apuestas */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* contiene el prototipo de la función time */

/* constantes de enumeración que representan el estado del juego */
enum Estatus { CONTINUA, GANA, PIERDE };

short aleatorio(short min, short max) { return rand() % max + min; }

void imprimirMensajeDeConversacion() {
  switch (aleatorio(1, 3)) {
  case 1:
    printf("Mhm..., parece que va a la quiebra\n");
    break;
  case 2:
    printf("Ande!, atrevase!\n");
    break;
  default:
    printf("Ya estás grande, ahora es el momento de arriesgarse!\n");
  }
}

int obtenerApuesta() {
  int apuesta;
  printf("Introduzca la apuesta: ");
  scanf("%d", &apuesta);
  return apuesta;
}

/* tiro de dados, calcula la suma y despliega los resultados */
int tiraDados() {
  int dado1 = aleatorio(1, 6); /* toma el aleatorio para el dado 1 */
  int dado2 = aleatorio(1, 6); /* toma el aleatorio para el dado 2 */
  int sumaTemp = dado1 + dado2;

  /* despliega los resultados de este tiro */
  printf("El jugador tiro %d + %d = %d\n", dado1, dado2, sumaTemp);

  return sumaTemp; /* devuelve la suma de los dados */
}

enum Estatus craps() {
  short suma;    /* suma del tiro de dados */
  short miPunto; /* punto ganado */

  enum Estatus estado; /* puede contener CONTINUA, GANA o PIERDE */

  /* randomiza el generador de números aleatorios mediante la función time */
  srand(time(NULL));
  suma = tiraDados(); /* primer tiro de los dados */

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

    /* determina el estatus del juego */
    if (suma == miPunto) /* gana por punto */
      estado = GANA;
    else if (suma == 7) /* pierde al tirar 7 */
      estado = PIERDE;
  }

  /* despliega mensaje de triunfo o derrota */
  printf("%s\n", estado == GANA ? "El jugador gana" : "El jugador pierde");
  return estado;
}

int main() {
  int saldoBanco = 1000;
  int apuesta = obtenerApuesta();
  enum Estatus estatusJuego;

  srand(time(NULL));

  while (saldoBanco > 0) {
    while (apuesta < saldoBanco)
      apuesta = obtenerApuesta();

    apuesta = abs(apuesta - saldoBanco);
    printf("\n");
    imprimirMensajeDeConversacion();
    estatusJuego = craps();
    if (estatusJuego == PIERDE)
      saldoBanco -= apuesta;
    else
      saldoBanco += apuesta;

    printf("\n");
    printf("Saldo banco: %d\n\n", saldoBanco);
    apuesta = 0;
  }

  printf("Lo siento. Su saldo se agoto!\n");
}
