#include <stdio.h>

int main()
{
	//Se declaran las variables
	float nota1, nota2, nota3, promedio;
	//se declara una constante, la matricula
	int Nmatricula = 2018430008;
	//se piden las 3 notas y ademas se pide que se utilice un decimal
	printf ("Ingrese sus notas utilizando un decimal \n");
	scanf ("%f", &nota1);
	scanf ("%f", &nota2);
	scanf ("%f", &nota3);
	//se calcula la media aritmetica, que es la suma de todos los terminos dividido en la cantidad total de terminos
	promedio = (nota1 + nota2 + nota3) / 3;
	printf ("Numero de matricula: %d \n", Nmatricula);
	printf ("Su promedio de notas es: %f", promedio);
	return 0;
}
