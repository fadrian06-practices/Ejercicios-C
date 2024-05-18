/*
  (Sistema de reservaciones para una aerolínea.) Una pequeña aerolínea acaba de
  comprar una computadora para su nuevo sistema automático de reservaciones.
  A usted se le ha pedido que programe el nuevo sistema.

  Usted debe escribir un programa que asigne los asientos, en cada vuelo, del
  único avión de la aerolínea (capacidad: 10 asientos). Su programa debe
  desplegar el siguiente menú de alternativas:

  - Por favor, digite 1 para “primera clase”
  - Por favor, digite 2 para “económico”
    - Si la persona digita 1, su programa debe asignar un asiento en la sección
    de primera clase (asientos 1 a 5).
    - Si la persona digita 2, su programa debe asignar un asiento en la sección
    económica (asientos 6 a 10).
  - Su programa debe imprimir un pase de abordar que indique el número de
  asiento de la persona y si está en la sección de primera clase o en la sección
  económica del avión.
  - Utilice un arreglo con un solo subíndice para representar la tabla de
  asientos del avión.
  - Inicialice en 0 todos los elementos del arreglo para indicar que
  todos los asientos están vacíos.
  - Mientras se asigna cada asiento, el valor de los elementos correspondientes
  del arreglo se establece en 1, para indicar que el asiento ya no está
  disponible.
  - Por supuesto, su programa nunca debe asignar un asiento que ya está
  asignado.
    - Cuando la sección de primera clase está llena, su programa debe preguntar
    a la persona si acepta que se le coloque en la sección económica (y
    viceversa). Si acepta, entonces haga la asignación apropiada del asiento. Si
    no acepta, entonces despliegue el mensaje “El siguiente vuelo parte en tres
    horas”.
 */

#include <stdio.h>
#define CAPACIDAD 10

enum Booleano { FALSO, VERDADERO };
enum Clase { PRIMERA_CLASE = 1, ECONOMICO = 2 };
enum Respuesta { SI = 's', NO = 'n' };

enum Clase solicitarClase() {
  enum Clase asiento;

  do {
    printf("Por favor, digite %d para \"Primera clase\"\n", PRIMERA_CLASE);
    printf("Por favor, digite %d para \"Economico\"\n", ECONOMICO);
    scanf("%d", &asiento);
    printf("\n");
  } while (asiento != PRIMERA_CLASE && asiento != ECONOMICO);

  return asiento;
}

/* Devuelve el asiento reservado o `FALSO` si no hay asiento disponible */
short reservarAsiento(enum Booleano asientos[], enum Clase clase) {
  short contador = clase == PRIMERA_CLASE ? 1 : 6;
  short capacidad = clase == PRIMERA_CLASE ? CAPACIDAD / 2 : CAPACIDAD;

  for (; contador <= capacidad; ++contador)
    if (!asientos[contador]) {
      asientos[contador] = !asientos[contador];

      return contador;
    }

  return FALSO;
}

void imprimirPaseDeAbordar(short asiento, enum Clase clase) {
  printf("--------------------\n");
  printf("Asiento: %hd\n", asiento);
  printf("Clase: %s\n\n",
         clase == PRIMERA_CLASE ? "Primera clase" : "Economico");
  printf("Disfruta tu vuelo!\n");
  printf("--------------------\n\n");
}

enum Respuesta solicitarCambiarClase(enum Clase clase) {
  char respuesta = NO;

  do {
    printf("Lo siento, la clase %s esta llena.\n",
           clase == PRIMERA_CLASE ? "Primera clase" : "Economico");
    printf("Te gustaria considerar la clase %s?\n",
           clase == PRIMERA_CLASE ? "Economico" : "Primera clase");
    printf("(s/n): ");
    scanf(" %c", &respuesta);
  } while (respuesta != SI && respuesta != NO);

  return respuesta;
}

void imprimirSalidaDeVuelo(short horas) {
  printf("\n------------------------------\n");
  printf("El siguiente vuelo parte en %hd horas", horas);
  printf("\n------------------------------\n");
}

int main() {
  enum Booleano asientos[CAPACIDAD + 1] = {FALSO};
  short contador = 1;
  enum Respuesta cambiarClase = NO;

  for (; contador <= CAPACIDAD; ++contador) {
    enum Clase clase = solicitarClase();
    short asientoReservado = reservarAsiento(asientos, clase);

    if (asientoReservado) {
      imprimirPaseDeAbordar(asientoReservado, clase);
      continue;
    }

    cambiarClase = solicitarCambiarClase(clase);
    printf("\n");

    if (cambiarClase == SI) {
      clase = clase == PRIMERA_CLASE ? ECONOMICO : PRIMERA_CLASE;
      asientoReservado = reservarAsiento(asientos, clase);

      if (asientoReservado) {
        imprimirPaseDeAbordar(asientoReservado, clase);
        continue;
      }

      break;
    } else
      break;
  }

  imprimirSalidaDeVuelo(3);
  printf("\n");
}
