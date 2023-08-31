/*
  Los conductores están preocupado por el kilometraje obtenido en sus
  automóviles. Un conductor mantiene el registro de muchos llenados de tanque de
  gasolina mediante el registro de miles de kilómetros conducidos y los litros
  empleados durante cada llenado del tanque. El programa debe calcular y
  desplegar los kilómetros por litro obtenidos durante cada llenado de tanque.
  Después de procesar toda la información, el programa debe calcular y desplegar
  los kilómetros por litro combinados de todos los llenados de tanque.

  Objetivo
  Calcular los kilómetos por litro durante cada llenado de tanque y el promedio
  de todos los llenados de tanque

  Mejoramiento 1
  Calcular y mostrar los kilómetros por litro
  Calcular y mostrar el promedio de los kilómetros por litro

  Mejoramiento 2
  Repetir hasta que el usuario decida terminar
  Obtener litros
  Obtener kilómetros
  Calcular kilómetros por litro
  Obtener la sumatoria de los kilómetros por litro
  Mostrar el promedio

  Mejoramiento 3
  leer litros
  while (litros != -1)
    leer kilómetros
    calcular kilómetros por litro
    escribir kilómetros por litro
    acumular kilómetros por litro
    acumular contador
  calcular promedio de sumatoria de kilómetros por litro / contador
  escribir promedio
*/

/* Calcular promedio de kilómetros por litro */
#include <stdio.h>

int main() {
  float litros;     // Litros utilizados
  float kilometros; // Kilómetros conducidos
  float kmpl;       // Kilómetros/Litro
  float total = 0;  // Sumatoria de los Kilómetros/Litro
  float promedio;   // Promedio de los Kilómetros/Litro
  int contador;

  printf("Introduzca los litros utilizados (-1 para terminar): ");
  scanf("%f", &litros);

  while (litros != -1) {
    printf("Introduzca los kilometros conducidos: ");
    scanf("%f", &kilometros);

    kmpl = kilometros / litros;
    printf("Los kilometros por litro de este tanque fueron: %f\n\n", kmpl);

    total += kmpl;
    ++contador;

    printf("Introduzca los litros utilizados (-1 para terminar): ");
    scanf("%f", &litros);
  }

  if (contador != 0)
    promedio = total / contador;

  printf("\nEl promedio general de kilometros/litro fue %f\n\n", promedio);
}
