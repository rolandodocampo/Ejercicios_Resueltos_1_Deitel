/*
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago de Cuba 
	Date: 17/07/19 11:27
	Description: 3.21 Desarrolle un programa en C que determine la n�mina bruta
	para cada uno de varios empleados. La empresa paga "tiempo normal" para las 
	primera 40 horas trabajadas de cada empleado y paga "tiempo y medio" para 
	todas las horas trabajadas en exceso de 40 horas. Se le proporciona una lista
	de los empleados de la empresa, el n�mero de horas que cada empleado trabaj�
	la �ltima semana, y la tasa horaria de cada empleado. Su programa deber� 
	introducir esta informaci�n para cada uno de los empleados, y determinar y 
	desplegar la n�mina bruta de cada uno de ellos.
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
#include<stdio.h>
#include<stdlib.h>

main()
{
	short horas;
	float tasa, salario;
	
	printf("Entre la cantidad de horas trabajadas (-1 para salir): ");
	scanf("%hd", &horas);
	
	while(horas != -1)
	{
		printf("Entre la tasa horaria ($00.00): ");
		scanf("%f", &tasa);
		
		if( horas <= 40)
			printf("Salario es de: $%.2f\n\n", horas * tasa);  
		else
		{
			salario = 3 * tasa * horas / 2 - 60 * tasa + 40 * tasa; 
			printf("Salario es de: $%.2f\n\n", salario);	
		}
			
		printf("Entre la cantidad de horas trabajadas (-1 para salir): ");
		scanf("%hd", &horas);
	}
	
   system("PAUSE");
   return 0;
}
