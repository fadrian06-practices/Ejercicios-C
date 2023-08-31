/* Figura 5.12: fig05_12.c
  Ejemplo de alcance */

#include <stdio.h>

void usoLocal(void);       /* prototipo de función */
void usoStaticLocal(void); /* prototipo de función */
void usoGlobal(void);      /* prototipo de función */

int x = 1; /* variable global */

/* la función main comienza la ejecución del programa */
int main() {
  int x = 5; /* variable local en main */

  printf("la x local en el alcance de main es %d\n", x);
  {            /* comienza el nuevo alcance */
    int x = 7; /* variable local con nuevo alcance */
    printf("la x local en el alcance interno de main es %d\n", x);
  } /* fin de nuevo alcance */

  printf("la x local en el alcance de main es %d\n", x);

  usoLocal();       /* usoLocal contiene una x local */
  usoStaticLocal(); /* usoStaticLocal contiene una x local estática */
  usoGlobal();      /* usoGlobal utiliza una x global */
  usoLocal();       /* usoLocal reinicializa la x local automática */
  usoStaticLocal(); /* static local x retiene su valor previo */
  usoGlobal();      /* x global también retiene su valor */

  printf("\nx local en main es %d\n", x);
  return 0; /* indica terminación exitosa */
} /* fin de main */

/* usoLocal reinicializa a la variable local x durante cada llamada */
void usoLocal(void) {
  int x = 25; /* se inicializa cada vez que se llama a usoLocal */
  printf("\nla x en usoLocal es %d despues de entrar a usoLocal\n", x++);
  printf("la x local en usoLocal es %d antes de salir de usoLocal\n", x);
} /* fin de la función usoLocal */

/* usoStaticLocal inicializa la variable static local x sólo la primera vez
que se invoca a la función; el valor de x se guarda entre las llamadas a esta
función */
void usoStaticLocal(void) {
  /* se inicializa sólo la primera vez que se invoca a usoStaticLocal */
  static int x = 50;

  printf("\nla x local estatica es %d al entrar a usoStaticLocal\n", x++);
  printf("la x local estatica es %d al salir de usoStaticLocal\n", x);
} /* fin de la función usoStaticLocal */

/* la función usoGlobal modifica la variable global x durante cada llamada */
void usoGlobal(void) {
  printf("\nla x global es %d al entrar a usoGlobal\n", x);
  x *= 10;
  printf("la x global es %d al salir de usoGlobal\n", x);
} /* fin de la función usoGlobal */
