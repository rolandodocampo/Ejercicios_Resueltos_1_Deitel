/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 21/08/19 20:51
	Description: 4.22 Modifique el programa de la figura 4.7, de tal forma que 
	calcule la calificación promedio de la clase.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int grade;
	int aCount = 0, bCount = 0, cCount = 0,
	    dCount = 0, fCount = 0, total;
	float promedio;
	    
	printf("Enter the letter grade\n");
	printf("Enter the EOF caracter to end input.\n");
	
	while((grade = getchar()) != EOF)
	{
		switch(grade)
		{
			case 'A': case 'a':
				++aCount;
				break;
				
			case 'B': case 'b':
				++bCount;
				break;
				
			case 'C': case 'c':
				++cCount;
				break;
				
			case 'D': case 'd':
				++dCount;
				break;
				
			case 'F': case 'f':
				++fCount;
				break;
				
			case '\n': case ' ':
				break;
			
			default:
				printf("Incorrect letter grade entered.");
				printf(" Enter a new grade.\n");
				break;
		}
	}
	
	printf("\nTotal for each letter grade are:\n");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("F: %d\n", fCount);
	total = aCount + bCount + cCount + dCount + fCount;
	promedio = (float)('A' * aCount + 'B' * bCount + 'C' * cCount + 'D' * dCount 
				+ 'F' * fCount) / total;
	
	if(promedio >= 65 && promedio <= 65.4)
		printf("El promedio es: %c\n", 'A');
	else if(promedio >= 65.5 && promedio <= 66.4)
		printf("El promedio es: %c\n", 'B');
	else if(promedio >= 66.5 && promedio <= 67.4)
		printf("El promedio es: %c\n", 'C');
	else if(promedio >= 67.5 && promedio <= 68.4)
		printf("El promedio es: %c\n", 'D');
	else
		printf("El promedio es: %c\n", 'F');
	
   system("PAUSE");
   return 0;
}
