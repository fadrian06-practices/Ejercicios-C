/*
  Las computadoras juegan un rol cada vez más importante en la educación.

  Escriba un programa que ayude a cualquier estudiante de primaria a aprender
  a multiplicar.

  1. Utilice rand para producir dos enteros positivos de dos dígitos.
  2. Después, debe escribir una pregunta como ésta: ¿Cuánto es 6 por 7?
  3. Entonces, el estudiante escribe la respuesta.
  4. Su programa verifica la respuesta.
  5. Si es correcta, imprime “¡Muy bien!” y hace otra pregunta.
  6. Si la respuesta es incorrecta, imprime “No. Por favor intenta de nuevo”, lo
  que permite al estudiante intentar la misma pregunta de manera repetida hasta
  que finalmente la contesta correctamente.
 */

/* Exámen de multiplicación */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int entero;

  while (1) {
    int aleatorio1 = rand() % 100;
    int aleatorio2 = rand() % 100;

    while (1) {
      printf("Cuanto es %d por %d: ", aleatorio1, aleatorio2);
      scanf("%d", &entero);

      if (entero == aleatorio1 * aleatorio2) {
        printf("Muy bien\n\n");
        break;
      }

      printf("No. Por favor intenta de nuevo\n\n");
    }
  }

  printf("\n");
}
