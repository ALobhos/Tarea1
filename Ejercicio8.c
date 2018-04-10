#include <stdio.h>
#include <math.h>

int main ()
{
	//declaracion de variables
	float x, total;
	// se piden los datos
	printf ("CALCULADORA DE VALOR DE POLINOMIOS\n")
	printf ("¿Cual es el valor de X?\n");
	scanf ("%f", &x);
	// se calcula el valor del polinomio segun la formula correspondiente
	//"pow" hace referencia a que el primer termino en el parentesis esta elevado al segundo termino en el parentesis
	total = (pow (x,3)) + (2 * (pow (x,2))) + (3*x) + 5;
	// se imprime los resultados
	printf ("El resultado del la operacion es %f", total);
	return 0;
}
