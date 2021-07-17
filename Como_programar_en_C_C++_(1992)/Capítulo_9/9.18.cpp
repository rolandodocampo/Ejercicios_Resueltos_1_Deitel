/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 04/05/20 14:11
	Description: 9.18. En algunos lenguajes de programación, las cadenas pueden
	ser introducidas entre comillas sencillas o dobles. Escriba un programa que
	lea las tres cadenas suzy, "suzy", y 'suzy'. Son las comillas sencillas y 
	dobles ignoradas o leídas por C, como parte de la cadena?.
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	char sin[10], dobles[10], sencillas[10];
	
	scanf("%s", sin);
	scanf("%s", dobles);
	scanf("%s", sencillas);
	puts("********************");
	puts(sin);
	puts(dobles);
	puts(sencillas);
	
    system("PAUSE");
    return 0;
}
