/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 01/12/19 08:27
	Description: 5.30. Escriba una función qualityPoints que introduzca el 
	promedio de un alumno y regrese 4 si el promedio es entre 90-100, 3 si el 
	promedio es entre 80-89, 2 si el promedio es entre 70-79, 1 si el promedio 
	está entre 60-69, 0 si el promedio es menor de 60.
*/

#include<stdio.h>
#include<stdlib.h>

short qualityPoints(float);

main()
{
	float promedio;
	
	printf("Entre el promedio del estudiante: ");
	scanf("%f", &promedio);
	printf("El valor retornado es: %hd\n", qualityPoints(promedio));
	
	system("pause");
	return 0;
}

short qualityPoints(float promedio)
{
	if(promedio >= 90 && promedio <= 100)
		return 4;
	else if(promedio >= 80 && promedio <= 89)
		return 3;
	else if(promedio >= 70 && promedio <= 79)
		return 2;
	else if(promedio >= 60 && promedio <= 69)
		return 1;
	else
		return 0;
}
