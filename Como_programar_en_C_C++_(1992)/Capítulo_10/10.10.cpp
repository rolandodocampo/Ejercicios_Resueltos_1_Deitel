/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 10/05/20 23:54
	Description: 10.10. Escriba un programa que desplace una variable entera 4
	bits hacia la derecha. El programa deberá imprimir el entero en bits antes 
	y después de la operación de desplazamiento. Su sistema coloca ceros, o bien
	unos en los bits desalojados?
*/
#include<stdio.h>
#include<stdlib.h>

void imprimir_bits(int);

main()
{
	int variable;
	
	printf("Entre el valor de la variable entera: ");
	scanf("%d", &variable);
	imprimir_bits(variable);
	variable >>= 4;
	imprimir_bits(variable);	
	
    system("PAUSE");
    return 0;
}

void imprimir_bits(int variable)
{
	int mascara = 1 << (sizeof(int) * 8 - 1);
	int i;
	
	for(i = 1; i <= (sizeof(int) * 8); i++)
	{
		putchar((variable & mascara) == 0 ? '0' : '1');
		variable <<= 1;
		
		if(i % 8 == 0)
			putchar(' ');
	}
	putchar('\n');
}

/* Depende del signo de la variable, si es positiva rellena con cero, pero si es
negativo el número, rellena con uno */
