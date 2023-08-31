/* Calcula diámetro de un círculo */
#include <stdio.h>

int main() {
  int radio, diametro;

  printf("Introduce el radio del circulo: ");
  scanf("%d", &radio);

  diametro = radio * 2;
  printf("El diametro es %d\n", radio * 2);
  printf("La circunferencia es aproximada a %f\n", diametro * 3.14159);
  printf("El area es %f\n", 3.14159 * (radio * radio));
}
