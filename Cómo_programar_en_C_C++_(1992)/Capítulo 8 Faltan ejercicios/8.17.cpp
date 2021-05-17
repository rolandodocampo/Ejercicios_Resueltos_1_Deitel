/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 01/05/20 08:52
	Description: 8.17. Escriba un programa basado en el ejercicio 8.16, que 
	introduzca varias líneas de texto y una cadena de búsqueda, y utilice la 
	función strstr para determinar todas las ocurrencias de la cadena, en las
	líneas de texto. Imprima el resultado.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void imprimir(const char *const, const char *const);

main()
{
	char texto[5][100], busqueda[100], i;
	
	puts("Entre una linea de busqueda:");
	gets(busqueda);
	
	for(i = 0; i <= 4; i++)
	{
		
		printf("Entre una linea de texto #%d: ", i + 1);
		gets(texto[i]);
		printf("Texto %d\n", i + 1);
		imprimir(texto[i], busqueda);
		printf("******************\n");
	}
	
    system("PAUSE");
    return 0;
}

void imprimir(const char *const texto, const char *const busqueda)
{
	char *searchPtr;
	size_t tam;
	
	searchPtr = strstr(texto, busqueda);
	searchPtr != NULL ? puts(searchPtr) : printf("");
	tam = strlen(busqueda);
	searchPtr = strstr(searchPtr + tam, busqueda);
	searchPtr != NULL ? puts(searchPtr) : printf("");
}
