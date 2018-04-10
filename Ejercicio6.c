#include <stdio.h>

int main()
{
	//declaracion de variables
	float galones, litros, total;
	//peticion de datos
	printf ("¿CUANTOS GALONES DESEA COMPRAR?\n");
	scanf ("%f", &galones);
	//calculo de precio segun los datos
	litros = (galones * 3.785);
	//No se declara como variable el precio del litro, porque en este caso se trata de una constante, asi que se coloca directamente en el codigo
	total = litros * 820;
	// se imprimen los resultados
	printf ("El precio a pagar es: %f pesos", total);
	return 0;
}

	
