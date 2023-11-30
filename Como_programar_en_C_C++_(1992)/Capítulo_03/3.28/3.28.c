/* 
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 17/07/19 16:24
	Description: 3.28 Modifique el programa de la figura 3.10 para validar sus
	entradas. En cualquier entrada, si el valor introducido es diferente de uno
	o dos, sigua ciclando hasta que el usuario introduzca un valor correcto.
*/  

#include <stdio.h>
#include <stdlib.h>

main()
{
	int passes = 0, failures = 0, student = 1, result;

	while(student <= 10)
	{
		printf("Enter result (1 = pass, 2 = fail): ");
		scanf("%d", &result);
		
		if(result == 1)
			++passes;
		else if(result == 2)
			++failures;
		else
			--student;
		
		student++;
	}
	
	printf("Passed %d\n", passes);
	printf("Failed %d\n", failures);
	
	if(passes > 8)
		printf("Raise tuition\n");
	
   system("PAUSE");
   return 0;
}
