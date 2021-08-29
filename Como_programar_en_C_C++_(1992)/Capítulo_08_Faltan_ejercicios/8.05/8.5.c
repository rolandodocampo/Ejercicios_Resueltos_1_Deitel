/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 28/04/20 09:23
	Description: 8.5. Escriba un programa que introduzca un carácter del teclado, 
	y pruebe el carácter con cada una de las funciones en la biblioteca de 
	manejo de carácteres. El programa deberá imprimir el valor regresado por 
	cada una de las funciones.
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

main()
{
	char c;
	
	printf("Introduzca un caracter: ");
	scanf("%c", &c);
	
	printf("Return isdigit: %d\n", isdigit(c));
	printf("Return isalpha: %d\n", isalpha(c));
	printf("Return isalnum: %d\n", isalnum(c));
	printf("Return isxdigit: %d\n", isxdigit(c));
	printf("Return islower: %d\n", islower(c));
	printf("Return isupper: %d\n", isupper(c));
	printf("Return tolower: %c\n", tolower(c));
	printf("Return toupper: %c\n", toupper(c));
	printf("Return isspace: %d\n", isspace(c));
	printf("Return iscntrl: %d\n", iscntrl(c));
	printf("Return ispunct: %d\n", ispunct(c));
	printf("Return isprint: %d\n", isprint(c));
	printf("Return isgraph: %d\n", isgraph(c));
	
    system("PAUSE");
    return 0;
}
