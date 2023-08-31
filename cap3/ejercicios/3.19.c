/*
  Una gran empresa de productos químicos le paga a sus vendedores mediante
  un esquema de comisiones. Los ven- dedores reciben $200 semanales más el 9%
  de sus ventas totales durante la semana. Por ejemplo, un vendedor que vende
  $5000 de productos químicos durante la semana recibe $200 más el 9% de $5000,
  o un total de $650. Desa- rrolle un programa que introduzca las ventas
  totales de cada vendedor durante la última semana y que calcule y despliegue
  los ingresos de ese vendedor. Procese las cantidades de un vendedor a la vez.

  Objetivo
  Calcula los resultados de un vendedor.

  Mejoramiento 1
  Recolecta datos necesarios.
  Calcula los ingresos.
  Imprime los ingresos.

  Mejoramiento 2
  Mientras no se introduzca el valor centinela
    Lee las ventas totales de cada vendedor
    Calcula sus ingresos
    Muestra sus ingresos
*/

/* Calcula los resultados de un vendedor */
#include <stdio.h>

int main() {
  float ventasEnPesos; /* Las ventas totales de cada vendedor durante la última
                          semana */
  float salario;       /* Ingresos del vendedor */

  printf("Introduzca las ventas en pesos (-1 para terminar): ");
  scanf("%f", &ventasEnPesos);
  while (ventasEnPesos != -1) {
    salario = 200 + (ventasEnPesos * 0.09);

    printf("El salario es $%.2f\n", salario);
    printf("\n");

    printf("Introduzca las ventas en pesos (-1 para terminar): ");
    scanf("%f", &ventasEnPesos);
  }
}
