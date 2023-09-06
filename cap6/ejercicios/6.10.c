/*
  Utilice un arreglo con un solo subíndice para resolver el siguiente problema.
  Una empresa paga a su personal de ventas con base en una comisión. El personal
  de ventas recibe $200 por semana, más 9 por ciento de sus ventas totales
  semanales. Por ejemplo, un vendedor que suma $3000 en ventas semanales recibe
  $200 más el 9 por ciento de $3000, o un total de $470. Escriba un programa en
  C (que utilice un arreglo de contadores) que determine cuántos de los
  vendedores reciben salarios en cada uno de los siguientes rangos (suponga que
  el salario de cada vendedor se trunca para obtener un monto entero):

  a) de $200 a $299
  b) de $300 a $399
  c) de $400 a $499
  d) de $500 a $599
  e) de $600 a $699
  f) de $700 a $799
  g) de $800 a $899
  h) de $900 a $999
  i) de $1000 o más
 */

#include <stdio.h>
#define SALARIOS 9

enum Booleano { FALSO, VERDADERO };
enum Salarios { _200, _300, _400, _500, _600, _700, _800, _900, _1000 };

int obtenerVentas(int centinela) {
  int ventas;

  printf("Introduce el total de ventas semanales (%d para terminar): ",
         centinela);
  scanf("%d", &ventas);
  return ventas;
}

int obtenerSalario(int ventas) { return 200 + (ventas * .09); }

enum Salarios obtenerIdDelSalario(int salario) {
  if (salario >= 200 && salario < 300)
    return _200;

  if (salario < 400)
    return _300;

  if (salario < 500)
    return _400;

  if (salario < 600)
    return _500;

  if (salario < 700)
    return _600;

  if (salario < 800)
    return _700;

  if (salario < 900)
    return _800;

  if (salario < 1000)
    return _900;

  return _1000;
}

void agregarSalario(int salarios[SALARIOS], int salario) {
  int id = obtenerIdDelSalario(salario);
  ++salarios[id];
}

void imprimirRangoDeSalario(enum Salarios id) {
  switch (id) {
  case _200:
    printf("de $200 a $299");
    break;
  case _300:
    printf("de $300 a $399");
    break;
  case _400:
    printf("de $400 a $499");
    break;
  case _500:
    printf("de $500 a $599");
    break;
  case _600:
    printf("de $600 a $699");
    break;
  case _700:
    printf("de $700 a $799");
    break;
  case _800:
    printf("de $800 a $899");
    break;
  case _900:
    printf("de $900 a $999");
    break;
  default:
    printf("de $1000 o mas");
  }
}

void imprimirSalarios(int salarios[SALARIOS]) {
  int id;

  printf("  Salarios\tTrabajadores\n\n");

  for (id = _200; id <= _1000; ++id) {
    printf("  ");
    imprimirRangoDeSalario(id);
    printf("\t> %d\n", salarios[id]);
  }
}

int main() {
  int salarios[SALARIOS] = {0};

  while (VERDADERO) {
    int ventas = obtenerVentas(-1);

    if (ventas == -1)
      break;

    int salario = obtenerSalario(ventas);
    agregarSalario(salarios, salario);
  }

  printf("\n");
  imprimirSalarios(salarios);
  printf("\n");
}
