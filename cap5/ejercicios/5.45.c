/*
  Escriba una función distancia que calcule la distancia entre dos puntos
  (x1, y1) y (x2, y2). Todos los números y los valores de retorno deben ser de
  tipo double.
 */

/* Calcula la distancia entre dos puntos en el plano cartesiano */
#include <math.h>

double distancia(double x1, double x2, double y1, double y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
