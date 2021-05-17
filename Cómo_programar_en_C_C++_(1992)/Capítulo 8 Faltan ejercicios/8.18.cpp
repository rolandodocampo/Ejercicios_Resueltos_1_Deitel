/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Marcia
	Date: 01/05/20 09:05
	Description: 8.18. Escriba un programa que introduzca varias l�neas de texto
	y un car�cter de b�squeda, y utilice la funci�n strchr para determinar todas
	las ocurrencias del car�cter, en las l�neas de texto.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void ocurrencias(const char *const, const char *const);

main()
{
	char textos[5][100], busqueda, i;
	
	printf("Entre un caracter de busqueda: ");
	busqueda = getchar();
	getchar();
	
	for(i = 0; i <= 4; i++)
	{
		printf("Entre la linea de texto #%d: ", i + 1);
		gets(textos[i]);
		printf("\n**********************\nTexto #%d:\n", i + 1);
		ocurrencias(textos[i], &busqueda);
		printf("*******************\n");
	}
	
    system("PAUSE");
    return 0;
}

void ocurrencias(const char *const textos, const char *const busqueda)
{
	char *memoria;
	
	memoria = strchr(textos, *busqueda);
	
	while(memoria != NULL)
	{
		puts(memoria);
		++memoria;
		memoria = strchr(memoria, *busqueda);
	}
}
