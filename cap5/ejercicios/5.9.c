/*
  Un estacionamiento cobra la cuota mínima de $2.00 por las tres primeras horas
  de estacionamiento. El estaciona- miento cobra $0.50 adicional por hora o
  fracción después del tiempo mínimo. El cobro máximo para cualquier periodo
  de 24 horas es de $10.00. Suponga que ningún automóvil se estaciona por más de
  24 horas, al mismo tiempo que otro.

  Escriba un programa que calcule e imprima los cobros por cada uno de los tres
  clientes que se estacionaron ayer en el estacionamiento. Debe introducir el
  número de horas que cada cliente pasó estacionado ahí. Su programa debe
  imprimir los resultados en una forma tabular, y debe calcular e imprimir los
  recibos de las percepciones de ayer. El programa debe utilizar la función
  calculaImporte para determinar el importe de cada cliente. Sus salidas deben
  ser semejantes al formato siguiente:

  Automóvil Horas Importe
  1         1.5   2.00
  2         4.0   2.50
  3         24.0  10.00
  Total     29.5  14.50
 */

/* Total de importes en un estacionamiento */
#include <stdio.h>
#include <string.h>

float calculaImporte(float horas) {
  float importe = 0;

  if (horas < 4)
    importe = 2; // Importe de las primeras 3 horas
  else if (horas < 24) {
    importe = 2;            // Importe de las primeras 3 horas
    horas = (int)horas - 3; // Extraemos las horas que tienen coste adicional
    importe += horas * .5;  // Coste adicional
  } else if (horas == 24)
    importe = 10;

  return importe;
}

int main() {
  // short numeroCliente; /* Cantidad de clientes que se estacionaron */
  float numeroHoras1; /* Horas que pasó estacionado */
  float numeroHoras2; /* Horas que pasó estacionado */
  float numeroHoras3; /* Horas que pasó estacionado */
  float importe1;     /* Recibo de la percepción */
  float importe2;     /* Recibo de la percepción */
  float importe3;     /* Recibo de la percepción */
  float totalHoras = 0;
  float totalImporte = 0;

  printf("(1) Introduce el numero de horas: ");
  scanf("%f", &numeroHoras1);
  printf("(2) Introduce el numero de horas: ");
  scanf("%f", &numeroHoras2);
  printf("(3) Introduce el numero de horas: ");
  scanf("%f", &numeroHoras3);

  importe1 = calculaImporte(numeroHoras1);
  importe2 = calculaImporte(numeroHoras2);
  importe3 = calculaImporte(numeroHoras3);

  totalHoras = numeroHoras1 + numeroHoras2 + numeroHoras3;
  totalImporte = importe1 + importe2 + importe3;

  printf("\nAutomovil\tHoras\tImporte\n");
  printf("1\t\t%.1f\t%.2f\n", numeroHoras1, importe1);
  printf("2\t\t%.1f\t%.2f\n", numeroHoras2, importe2);
  printf("3\t\t%.1f\t%.2f\n", numeroHoras3, importe3);
  printf("Total\t\t%.1f\t%.1f\n\n", totalHoras, totalImporte);

  return 0;
}
