/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 04/05/20 14:17
	Description: 9.19. Escriba un programa que determine si ? puede ser impreso
	como la constante de carácter '?', en vez de la secuencia de escape de 
	carácter constante '\?' mediante el uso de especificador de conversión %c en
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
