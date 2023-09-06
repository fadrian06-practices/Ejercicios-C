/*
  (Cómo encontrar el valor mínimo de un arreglo.) Escriba una función recursiva
  minimoRecursivo, que tome un arreglo entero y el tamaño del arreglo como
  argumentos y que devuelva el elemento más pequeño del arreglo. La función debe
  detener el procesamiento y regresar, cuando reciba un arreglo de un elemento.
 */

int minimoRecursivo(int arreglo[], int longitud) {
  if (longitud == 0)
    return arreglo[longitud];

  int anterior = minimoRecursivo(arreglo, longitud - 1);
  int actual = arreglo[longitud - 1];
  return anterior < actual ? anterior : actual;
}
