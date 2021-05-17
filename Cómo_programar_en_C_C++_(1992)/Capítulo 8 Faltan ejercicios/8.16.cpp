/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Marcia
	Date: 01/05/20 00:12
	Description: 8.16. Escriba un programa que introduzca desde el teclado una 
	l�nea de texto y una cadena de b�squeda. Utilizando la funci�n strstr 
	localice en la l�nea de texto la primera ocurrencia de la cadena de b�squeda,
	y asigne la posici�n a la variable searchPtr del tipo char *. Si encuentra
	la cadena de b�squeda, imprima el resto de la l�nea de texto, empezando con
	la cadena de texto. A continuaci�n utilice otra vez strstr, para localizar 
	en la l�nea de texto la siguiente ocurrencia de la cadena de b�squeda. Si
	encuentra una segunda ocurrencia, imprima el resto de la l�nea de texto, 
	empezando con la segunda ocurrencia. Sugerencia: la segunda llamada a strstr
	deber� contener searchPtr + 1 como primer argumento.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	char texto[100], busqueda[100], *searchPtr;
	size_t tam;
	
	puts("Entre una linea de texto:");
	gets(texto);
	puts("Entre una linea de busqueda:");
	gets(busqueda);
	
	searchPtr = strstr(texto, busqueda);
	searchPtr != NULL ? puts(searchPtr) : printf("\n");
	tam = strlen(busqueda);
	searchPtr = strstr(searchPtr + tam, busqueda);
	searchPtr != NULL ? puts(searchPtr) : printf("\n");
	
    system("PAUSE");
    return 0;
}
