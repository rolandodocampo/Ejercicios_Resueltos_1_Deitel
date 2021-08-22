/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 01/05/20 09:05
	Description: 8.18. Escriba un programa que introduzca varias líneas de texto
	y un carácter de búsqueda, y utilice la función strchr para determinar todas
	las ocurrencias del carácter, en las líneas de texto.
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
