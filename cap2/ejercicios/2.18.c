/*
  Escriba un programa que pida al usuario que introduzca dos enteros, que
  obtenga los números por parte del usuario, después que imprima las palabras
  “es más grande”. Si los números son iguales, que imprima el mensaje “Estos
  números son iguales”. Solamente utilice la forma de selección simple de la
  instrucción if, que aprendió en este capítulo.
 */

/* Compara dos enteros */
#include <stdio.h>

int main() {
  int num1, num2;

  printf("Introduce dos enteros: ");
  scanf("%d%d", &num1, &num2);

  if (num1 > num2) {
    printf("Es mas grande\n");
  }

  if (num1 == num2) {
    printf("Estos numeros son iguales\n");
  }
}
