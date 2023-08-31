/*
  (Problema de asociación de else.) Determine la salida para cada una de las
  siguientes variables, cuando x es 9 y y es 11, y cuando x es 11 y y es 9.
  Observe que el compilador ignora el sangrado de un programa en C. Además, el
  compilador siempre asocia un else con su if previo, a menos que se le indique
  lo contrario mediante la colocación de llaves  {} . Debido, en primera
  instancia, a que el programador puede no estar seguro cuál es el if que
  coincide con el else, a este problema se le conoce como el problema de
  “asociación de else”. Eliminamos el sangrado del siguiente código para hacer
  el problema más interesante. [Pista: Aplique las convenciones de sangrado que
  aprendió.]

  a) if ( x < 10 )
    if ( y > 10 )
    printf( “*****\n” );
    else
    printf( “#####\n” );
    printf( “$$$$$\n” );

  Respuesta:
    *****
    $$$$$

  b) if ( x < 10 ) {
    if ( y > 10 )
    printf( “*****\n” );
    }
    else {
    printf( “#####\n” );
    printf( “$$$$$\n” );
    }

  Respuesta:
    $$$$$
*/

/*#include <stdio.h>
#include <conio.h>
int main() {
  int x = 9;
  int y = 11;

  if(x < 10)
    if(y > 10)
      printf("*****\n");
    else
      printf("#####\n");
  printf("$$$$$\n");

  getch();
  return 0;
}*/

/*#include <stdio.h>
int main() {
  int x = 11;
  int y = 9;

  if (x < 10)
    if (y > 10)
      printf("*****\n");
    else
      printf("#####\n");
  printf("$$$$$\n");

  return 0;
}*/
