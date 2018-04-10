#include <stdio.h>

int main()
{
		//Para iniciar una variable del tipo char, se usa el comando "char" + nombre de la variable + [largo maximo de la cadena de caracteres]
		char nombre[99];
		// se declaran las variables
		float pesolibra, longpies, pesokilos, longmetros;
		// se pide el nombre, el peso en libras y la longitud en libras
		printf ("INGRESE NOMBRE DE SU DINOSAURIO\n");
		scanf ("%s", nombre);
		printf ("INGRESE SU PESO EN LIBRAS\n");
		scanf ("%f", &pesolibra);
		printf ("INGRESE SU LONGITUD EN PIES\n");
		scanf ("%f", &longpies);
		// se realizan las transformaciones de libra a kilo y pies a metros
		pesokilos = pesolibra * 0.45;
		longmetros = longpies * 0.3048;
		//se imprime cada resultado y variable
		printf ("NOMBRE DEL DINOSAURIO: %s\n", nombre);
		printf ("PESO EN KILOS: %f kg\n", pesokilos);
		printf ("LONGITUD EN METROS: %f m\n", longmetros);
		return 0;
}
