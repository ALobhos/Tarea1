#include <stdio.h>

int main()
{
	// declaracion de variables
	int sueldobase, ventas;
	float sueldofinal, comision;
	// peticion de datos
	printf ("PROGRAMA PARA CALCULAR SUELDO FINAL\n");
	printf ("¿Cuanto es su sueldo base?\n");
	scanf ("%d", &sueldobase);
	printf ("¿Cual ha sido la ganancia por sus ventas?\n");
	scanf ("%d", &ventas);
	//calculo de comision asumiendo que es 7% por cada semana y un mes tiene 4 semanas lo que resulta en un 28%
	comision = ventas * 0.28;
	sueldofinal = sueldobase + comision;
	//impresion de sueldo final
	printf ("Su sueldo es de %f pesos\n", sueldofinal);
	printf ("Su comision es de %f pesos", comision);
	return 0;
}
