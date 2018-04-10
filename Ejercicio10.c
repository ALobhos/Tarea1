#include <stdio.h>

int main()
{
	// declaracion de cariables
	int precioboleto, preciokm, km;
	//peticion de datos
	printf ("BIENVENIDO A BUSES CAMINO AL CIELO\n");
	printf ("¿Cuantos kilometros va a recorrer?\n");
	scanf ("%d", &km);
	printf ("¿Cual es el precio del km?\n");
	scanf ("%d", &preciokm);
	//calculo de resultados segun precio y kilometros
	precioboleto = km * preciokm;
	// se imprimen los resultados
	printf ("Su boleto tiene un precio de: %d pesos", precioboleto);
	return 0;
}
