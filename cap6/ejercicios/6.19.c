/*
  Escriba un programa que simule el tiro de dos dados. El programa debe utilizar
  rand para tirar el primer dado, y debe utilizar rand de nuevo para tirar el
  segundo dado. Después, se debe calcular la suma de los dos valores. [Nota:
  Cada dado puede mostrar un valor entero de 1 a 6, de manera que la suma de los
  dos valores puede variar de 2 a 12, donde 7 es la suma más frecuente y 2 y 12
  son las sumas menos frecuentes]. La figura 6.23 muestra las 36 combinaciones
  posibles de los dos dados. Su programa debe lanzar los dos dados 36,000 veces.
  Utilice un arreglo con un solo subíndice para registrar el número de veces que
  aparece cada suma posible. Despliegue los resultados en formato tabular.
  Además, determine si los totales son razonables (es decir, existen seis
  maneras de tirar un 7, de manera que aproximadamente un sexto de todos los
  tiros debe ser 7).
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DADOS 2
#define COMBINACIONES pow(6, DADOS)
#define RESULTADOS 12 - 2 + 1
#define TIROS 36000

int aleatorio(int min, int max) { return rand() % max + min; }

int tirarDados() { return aleatorio(1, 6) + aleatorio(1, 6); }

int obtenerEsperado(short combinacion) {
  short frecuencia;

  switch (combinacion) {
  case 2:
  case 12:
    frecuencia = 1;
    break;
  case 3:
  case 11:
    frecuencia = 2;
    break;
  case 4:
  case 10:
    frecuencia = 3;
    break;
  case 5:
  case 9:
    frecuencia = 4;
    break;
  case 6:
  case 8:
    frecuencia = 5;
    break;
  default:
    frecuencia = 6;
  }

  return TIROS * (frecuencia / COMBINACIONES);
}

double obtenerPrecision(int esperado, int resultado) {
  short diferencia = abs(esperado - resultado);

  return ((diferencia * 100.0) / esperado) + 100;
}

void imprimirResultados(const int resultados[RESULTADOS]) {
  short combinacion = 2;

  printf("  Combinacion  Frecuencia  Esperado  Precision\n\n");
  for (; combinacion <= 12; ++combinacion) {
    printf("  %11d  %-10d  ", combinacion, resultados[combinacion - 2]);
    int esperado = obtenerEsperado(combinacion);
    double precision = obtenerPrecision(esperado, resultados[combinacion - 2]);
    printf("%-8d  ", esperado);
    printf("%.2f%c  %s\n", precision, '%', precision < 101 ? "Razonable" : "");
  }
}

int main() {
  srand(time(NULL));
  int tiro = 1;
  int resultados[RESULTADOS] = {0};

  for (; tiro <= TIROS; ++tiro) {
    int resultado = tirarDados();
    ++resultados[resultado - 2];
  }

  imprimirResultados(resultados);
  printf("\n");
}
