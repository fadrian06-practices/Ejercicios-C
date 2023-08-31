/*
  Una interesante aplicación de las computadoras es dibujar gráficos de barras
  (en ocasiones llamadas “histogramas”). Escriba un programa que lea cinco
  números (cada uno entre 1 y 30). Por cada número leído, su programa debe
  imprimir una línea que contenga dicho número con asteriscos adyacentes. Por
  ejemplo, si su programa lee el número 7, debe imprimir *******.
 */

/* Imprimir un histograma de 5 números */
#include <stdio.h>

int main() {
  short numero, contador = 1, asteriscos;

  for (; contador <= 5;) {
    printf("Introduzca un numero entre 1 y 30: ");
    scanf("%hd", &numero);

    if (numero < 1 || numero > 30) {
      printf("Numero fuera de rango\n\n");
      continue;
    }

    for (asteriscos = 1; asteriscos <= numero; ++asteriscos)
      printf("*");

    ++contador;
    printf("\n\n");
  }
}
