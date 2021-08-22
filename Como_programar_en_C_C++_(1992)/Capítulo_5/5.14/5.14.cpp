/* 
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 16/11/19 15:11
	Description: 5.14. Para cada uno de los conjuntos siguientes de enteros, 
	escriba un solo enunciado que imprima un número al azar del conjunto.
		a) 2, 4, 6, 8, 10
		b) 3, 5, 7, 9, 11
		c) 6, 10, 14, 18, 22
*/

#include <stdio.h>
#include <stdlib.h>

void a (void);
void b (void);
void c (void);

main()
{
	a();
	b();
	c();
	
	system("PAUSE");
	return 0;
}

void a(void)
{
	register short i;
	
	printf("Inciso a)\n");
	for(i = 1; i <= 20; i++)
	{
		printf("%d\t", (1 + rand() % 5) * 2);
		
		if(i % 5 == 0)
			printf("\n");
	}
	printf("*************************\n");
}

void b(void)
{
	register short i;
	
	printf("Inciso b)\n");
	for(i = 1; i <= 20; i++)
	{
		printf("%d\t", (1 + rand() % 5) * 2 + 1);
		
		if(i % 5 == 0)
			printf("\n");
	}
	printf("*************************\n");
}

void c(void)
{
	register short i;
	
	printf("Inciso c)\n");
	for(i = 1; i <= 20; i++)
	{
		printf("%d\t", ((1 + rand() % 5) * 2 + 1) * 2);
		
		if(i % 5 == 0)
			printf("\n");
	}
	printf("*************************\n");
}
