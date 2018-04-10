#include <stdio.h>
#include <math.h>

int main()
{
	//se declaran las variables 
	int numero, Cubo, Cuadrado;
	//se piden los datos
	printf ("Ingrese un numero entero positivo: \n");
	scanf ("%d", &numero);
	//se realizan las operacionces correspondientes
	Cubo = pow (numero,3);
	Cuadrado = pow (numero,2);
	//se imprimen en pantalla los resultados
	printf ("El cuadrado de su numero es: %d \n", Cuadrado);
	printf ("El cubo de su numero es: %d", Cubo);
	return 0;
}
