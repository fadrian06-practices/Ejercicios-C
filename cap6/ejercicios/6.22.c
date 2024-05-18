/*
  Utilice un arreglo con doble subíndice para resolver el siguiente problema.

  Una empresa tiene cuatro vendedores (1 a 4) los cuales venden cinco productos
  diferentes (1 a 5).

  Una vez al día, cada vendedor introduce un registro para cada tipo de producto
  vendido.

  Cada registro contiene lo siguiente:

  a) El número de vendedor.
  b) El número de producto.
  c) El monto total del producto vendido del día.

  Por lo tanto, cada vendedor pasa entre 0 y 5 registros al día.

  Suponga que están disponibles los registros con la información del último mes.

  Escriba un programa que lea toda esta información de las ventas del último mes
  y sume el total de ventas por vendedor y por producto.

  Todos los totales se deben almacenar en el arreglo con dos subíndices,
  ventas.

  Una vez procesada toda la información del último mes, despliegue los
  resultados en formato tabular en donde cada una de las columnas representa a
  un vendedor y cada una de las filas representa un producto en particular.

  Obtenga la suma de cada fila para el total de ventas de cada producto del
  último mes; obtenga la suma de cada columna para el total de ventas por
  vendedor del último mes.

  Su salida tabular debe incluir estos totales a la derecha para las filas y en
  el fondo para las columnas.
 */

#include <stdio.h>
#include <time.h>
#define VENDEDORES 4
#define PRODUCTOS 5

enum Booleano { FALSO, VERDADERO };
enum Mes {
  ENERO = 31,
  FEBRERO = 28,
  MARZO = 31,
  ABRIL = 30,
  MAYO = 31,
  JUNIO = 30,
  JULIO = 31,
  AGOSTO = 31,
  SEPTIEMBRE = 30,
  OCTUBRE = 31,
  NOVIEMBRE = 30,
  DICIEMBRE = 31
};

int obtenerAnio() {
  int anio;
  int anioActual = ((double)time(NULL) / 60 / 60 / 24 / 365) + 1970;

  do {
    printf("Que anio desea procesar (1900-%d): ", anioActual);
    scanf("%d", &anio);
  } while (anio < 1900 || anio > anioActual);

  return anio;
}

enum Booleano esBisiesto(int anio) {
  return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

enum Mes obtenerMes() {
  short mes;
  int anio = obtenerAnio();

  do {
    printf("Que mes desea procesar (1-12): ");
    scanf("%hd", &mes);
  } while (mes < 1 || mes > 12);

  switch (mes) {
  case 1:
    return ENERO;
  case 2:
    return esBisiesto(anio) ? 29 : 28;
  case 3:
    return MARZO;
  case 4:
    return ABRIL;
  case 5:
    return MAYO;
  case 6:
    return JUNIO;
  case 7:
    return JULIO;
  case 8:
    return AGOSTO;
  case 9:
    return SEPTIEMBRE;
  case 10:
    return OCTUBRE;
  case 11:
    return NOVIEMBRE;
  default:
    return DICIEMBRE;
  }
}

void obtenerVentas(double ventas[][PRODUCTOS], short dias) {
  short dia = 1;
  short vendedor;
  short producto;
  double monto;

  for (; dia <= dias; ++dia) {
    printf("Dia %hd/%d\n\n", dia, dias);

    for (vendedor = 0; vendedor < VENDEDORES; ++vendedor) {
      printf("  Vendedor (%hd/%d)\n", vendedor + 1, VENDEDORES);

      for (producto = 0; producto < PRODUCTOS; ++producto) {
        printf("\n    Producto (%hd/%d)\n", producto + 1, PRODUCTOS);
        printf("    Monto total vendido (-1 para terminar): ");
        scanf("%lf", &monto);

        if (monto == -1)
          break;

        ventas[vendedor][producto] += monto;
      }

      printf("\n");
    }

    printf("\n");
  }
}

void imprimirVentas(double ventas[VENDEDORES][PRODUCTOS]) {
  short vendedor = 0;
  short producto;

  printf("  Vendedores | ");

  for (; vendedor < VENDEDORES; ++vendedor) {
    printf("  %-8d | ", vendedor + 1);
  }

  printf("Total\n");
  printf(" ------------|------------|------------|------------|------------|---"
         "--------\n");

  for (producto = 0; producto < PRODUCTOS; ++producto) {
    printf("  Producto %d | ", producto + 1);

    double totalPorProducto = 0;

    for (vendedor = 0; vendedor < VENDEDORES; ++vendedor) {
      printf("%-10.2lf | ", ventas[vendedor][producto]);
      totalPorProducto += ventas[vendedor][producto];
    }

    printf("%-10.2lf\n", totalPorProducto);
  }

  printf(" ------------|------------|------------|------------|------------|---"
         "--------\n");
  printf("%12s | ", "Total");

  for (vendedor = 0; vendedor < VENDEDORES; ++vendedor) {
    double totalPorVendedor = 0;

    for (producto = 0; producto < PRODUCTOS; ++producto) {
      totalPorVendedor += ventas[vendedor][producto];
    }

    printf("%-10.2lf | ", totalPorVendedor);
  }

  printf("\n");
}

int main() {
  double ventas[VENDEDORES][PRODUCTOS] = {{0}};
  enum Mes mes = obtenerMes();

  printf("\n");
  obtenerVentas(ventas, mes);
  printf("\n");
  imprimirVentas(ventas);
  printf("\n");
}
