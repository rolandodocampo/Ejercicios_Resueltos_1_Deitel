/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia
	Date: 30/08/19 12:57
	Description: 4.28 Una empresa paga a sus empleados como gerentes (que 
	reciben como salario semanal fijo), trabajadores horarios (que reciben un 
	salario horario fijo por las primeras 40 horas de trabajo, y "tiempo y medio"
	, es decir, 1.5 veces su sueldo horario, para las horas extras trabajadas), 
	trabajadores a comisión (quienes reciben $250 más 5.7 % de sus ventas 
	semanales brutas), o trabajadores a destajo (quienes reciben una cantidad 
	fija de dinero por cada una de las piezas que produce cada trabajador a 
	destajo de esta empresa que trabaja sólo un tipo de piezas). Escriba un 
	programa para calcular la nómina semanal de cada empleado. Usted no sabe por
	anticipado el número de empleados. Cada tipo de empleado tiene su propio 
	código de nómina: los gerentes tienen un código de nómina 1, los trabajadores
	horario tienen un código 2, los trabajadores a comisión el código 3 y los 
	trabajadores a destajo el código 4. Utilice un switch para calcular la 
	nómina de cada empleado, basado en el código de nómina de dicho empleado.
	Dentro del switch, solicite al usuario (es decir, al oficinista de nóminas)
	que escriba los hechos apropiados que requiere su programa, para calcular la
	paga o nómina de cada empleado, basado en el código de nómina de cada uno de
	ellos.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int empleado = 0, codigo, horas, piezas;
	float nomina, ventas;
	
	printf("Entre el codigo de nomina (EOF para terminar): ");
	scanf("%d", &codigo);
	
	while(codigo != EOF)
	{
		++empleado;
		
		switch(codigo)
		{
			case 1:
				printf("Introduzca el salario fijado: ");
				scanf("%f", &nomina);
				break;
			case 2:
				printf("Introduzca el salario fijado por las\nprimeras");
				printf("40 horas: ");
				scanf("%f", &nomina);
				printf("Introduzca las horas trabajadas: ");
				scanf("%d", &horas);
				
				if(horas > 40)
					nomina += 1.5 * (horas - 40);
				
				break;
			case 3:
				printf("Introduzca las ventas brutas semanales: ");
				scanf("%f", &ventas);
				nomina = 250 + (5.7 / 100) * ventas;
				break;
			case 4:
				printf("Valor de la pieza vendida: ");
				scanf("%f", &nomina);
				printf("Cantidad de piezas vendidas: ");
				scanf("%d", &piezas);
				nomina *= piezas;
				break;
			default:
				printf("Codigo incorrecto\nIntentelo de nuevo.\n");
				nomina = -5;
				break;
		}
		
		if(nomina != -5)
		{
			switch(codigo)
			{
				case 1:	
					printf("-------------------------\n");
					printf("Empleado %d\n", empleado);
					printf("Codigo de nomina: %d\n", codigo);	
					printf("Nomina semanal: $%.2f\n", nomina);
					printf("-------------------------\n");
					break;
				case 2:
					printf("-------------------------\n");
					printf("Empleado %d\n", empleado);
					printf("Codigo de nomina: %d\n", codigo);	
					printf("Horas trabajadas: %dh\n", horas);
					printf("Nomina semanal: $%.2f\n", nomina);
					printf("-------------------------\n");
					break;
				case 3:
					printf("-------------------------\n");
					printf("Empleado %d\n", empleado);
					printf("Codigo de nomina: %d\n", codigo);
					printf("Ventas brutas en la semana: $%.2f\n", ventas);	
					printf("Nomina semanal: $%.2f\n", nomina);
					printf("-------------------------\n");
					break;
				case 4:
					printf("-------------------------\n");
					printf("Empleado %d\n", empleado);
					printf("Codigo de nomina: %d\n", codigo);	
					printf("Cantidad de piezas vendidas: %d\n", piezas);
					printf("Nomina semanal: $%.2f\n", nomina);
					printf("-------------------------\n");
					break;
			}
		}
		
		printf("Entre el codigo de nomina (EOF para terminar): ");
		scanf("%d", &codigo);
	}

   system("PAUSE");
   return 0;
}

