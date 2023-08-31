/*
  Modifique el programa del ejercicio 5.35 para contar el número de respuestas
  correctas que escribió el usuario.

  - Si el número es 10 o menos, imprima

    ¡O sabe el secreto, o tiene suerte!

  - Si el jugador adivina el número en diez ocasiones, entonces imprima

    ¡Ajá! ¡Usted sabe el secreto!

  - Si el jugador necesita más de 10 intentos, entonces imprima

    ¡Usted puede hacerlo mejor!

  ¿Por qué no debe llevarse más de diez intentos? Bien, con cada “respuesta
  buena” el jugador debería ser capaz de eliminar la mitad de los números. Ahora
  sabe por qué cualquier número de 1 a 1000 se puede adivinar en 10 o menos
  oportunidades.
 */

/* Adivina el número con estadísticas */
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

void imprimirResultado(short intentos, short correctas) {
  if (intentos == 10)
    printf("Aja!. Usted sabe el secreto!\n");
  else if (intentos > 10)
    printf("Usted puede hacerlo mejor!\n");
  else if (correctas <= 10)
    printf("O sabe el secreto, o tiene suerte!\n");
  else
    printf("Excelente!. Adivinaste el numero!\n");
}

int main() {
  srand(time(NULL));
  int min = 1;
  int max = 1000;
  int primeraVez = 1;
  int correctas = 0;
  int intentos = 0;
  char repetir = 's';

  while (repetir == 's') {
    int respuesta = aleatorio(min, max);
    int eleccion = obtenerNumero(min, max);
    ++intentos;
    printf("\n");

    while (eleccion != respuesta) {
      if (eleccion < respuesta)
        printf("Muy abajo.");

      if (eleccion > respuesta)
        printf("Muy arriba.");

      printf(" Intenta de nuevo\n");
      scanf("%d", &eleccion);
      printf("\n");
      ++intentos;
    }

    ++correctas;
    imprimirResultado(intentos, correctas);
    printf("\nQuieres jugar otra vez (s o n?)\n");
    scanf(" %c", &repetir);
    printf("\n");
  }
}
