/*
  Escriba un programa que introduzca un número de cinco dígitos, que separe el
  número en sus dígitos individuales y que despliegue los dígitos separados
  entre sí mediante tres espacios cada uno. [Pista: Utilice combinaciones de la
  división entera y el operador módulo.] Por ejemplo, si el usuario escribe
  42139, el programa debe imprimir

  4   2   1   3   9
 */

/* Separa en dígitos un entero de 5 dígitos */
#include <stdio.h>

int main() {
  int numero, digito;

  printf("Introduce un numero de cinco digitos: ");
  scanf("%d", &numero);

  digito = numero / 10000;
  numero = numero % 10000;
  printf("%d   ", digito);

  digito = numero / 1000;
  numero = numero % 1000;
  printf("%d   ", digito);

  digito = numero / 100;
  numero = numero % 100;
  printf("%d   ", digito);

  digito = numero / 10;
  numero = numero % 10;
  printf("%d   ", digito);

  digito = numero / 1;
  numero = numero % 1;
  printf("%d\n", digito);
}
