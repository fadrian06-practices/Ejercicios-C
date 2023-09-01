/* Figura 6.10: fig06_10.c
  Manipulación de arreglos de caracteres como cadenas */
#include <stdio.h>

/* la función main comienza la ejecución del programa */
int main() {
  char cadena1[20]; /* reserva 20 caracteres */
  char cadena2[] = "literal de cadena"; /* reserva 18 caracteres */
  int i; /* contador */

  /* lee la cadena del usuario y la introduce en el arreglo cadena1 */
  printf("Introduce una cadena: ");
  scanf("%s", cadena1);

  /* muestra las cadenas */
  printf("La cadena1 es: %s\n", cadena1);
  printf("cadena2 es: %s\n", cadena2);

  printf("La cadena1 con espacios entre caracteres es:\n");
  /* muestra los caracteres hasta que encuentra el caracter nulo */
  for (i = 0; cadena1[i] != '\0'; i++) {
    printf("%c ", cadena1[i]);
  } /* fin de for */

  printf("\n");
  return 0; /* indica terminación exitosa */
} /* fin de main */
