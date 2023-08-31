/*
  Modifique el programa del interés compuesto de la sección 4.6 para repetir
  sus pasos para tasas de interés del 5 por ciento, 6 por ciento, 8 por ciento,
  9 por ciento, y 10 por ciento. Utilice un for para crear un ciclo que varíe la
  tasa de interés.
 */

/* Figura 4.6: fig04_06_1.c
  Cálculo del interés compuesto */
#include <math.h>
#include <stdio.h>

/* La función main comienza la ejecución del programa */
int main() {
  double monto;            /* monto del depósito */
  double principal = 1000; /* monto principal */
  double tasa;             /* interés compuesto anual */
  int anio;                /* contador de años */

  for (tasa = .05; tasa * 100 <= 10; tasa += .01) {
    if (tasa == .07)
      continue;

    /* muestra el encabezado de salida de la tabla */
    printf("%4s%21s", "Anio", "Monto del deposito");
    printf("%21s%.0f%c\n", "Tasa de interes: ", tasa * 100, '%');

    /* calcula el monto del depósito para cada uno de los diez años */
    for (anio = 1; anio <= 10; ++anio) {
      /* calcula el nuevo monto para el año especificado */
      monto = principal * pow(1 + tasa, anio);

      /* muestra una línea de la tabla */
      printf("%4d%21.2f\n", anio, monto);
    } /* fin del for */

    printf("\n");
  }
}
