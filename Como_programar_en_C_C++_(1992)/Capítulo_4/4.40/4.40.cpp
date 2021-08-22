/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 08/09/19 11:11
	Description: 4.40 Describa en general cómo eliminaría los enunciados break de
	una estructura switch y los remplazarías con equivalentes estructurados. 
	Utilice la técnica (quizás algo torpe) que desarrolló aquí para eliminar los
	enunciados break del programa de la figura 4.7
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int grade;
	int aCount = 0, bCount = 0, cCount = 0,
		 dCount = 0, fCount = 0, prueba = 0;
	
	printf("Enter the letter grades. \n");
	printf("Enter the EOF character to end input.\n");
	
	while((grade = getchar()) != EOF)
	{
		prueba = 0;
		switch(grade)
		{
			if(prueba == 0)
			{
			case 'A': case 'a':
				++aCount;
				prueba++;
			}
	
			if(prueba == 0)
			{
				case 'B': case 'b':
					++bCount;
					prueba++;
			}
			
			if(prueba == 0)
			{
			case 'C': case 'c':
				++cCount;
				prueba++;
			}
			
			if(prueba == 0)
			{
			case 'D': case 'd':
				++dCount;
				prueba++;
			}
			
			if(prueba == 0)
			{
			case 'F': case 'f':
				++fCount;
				prueba++;
			}
			
			if(prueba == 0)
			{
			case '\n': case ' ':
					prueba++;
			}
			
			if(prueba == 0)
			{
			default:
				printf("Incorrect letter grade entered.");
				printf(" Enter the new grade.\n");
				prueba++;
			}
		}
	}
	
	printf("\nTotals for each letter grade are:\n");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("F: %d\n", fCount);
	
   system("PAUSE");
   return 0;
}
