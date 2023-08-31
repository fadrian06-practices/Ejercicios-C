/*
  ¿Cómo puede determinar la rapidez real con la que opera su propia computadora?
  Escriba un programa mediante un ciclo while que cuente de 1 a 300,000,000 por
  unos. Cada vez que la cuenta alcance un múltiplo de 100,000,000 despliegue
  dicho número en la pantalla. Utilice su reloj para determinar cuánto tarda
  cada millón de repeticiones del ciclo.
 */

/* Imprime los tres primeros múltiplos de 100 millones */
#include <stdio.h>

int main() {
  int contador = 1;

  while (contador <= 300000000 /* 300 millones */) {
    if (contador % 100000000 /* 100 millones */ == 0)
      printf("%d\n", contador);

    ++contador;
  }

  printf("\n");
}
