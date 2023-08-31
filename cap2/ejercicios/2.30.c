/* Separa en dígitos un entero de 5 dígitos */
#include <stdio.h>

int main() {
  int numero, digito;

  printf("Introduce un numero: ");
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
