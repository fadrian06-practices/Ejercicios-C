/*
  He aquí un avance. En este capítulo aprendió acerca de enteros y del tipo int.
  C también puede representar letras mayúsculas, minúsculas, y una considerable
  variedad de símbolos especiales. C utiliza internamente enteros pequeños
  para representar cada carácter. Al conjunto de caracteres que utiliza una
  computadora y a las representaciones enteras para esos caracteres se les
  conoce como conjunto de caracteres de la computadora. Por ejemplo, usted puede
  imprimir el entero equivalente a la A mayúscula, si ejecuta la instrucción:

  printf( “%d”, ‘A’ );

  Escriba un programa en C que imprima los enteros equivalentes a algunas letras
  mayúsculas, minúsculas, dígitos y símbolos especiales. Como mínimo, determine
  los enteros equivalentes de las siguientes: A B C a b c 0 1 2 $ * + / y el
  carácter espacio en blanco.
 */

/* Imprime representación entera de elementos del conjunto de caracteres */
#include <stdio.h>

int main() {
  printf("A: %d\n", 'A');
  printf("B: %d\n", 'B');
  printf("C: %d\n", 'C');
  printf("a: %d\n", 'a');
  printf("b: %d\n", 'b');
  printf("c: %d\n", 'c');
  printf("0: %d\n", '0');
  printf("1: %d\n", '1');
  printf("2: %d\n", '2');
  printf("$: %d\n", '$');
  printf("*: %d\n", '*');
  printf("+: %d\n", '+');
  printf("/: %d\n", '/');
  printf(" : %d\n", ' ');
}
