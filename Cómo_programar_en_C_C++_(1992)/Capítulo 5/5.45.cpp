/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 08/12/19 16:22
	Description: 5.45. Escriba la función distance que calcule la distancia 
	entre dos puntos (x1, y1) y (x2, y2). Todos los valores de los números y 
	valores de regreso deberán de ser del tipo float.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float distance(float, float, float, float);

main()
{
	float x1, y1, x2, y2;
	
	printf("Entre las coordenadas del punto 1: ");
	scanf("%f%f", &x1, &y1);
	printf("Entre las coordenadas del punto 2: ");
	scanf("%f%f", &x2, &y2);
	
	printf("La distancia es: %.2f\n", distance(x1, y1, x2, y2));

   system("PAUSE");
   return 0;
}

float distance(float x1, float y1, float x2, float y2)
{
	float distancia;
	
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	return distancia;
}
