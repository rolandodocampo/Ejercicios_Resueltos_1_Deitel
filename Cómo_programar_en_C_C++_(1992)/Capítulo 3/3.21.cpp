/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba 
	Date: 17/07/19 11:27
	Description: 3.21 Desarrolle un programa en C que determine la nómina bruta
	para cada uno de varios empleados. La empresa paga "tiempo normal" para las 
	primera 40 horas trabajadas de cada empleado y paga "tiempo y medio" para 
	todas las horas trabajadas en exceso de 40 horas. Se le proporciona una lista
	de los empleados de la empresa, el número de horas que cada empleado trabajó
	la última semana, y la tasa horaria de cada empleado. Su programa deberá 
	introducir esta información para cada uno de los empleados, y determinar y 
	desplegar la nómina bruta de cada uno de ellos.
		Enter # of hours worked (-1 to end): 39
		Enter hourly rate of the worker ($00.00): 10.00
		Salary is $390.00
		
		Enter # of hours worked (-1 to end): 40
		Enter hourly rate of the worker ($00.00): 10.00
		Salary is $400.00
		
		Enter # of hours worked (-1 to end): 41
		Enter hourly rate of the worker ($00.00): 10.00
		Salary is $415.00
	
		Enter # of hours worked (-1 to end): -1
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int horas_trabajadas;
	float rate;
	
	printf("Enter # of hours worked (-1 to end): ");
	scanf("%d", &horas_trabajadas);
	
	while(horas_trabajadas != -1)
	{
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &rate);
		
		if(horas_trabajadas <= 40)
			printf("Salary is $%.2f\n\n", horas_trabajadas * rate);
		else
			printf("Salary is $%.2f\n\n", horas_trabajadas * rate + rate / 2);
			
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &horas_trabajadas);	
	}

   system("PAUSE");
   return 0;
}
