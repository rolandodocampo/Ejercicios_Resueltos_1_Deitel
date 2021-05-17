/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 09/12/19 16:26
	Description: 5.49. Escriba un programa que pruebe todas las funciones 
	matemáticas posibles de biblioteca en la figura 5.2 como pueda. Ejecute cada
	una de estas funciones haciendo que su programa	imprima tablas de valores
	de regreso para una diversidad de valores de argumentos.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	double arg1, arg2, arg3;
	short i;
	
	for(i = 1; i <= 12; i++)
	{
		switch(i)
		{
			case 1:
				printf("Funcion\t\tSalida\n");
				for(arg1 = 0; arg1 <= 10; arg1++)
					printf("sqrt(%.2lf)\t%.2lf\n", arg1, sqrt(arg1));
				
				printf("----------------------------\n");
				break;
			case 2:
				printf("Funcion\t\tSalida\n");
				for(arg1 = 0; arg1 <= 10; arg1++)
					printf("exp(%.2lf)\t%.2lf\n", arg1, exp(arg1));
				
				printf("----------------------------\n");
				break;	
			case 3:
				printf("Funcion\t\tSalida\n");
				for(arg1 = 1; arg1 <= 10; arg1++)
					printf("log(%.2lf)\t%.2lf\n", arg1, log(arg1));
				
				printf("----------------------------\n");
				break;	
			case 4:
				printf("Funcion\t\tSalida\n");
				for(arg1 = 1; arg1 <= 10; arg1++)
					printf("log10(%.2lf)\t%.2lf\n", arg1, log10(arg1));
				
				printf("----------------------------\n");
				break;
			case 5:
				printf("Funcion\t\tSalida\n");
				for(arg1 = -5; arg1 <= 5; arg1++)
					printf("fabs(%.2lf)\t%.2lf\n", arg1, fabs(arg1));
				
				printf("----------------------------\n");
				break;
			case 6:
				printf("Funcion\t\tSalida\n");
				for(arg1 = 1; arg1 <= 10; arg1 += .4)
					printf("ceil(%.2lf)\t%.2lf\n", arg1, ceil(arg1));
				
				printf("----------------------------\n");
				break;
			case 7:
				printf("Funcion\t\tSalida\n");
				for(arg1 = -5; arg1 <= 5; arg1 += .4)
					printf("floor(%.2lf)\t%.2lf\n", arg1, floor(arg1));
				
				printf("----------------------------\n");
				break;
			case 8:
				printf("Funcion\t\tSalida\n");
				for(arg1 = 1, arg2 = 1; arg2 <= 4; arg1 += 2, arg2++)
					printf("pow(%.2lf, %.2lf)\t%.2lf\n", arg1, arg2, pow(arg1, arg2));
				
				printf("----------------------------\n");
				break;
			case 9:
				printf("Funcion\t\tSalida\n");
				for(arg1 = 1, arg2 = 1; arg2 <= 10; arg1 += 2, arg2++)
					printf("fmod(%.2lf, %.2lf)\t%.2lf\n", arg1, arg2, fmod(arg1, arg2));
				
				printf("----------------------------\n");
				break;
			case 10:
				printf("Funcion\t\tSalida\n");
				for(arg1 = 1; arg1 <= 10; arg1++)
					printf("sin(%.2lf)\t%.2lf\n", arg1, sin(arg1));
				
				printf("----------------------------\n");
				break;
			case 11:
				printf("Funcion\t\tSalida\n");
				for(arg1 = 1; arg1 <= 10; arg1++)
					printf("cos(%.2lf)\t%.2lf\n", arg1, cos(arg1));
				
				printf("----------------------------\n");
				break;
			case 12:
				printf("Funcion\t\tSalida\n");
				for(arg1 = 1; arg1 <= 10; arg1++)
					printf("tan(%.2lf)\t%.2lf\n", arg1, tan(arg1));
				
				printf("----------------------------\n");
				break;
		}
	}

   system("PAUSE");
   return 0;
}
