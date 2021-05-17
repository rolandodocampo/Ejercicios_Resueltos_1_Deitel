/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 04/05/20 12:53
	Description: 9.12. Escriba un programa que desde el teclado introduzca una 
	cadena y determine la longitud de la misma. Imprima la cadena utilizando
	como ancho de campo dos veces su longitud.
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	char a[100];
	int longitud;
	
	puts("Entre una cadena");
	scanf("%s%n", a, &longitud);
	printf("%*s\n", 2 * longitud, a);
	
    system("PAUSE");
    return 0;
}
