/*
  Desarrolle un programa que determine el pago bruto de cada uno de los
  empleados. Esta empresa paga “horas completas” por las primeras 40 horas
  trabajadas por cada empleado y paga “hora y media” por todas las horas extras
  trabajadas después de las 40. Usted tiene una lista de los empleados de la
  empresa, el número de horas que trabajó cada empleado la semana pasada y el
  pago por hora de cada empleado. Su programa deberá introducir esta información
  para cada empleado, y deberá determinar y desplegar el pago bruto por
  empleado.

  Objetivo
  Determinar el pago bruto de los empleados

  Mejoramiento 1
  Recolectar los datos necesarios.
  Calcular el pago bruto.
  Imprimir el pago bruto

  Mejoramiento 2
  Mientras no se introduzca el valor centinela (-1)
    Leer el número de horas que trabajó cada empleado la semana pasada
    Leer el pago por hora de cada empleado.
    Calcular el pago bruto de cada empleado.
    Imprimir el pago bruto de cada empleado.
*/

/* Calcula el pago bruto de empleados */
#include <stdio.h>

int main() {
  int horasLaboradas; /* El número de horas que trabajó cada empleado la semana
                         pasada */
  float pagoPorHora;  /* El pago por hora de cada empleado */
  float pagoBruto;

  printf("Introduzca el No. de horas laboradas (-1 para terminar): ");
  scanf("%d", &horasLaboradas);

  while (horasLaboradas != -1) {
    printf("Introduzca el pago por hora del empleado: ");
    scanf("%f", &pagoPorHora);

    pagoBruto =
        (horasLaboradas <= 40)
            ? horasLaboradas * pagoPorHora
            : 40 * pagoPorHora + ((horasLaboradas - 40) * (pagoPorHora * 1.5));

    printf("El salario es: $%.2f\n\n", pagoBruto);

    printf("Introduzca el No. de horas laboradas (-1 para terminar): ");
    scanf("%d", &horasLaboradas);
  }

  printf("\n");
}
