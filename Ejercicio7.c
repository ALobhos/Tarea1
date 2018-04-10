#include <stdio.h>

int main ()
{
	//declaracion de variables
	int dias, segundos;
	//peticion de datos
	printf ("PROGRAMA PARA CALCULAR SEGUNDOS DE 1 O MAS DIAS\n");
	printf ("¿Cuantos dias desea calcular?\n");
	scanf ("%d", &dias);
	//realizacion del calculo
	//Cada dia tiene 24 horas, cada hora tiene 60 minutos y cada minuto tiene 60 segundos, 60 * 60 = 3600
	segundos = dias * 24 * 3600;
	// impresion de datos
	printf ("La cantidad de segundos que hay en %d dia(s) ", dias);
	printf ("es de %d segundos", segundos);
	return 0;
}
