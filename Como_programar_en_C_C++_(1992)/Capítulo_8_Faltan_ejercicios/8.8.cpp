/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 28/04/20 11:01
	Description: 8.8. Escriba un programa que introduzca 4 cadenas, que 
	representen valores en punto flotante, convierta las cadenas a valores 
	double, sume los valores e imprima el total de los 4 valores.
*/
#include<stdio.h>
#include<stdlib.h>

void lectura(char *const);
void convertir(const char *const, double *const);

main()
{
	char cadenas[4][20];
	short i;
	double valores[5] = {0};
	
	puts("Introduzca 4 cadenas de numeros de punto flotante:");
	for(i = 0; i <= 3; i++)
		lectura(cadenas[i]);
		
	for(i = 0; i <= 3; i++)
	{
		convertir(cadenas[i], &valores[i]);
		valores[4] += valores[i];	
	}
	
	printf("Los valores son: %.2f, %.2f, %.2f, %.2f\n"
		   "El total es: %.2f\n", valores[0], valores[1], valores[2], valores[3],
		   valores[4]);
	
    system("PAUSE");
    return 0;
}

void lectura(char *const cadenas)
{
	gets(cadenas);
}

void convertir(const char *const cadenas, double *const valores)
{
	*valores = atof(cadenas);
}
