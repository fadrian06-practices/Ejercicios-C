/*
  Modifique el programa de la figura 4.6 de manera que sólo utilice enteros para
  calcular el interés compuesto. [Pista: Trate todas las cantidades monetarias
  como números enteros de centavos. Luego, “rompa” el resultado en su parte
  entera y de centavos mediante el uso de las operaciones de división y de
  residuo, respectivamente. Inserte un punto.]
 */

/* Figura 4.6: fig04_06_2.c
  Cálculo del interés compuesto */
#include <math.h>
#include <stdio.h>

/* La función main comienza la ejecución del programa */
int main() {
  double monto;            /* monto del depósito */
  double principal = 1000; /* monto principal */
  double tasa = 5;         /* interés compuesto anual */
  short anio = 1;          /* contador de años */

  /* muestra el encabezado de salida de la tabla */
  printf("%4s%21s\n", "Anio", "Monto del deposito");

  /* calcula el monto del depósito para cada uno de los diez años */
  for (; anio <= 10; ++anio) {
    /* calcula el nuevo monto para el año especificado */
    monto = principal * pow(1 + (float)(tasa) / 100, anio);

    /* muestra una línea de la tabla */
    printf("%4d%21.2f\n", anio, monto);
  }
}
