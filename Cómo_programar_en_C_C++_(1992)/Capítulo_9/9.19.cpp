/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Marcia
	Date: 04/05/20 14:17
	Description: 9.19. Escriba un programa que determine si ? puede ser impreso
	como la constante de car�cter '?', en vez de la secuencia de escape de 
	car�cter constante '\?' mediante el uso de especificador de conversi�n %c en
	la cadena de control de formato de un enunciado printf.
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	printf("%c\n", '?');
	printf("%c\n", '\?');
	
    system("PAUSE");
    return 0;
}
