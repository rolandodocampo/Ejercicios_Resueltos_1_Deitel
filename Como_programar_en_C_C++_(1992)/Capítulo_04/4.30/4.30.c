/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 31/08/19 09:17
	Description: 4.30 Vuelva a escribir el programa de la figura 4.7, remplazando
	el enunciado switch con un enunciado if/else anidado; tenga cuidado de 
	manejar el caso default de forma adecuada. A continuación vuelva a escribir 
	esta nueva versión, remplazando el enunciado if/else anidado en una serie 
	de enunciados if, aquí, también, tenga cuidado como manejar el caso default
	(esto es más difícil que en el caso de la versión if/else anidada). Este 
	ejercicio demuestra que switch es una conveniencia y que cualquier enunciado
	switch puede ser escrito utilizando sólo enunciados de una sola selección.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int grade;
	int aCount = 0, bCount = 0, cCount = 0,
		 dCount = 0, fCount = 0, prueba = 0;
	
	printf("Inciso a):\n");
	printf("Enter the letter grades.\n");
	printf("Enter EOF character to end input.\n");
	
	while((grade = getchar()) != EOF)
	{
		if(grade == 'A' || grade == 'a')
			++aCount;
		else if(grade == 'B' || grade == 'b')
				++bCount;
		else if(grade == 'C' || grade == 'c')
				++cCount;
		else if(grade == 'D' || grade == 'd')
				++dCount;
		else if(grade == 'F' || grade == 'f')
				++fCount;
		else if(grade == '\n' || grade == ' ');
		else
		{
			printf("Incorrect letter grade entered.");
			printf(" Enter a new grade.\n");
		}
	}
	
	printf("\nTotals for each letter grade are:\n");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("F: %d\n", fCount);
	printf("--------------------------------------------\n");

	aCount = bCount = cCount = dCount = fCount = 0;
	
	printf("Inciso b):\n");
	printf("Enter the letter grades.\n");
	printf("Enter EOF character to end input.\n");
	
	while((grade = getchar()) != EOF)
	{
		if(grade == 'A' || grade == 'a')
		{
			++aCount;
			prueba = 1;
		}
			
		if(grade == 'B' || grade == 'b')
		{
			++bCount;
			prueba = 2;
		}
		
		if(grade == 'C' || grade == 'c')
		{
			++cCount;
			prueba = 3;
		}
		
		if(grade == 'D' || grade == 'd')
		{
			++dCount;
			prueba = 4;
		}
		
		if(grade == 'F' || grade == 'f')
		{
			++fCount;
			prueba = 5;
		}
		
		if(grade == '\n' || grade == ' ')
			prueba = 6;
		
		if(prueba == 0)
		{
			printf("Incorrect letter grade entered.");
			printf(" Enter a new grade.\n");
		}
		
		prueba = 0;
	}
	
	printf("\nTotals for each letter grade are:\n");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("F: %d\n", fCount);
	printf("--------------------------------------------\n");
	
   system("PAUSE");
   return 0;
}
