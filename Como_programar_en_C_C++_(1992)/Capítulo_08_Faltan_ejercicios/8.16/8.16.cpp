/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 01/05/20 00:12
	Description: 8.16. Escriba un programa que introduzca desde el teclado una 
	línea de texto y una cadena de búsqueda. Utilizando la función strstr 
	localice en la línea de texto la primera ocurrencia de la cadena de búsqueda,
	y asigne la posición a la variable searchPtr del tipo char *. Si encuentra
	la cadena de búsqueda, imprima el resto de la línea de texto, empezando con
	la cadena de texto. A continuación utilice otra vez strstr, para localizar 
	en la línea de texto la siguiente ocurrencia de la cadena de búsqueda. Si
	encuentra una segunda ocurrencia, imprima el resto de la línea de texto, 
	empezando con la segunda ocurrencia. Sugerencia: la segunda llamada a strstr
	deberá contener searchPtr + 1 como primer argumento.
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
