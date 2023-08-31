/*
  (Otro problema de asociación de else.) Modifique el siguiente código para
  producir la salida que aparece a continuación. Utilice las técnicas de
  sangrado apropiadas. No debe hacer cambio alguno que no sea el de insertar
  llaves. El compilador ignora el sangrado de un programa. Eliminamos el
  sangrado del siguiente código para hacer más in- teresante el problema. [Nota:
  Es posible que no sea necesario hacer modificaciones.]

    if ( y == 8 )
    if ( x == 5 )
    printf( “@@@@@\n” );
    else
    printf( “#####\n” );
    printf( “$$$$$\n” );
    printf( “&&&&&\n” );
  a) Si suponemos que x = 5 y y = 8, se produce la siguiente salida.
    @@@@@
    $$$$$
    &&&&&

    Respuesta:
      if ( y == 8 )
      if ( x == 5 )
      printf( “@@@@@\n” );
      else
      printf( “#####\n” );
      printf( “$$$$$\n” );
      printf( “&&&&&\n” );
  b) Si suponemos que x = 5 y y = 8, se produce la siguiente salida.
    @@@@@

    Respuesta:
      if ( y == 8 )
      if ( x == 5 )
      printf( “@@@@@\n” );
      else {
      printf( “#####\n” );
      printf( “$$$$$\n” );
      printf( “&&&&&\n” );
      }
  c) Si suponemos que x = 5 y y = 8, se produce la siguiente salida.
    @@@@@
    &&&&&

    Respuesta:
      if ( y == 8 )
      if ( x == 5 )
      printf( “@@@@@\n” );
      else {
      printf( “#####\n” );
      printf( “$$$$$\n” );
      }
      printf( “&&&&&\n” );
  d) Si suponemos que x = 5 y y = 7, se produce la siguiente salida. [Nota: Las
  últimas tres instrucciones printf son parte de una instrucción compuesta.]
    #####
    $$$$$
    &&&&&

    Respuesta:
      if ( y == 8 ) {
      if ( x == 5 )
      printf( “@@@@@\n” );
      } else {
      printf( “#####\n” );
      printf( “$$$$$\n” );
      printf( “&&&&&\n” );
      }
*/

/*#include <stdio.h>

int main() {
  int x = 5;
  int y = 8;

  if ( y == 8 )
    if ( x == 5 )
      printf( "@@@@@\n" );
    else
      printf( "#####\n" );
  printf( "$$$$$\n" );
  printf( "&&&&&\n" );
}*/

/*#include <stdio.h>

int main() {
  int x = 5;
  int y = 8;

  if ( y == 8 )
    if ( x == 5 )
      printf( "@@@@@\n" );
    else {
      printf( "#####\n" );
      printf( "$$$$$\n" );
      printf( "&&&&&\n" );
    }
}*/

/*#include <stdio.h>

int main() {
  int x = 5;
  int y = 8;

  if ( y == 8 )
    if ( x == 5 )
      printf( "@@@@@\n" );
    else {
      printf( "#####\n" );
      printf( "$$$$$\n" );
    }
  printf( "&&&&&\n" );
}*/

#include <stdio.h>

int main() {
  int x = 5;
  int y = 7;

  if (y == 8) {
    if (x == 5)
      printf("@@@@@\n");
  } else {
    printf("#####\n");
    printf("$$$$$\n");
    printf("&&&&&\n");
  }
}
