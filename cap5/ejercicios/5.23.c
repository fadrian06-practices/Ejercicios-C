/*
  Escriba una función que tome el tiempo en tres argumentos enteros (para
  horas, minutos, y segundos), y que devuelva el número de segundos
  desde la última vez que el reloj “marcó las 12”. Utilice esta función
  para calcular los segundos que existen entre dos horas, las cuales se miden
  con el ciclo de 12 horas del reloj.
 */

/* Calcula los segundos de diferencia entre dos horas completas */
#include <stdio.h>

int calcularSegundos(int horas, int minutos, int segundos) {
  int total = 0;

  total += horas * 3600; // Convertir las horas a segundos
  total += minutos * 60; // Convertir los minutos a segundos
  total += segundos;     // Sumar los segundos

  return total;
}

int main() {
  int horas, minutos, segundos;
  int segTiempo1, segTiempo2;
  int contador;

  for (contador = 1; contador <= 2; ++contador) {
    printf("%d/2\n---\n", contador);
    printf("Introduzca las horas: ");
    scanf("%d", &horas);
    printf("Introduzca los minutos: ");
    scanf("%d", &minutos);
    printf("Introduzca los segundos: ");
    scanf("%d", &segundos);
    if (contador == 1)
      segTiempo1 = calcularSegundos(horas, minutos, segundos);
    else
      segTiempo2 = calcularSegundos(horas, minutos, segundos);

    printf("\n");
  }

  unsigned int diffSeg = segTiempo1 - segTiempo2;
  printf("La diferencia en segundos entre las dos horas es: %d\n\n", diffSeg);
}
