/*
  Escriba una función que tome un valor entero y devuelva el número con los
  dígitos invertidos. Por ejemplo, dado el número 7631, la función debe regresar
  1367.
 */

int invertirEntero(int entero) {
  int numeroReverso = 0;

  while (entero > 0) {
    unsigned short digito = entero % 10;
    numeroReverso = numeroReverso * 10 + digito;
    entero /= 10;
  }

  return numeroReverso;
}
