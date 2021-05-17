/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 04/05/20 13:47
	Description: 9.15. Escriba un programa que introduzca el valor 437 
	utilizando cada uno de los especificadores de conversión enteros scanf. 
	Imprima cada valor introducido, utilizando todos los especificadores de 
	conversión enteros.
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	int valor_d, valor_i;
	unsigned valor_o, valor_u, valor_x;
	
	puts("Entre el valor 437");
	scanf("%d", &valor_d);
	scanf("%i", &valor_i);
	scanf("%o", &valor_o);
	scanf("%u", &valor_u);
	scanf("%x", &valor_x);
	puts("**********************");
	printf("%d\n", valor_d);
	printf("%i\n", valor_i);
	printf("%o\n", valor_o);
	printf("%u\n", valor_u);
	printf("%x\n", valor_x);
	
    system("PAUSE");
    return 0;
}
