/*
  Escriba un programa en C que juegue el juego de “adivina un número” de la
  siguiente manera:

  1. Su programa elige un número que debe adivinar el usuario, seleccionando al
  azar un número entero en el rango de 1 a 1000.
  2. Entonces, el programa escribe:

    Tengo un número entre 1 y 1000
    Puedes adivinar cuál es?
    Por favor escribe tu primera respuesta

  3. El jugador escribe su primera respuesta.
  4. El programa responde con uno de los siguientes mensajes:
    - ¡Excelente! ¡Adivinaste el número!
    Quieres jugar otra vez (¿s o n?)
    - Muy abajo. Intenta de nuevo.
    - Muy arriba. Intenta de nuevo.

  5. Si la respuesta del jugador es incorrecta, su programa debe entrar en un
  ciclo hasta que finalmente el jugador adivine el número correcto.
  6. Su programa debe continuar indicándole al jugador Muy bajo o Muy alto, para
  ayudarle a “acercarse” a la respuesta correcta. [Nota: La técnica de búsqueda
  empleada en este problema se conoce como búsqueda binaria. Hablaremos más
  acerca de esto en el siguiente problema.]
 */

/* Adivina el número */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int min, int max) { return (rand() % (max + min)) + min; }

int obtenerNumero(int min, int max) {
  int numero;

  printf("Tengo un numero entre %d y %d\n", min, max);
  printf("Puedes adivinar cual es?\n");
  printf("Escribe tu primera respuesta\n");
  scanf("%d", &numero);

  return numero;
}

int main() {
  srand(time(NULL));

  int min = 1;
  int max = 1000;
  char repetir = 's';

  while (repetir == 's') {
    int respuesta = aleatorio(min, max);
    int eleccion = obtenerNumero(min, max);

    printf("\n");

    while (eleccion != respuesta) {
      if (eleccion < respuesta)
        printf("Muy abajo. Intenta de nuevo\n");

      if (eleccion > respuesta)
        printf("Muy arriba. Intenta de nuevo\n");

      scanf("%d", &eleccion);
      printf("\n");
    }

    printf("Excelente!. Adivinaste el numero!\n");
    printf("Quieres jugar otra vez (s o n?)\n");
    scanf(" %c", &repetir);
    printf("\n");
  }

  printf("\n");
}
