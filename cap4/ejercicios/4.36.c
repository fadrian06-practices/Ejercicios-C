/*
  Escriba un programa que introduzca un año en el rango de 1994 a 1999, y
  utilice un ciclo for para producir un calendario condensado y claro. Cuidado
  con los cambios de año.
 */

#include <stdio.h>
int main() {
  int anio = 1;
  short mes, bisiesto, dia, dias;

  while (anio) {
    printf("Introduzca un anio entre 1994 y 1999: ");
    scanf("%d", &anio);

    if (anio >= 1994 && anio <= 1999)
      break;

    printf("El anio no esta entre 1994 y 1999\n\n");
  }

  bisiesto = (anio % 4 == 0) && ((anio % 100 != 0) || (anio % 400 == 0));

  for (mes = 1; mes <= 12; ++mes) {
    switch (mes) {
    case 1:
      printf("Enero\n-----\n");
      break;
    case 2:
      printf("Febrero\n-------\n");
      break;
    case 3:
      printf("Marzo\n-----\n");
      break;
    case 4:
      printf("Abril\n-----\n");
      break;
    case 5:
      printf("Mayo\n----\n");
      break;
    case 6:
      printf("Junio\n-----\n");
      break;
    case 7:
      printf("Julio\n-----\n");
      break;
    case 8:
      printf("Agosto\n------\n");
      break;
    case 9:
      printf("Septiembre\n----------\n");
      break;
    case 10:
      printf("Octubre\n-------\n");
      break;
    case 11:
      printf("Noviembre\n---------\n");
      break;
    case 12:
      printf("Diciembre\n---------\n");
    }

    switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      for (dia = 1; dia <= 31; ++dia)
        if (dia % 7 == 0)
          printf("%hd\n", dia);
        else
          printf("%hd\t", dia);
      break;
    case 2:
      dias = bisiesto ? 29 : 28;
      for (dia = 1; dia <= dias; ++dia)
        if (dia % 7 == 0)
          printf("%hd\n", dia);
        else
          printf("%hd\t", dia);
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      for (dia = 1; dia <= 30; ++dia)
        if (dia % 7 == 0)
          printf("%hd\n", dia);
        else
          printf("%hd\t", dia);
    }

    printf("\n\n");
  }
}
