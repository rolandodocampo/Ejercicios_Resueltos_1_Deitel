# 3.21 Nómina bruta de empleados

**Prolema:**

Desarrolle un programa en C que determine la nómina bruta para cada uno de varios empleados. La empresa paga "tiempo normal" para las primera 40 horas trabajadas de cada empleado y paga "tiempo y medio" para todas las horas trabajadas en exceso de 40 horas. Se le proporciona una lista de los empleados de la empresa, el número de horas que cada empleado trabajó la última semana, y la tasa horaria de cada empleado. Su programa deberá introducir esta información para cada uno de los empleados, y determinar y desplegar la nómina bruta de cada uno de ellos.

​		Enter # of hours worked (-1 to end): 39
​		Enter hourly rate of the worker ($00.00): 10.00
​		Salary is $390.00
​		

		Enter # of hours worked (-1 to end): 40
		Enter hourly rate of the worker ($00.00): 10.00
		Salary is $400.00
		
		Enter # of hours worked (-1 to end): 41
		Enter hourly rate of the worker ($00.00): 10.00
		Salary is $415.00
	
		Enter # of hours worked (-1 to end): -1

-----------------------------------------------------------------------------------------------------------------------------------------------------------

**Solución:**

```c
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
```

**Diagrama de flujo:**

<img src=".\3.21_Diagrama_de_flujo.png"  />
