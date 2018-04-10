#include <stdio.h>

int main()
{
//Se declaran las variables
	int per, ar, ba, al;
	printf ("PROGRAMA PARA CALCULAR AREA Y PERIMETRO DE CUADRADOS Y RECTANGULOS\n");
	//se piden y se escanean los valores que tendra la altura y la base del rectangulo
	printf ("Ingrese el valor de la altura\n");
	scanf ("%d", &al);
	printf ("Ingrese el valor de la base\n");
	scanf ("%d",&ba);
	// El perimetro es la suma de todos los lados 
	per = (ba + al) * 2;
	//El area es el resultado de la multiplicacion de la base por la altura
	ar = ba * al;
	//se imprimen los resultados
	printf ("El area de su rectangulo es: %d\n", ar);
	printf ("El perimetro de su rectangulo es: %d", per);
	return 0;
}
