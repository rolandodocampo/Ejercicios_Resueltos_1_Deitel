/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 28/04/20 09:39
	Description: 8.6. Escriba un programa que introduzca una línea de texto con
	la función gets, en el arreglo de caracteres s[100]. Extraiga la línea en 
	letras mayúsculas y minúsculas.
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 100

void minuscula(char []);
void mayuscula(char []);
void imprimir(char *const, void (*[])(char []));

main()
{
	char s[SIZE];
	void (*f[2])(char []) = {minuscula, mayuscula};
	int i;
	
	printf("Entre una linea de texto: ");
	gets(s);
	printf("Para mostrar en minuscula imprima 1\n"
		   "Para mostrar en mayuscula imprima 2: ");
	scanf("%d", &i);
	
	imprimir(s, &f[i - 1]);
	
	
    system("PAUSE");
    return 0;
}

void minuscula(char s[])
{
	for(; *s != '\0'; s++)
		*s = tolower(*s);
}

void mayuscula(char s[])
{
	for(; *s != '\0'; s++)
		*s = toupper(*s);	
}

void imprimir(char *const s, void (*f[])(char []))
{
	(*f)(s);
	puts(s);
}
