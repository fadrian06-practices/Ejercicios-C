/*
  Una empresa de ventas por correo vende cinco productos diferentes cuyos
  precios de lista mostramos en la siguiente tabla:

  Número de producto  Precio de lista
  1                   $2.98
  2                   $4.50
  3                   $9.98
  4                   $4.49
  5                   $6.87

  Escriba un programa que lea una serie de pares de números de la
  siguiente manera:

  a) Número de producto.
  b) Cantidad vendida durante el día.

  Su programa debe utilizar una instrucción switch para ayudar a determinar el
  precio de lista de cada producto. Su programa debe calcular y desplegar el
  valor total de venta de todos los productos vendidos la semana pasada.
 */

/* Calcula total de ventas */
#include <stdio.h>

int main() {
  short numeroProducto, cantidadVendidaAlDia, dia = 1;
  float totalVentas = 0;

  for (; dia <= 7;) {
    printf("Numero del producto: ");
    scanf("%hd", &numeroProducto);

    if (numeroProducto < 1 || numeroProducto > 5) {
      printf("Numero de producto invalido\n\n");
      continue;
    }

    printf("Cantidad vendida en el dia: ");
    scanf("%hd", &cantidadVendidaAlDia);

    if (!cantidadVendidaAlDia) {
      printf("Cantidad no puede ser cero (0)");
      continue;
    }

    switch (numeroProducto) {
    case 1:
      totalVentas += 2.98 * cantidadVendidaAlDia;
      break;
    case 2:
      totalVentas += 4.5 * cantidadVendidaAlDia;
      break;
    case 3:
      totalVentas += 9.98 * cantidadVendidaAlDia;
      break;
    case 4:
      totalVentas += 4.49 * cantidadVendidaAlDia;
      break;
    case 5:
      totalVentas += 6.87 * cantidadVendidaAlDia;
      break;
    }

    ++dia;
    printf("\n");
  }

  printf("El total de ventas realizadas en la semana es: $%.2f", totalVentas);
  printf("\n\n");
}
