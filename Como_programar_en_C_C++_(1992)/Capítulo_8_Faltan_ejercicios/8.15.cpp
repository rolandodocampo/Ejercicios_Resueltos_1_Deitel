/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Marcia
	Date: 30/04/20 23:30
	Description: 8.15. Escriba un programa que introduzca una l�nea de texto, 
	divida la l�nea con la funci�n strtok y extraiga los token en orden inverso.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *extracion(char *);

main()
{
	char texto[200];
	
	puts("Entre una linea de texto:");
	gets(texto);
	
	extracion(strtok(texto, " "));
	putchar('\n');
	
    system("PAUSE");
    return 0;
}

char *extracion(char *texto)
{
	
	if(texto == NULL)
		return "";
		
	extracion(strtok(NULL, " "));
	printf("%s ", texto);
}
