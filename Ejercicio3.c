#include <stdio.h>
#include <math.h>

int main()
{
	//declaracion de variables
	int cateto1, cateto2, suma_catetos;
	float h;
	//se pide los valores de los catetos
	printf ("Ingrese los valores de los catetos:\n");
	scanf ("%d", &cateto1);
	scanf ("%d", &cateto2);
	// se realizan las operaciones de suma y multiplicacion
	suma_catetos = (cateto1 * cateto1) + (cateto2 * cateto2);
	// se calcula la raiz cuadrada de la suma
	h = sqrt(suma_catetos);
	// se imprime el resultado 
	printf ("La hipotenusa es: %f\n", h);
	return 0;
}
