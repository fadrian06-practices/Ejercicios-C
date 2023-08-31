/*
  Un palíndromo es un número o una frase de texto que se lee igual hacia delante
  y hacia atrás. Por ejemplo, cada uno de los siguientes números de cinco
  dígitos, son palíndromos: 12321, 55555, 45554, y 11611. Escriba un programa
  que lea números de cinco dígitos y que determine si es o no, un palíndromo.
  [Pista: Utilice los operadores de división y residuo para separar el número en
  sus dígitos individuales.]
*/

/* Imprime si un entero es palíndromo o no */
#include <stdio.h>

int main() {
  int primerDigito, segundoDigito, tercerDigito, cuartoDigito, quintoDigito;
  int palindromo;

  printf("Introduzca un numero de cinco digitos");
  printf(" y le dire si es palindromo o no: ");
  scanf("%d", &palindromo);

  quintoDigito = palindromo % 10;
  cuartoDigito = (palindromo % 100) / 10;
  tercerDigito = (palindromo % 1000) / 100;
  segundoDigito = (palindromo % 10000) / 1000;
  primerDigito = palindromo / 10000;

  if (primerDigito == quintoDigito)
    if (segundoDigito == cuartoDigito)
      printf("%d es un palindromo", palindromo);
    else
      printf("%d no es un palindromo", palindromo);
  else
    printf("%d no es un palindromo", palindromo);

  printf("\n\n");
}
