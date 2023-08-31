/* Calcula la suma de los enteros del 1 al 10 */
#include <stdio.h>

int main() {
	int x = 1, suma = 0;

	while (x <= 10)
		suma += x++;

	printf("La suma es: %d\n\n", suma);
}
