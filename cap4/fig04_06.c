/* Figura 4.6: fig04_06.c
  Cálculo del interés compuesto */
#include <math.h>
#include <stdio.h>

/* La función main comienza la ejecución del programa */
int main() {
  double monto;            /* monto del depósito */
  double principal = 1000; /* monto principal */
  double tasa = .05;       /* interés compuesto anual */
  int anio;                /* contador de años */

  /* muestra el encabezado de salida de la tabla */
  printf("%4s%21s\n", "Anio", "Monto del deposito");

  /* calcula el monto del depósito para cada uno de los diez años */
  for (anio = 1; anio <= 10; ++anio) {
    /* calcula el nuevo monto para el año especificado */
    monto = principal * pow(1 + tasa, anio);

    /* muestra una línea de la tabla */
    printf("%4d%21.2f\n", anio, monto);
  } /* fin del for */

  return 0; /* indica terminación exitosa del programa */
} /* fin de la función main */
