/* 
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 17/07/19 16:24
	Description: 3.28 Modifique el programa de la figura 3.10 para validar sus
	entradas. En cualquier entrada, si el valor introducido es diferente de uno
	o dos, sigua ciclando hasta que el usuario introduzca un valor correcto.

*/  

/* Analysis of examination results */
#include <stdio.h>
#include <stdlib.h>

main()
{
	/* Initializing variables in declarations */
	int passes = 0, failures = 0, student = 1, result;
	
	/* Process 10 students; counter-controlled loop */
	while(student <= 10)
	{
		printf("Enter result (1=pass, 2=fail): ");
		scanf("%d", &result);
		
		if(result == 1)			/* if/else nested in while */
			passes = passes + 1;
		else if(result == 2)
			failures = failures + 1;
		else
			--student;
		
		student = student + 1;
	}
	
	printf("Passed %d\n", passes);
	printf("Failed %d\n", failures);
	
	if(passes > 8)
		printf("Raise tuition\n");
	
   system("PAUSE");
   return 0; 	/* successfull termination */
}
