/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago
	Date: 03/12/19 08:31
	Description: 5.34. Sistemas más avanzados de instrucción asistida por 
	computadora vigila el rendimiento del alumno a lo largo de un periodo de 
	tiempo. La decisión para empezar un nuevo tema, a menudo se basa en el léxico
	del alumno en relación con temas anteriores. Modifique el programa del 
	ejercicio 5.33 para contar el número de respuestas correctas e incorrectas 
	escritas por el estudiante. Una vez que el alumno escriba 10 respuestas, su 
	programa deberá calcular el porcentaje de respuestas correctas. Si el 
	porcentaje es menor de 75%, su programa deberá imprimir "Please ask you 
	instructor for extra help" y a continuación terminar. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

short test(void);
void  dialogo(short);

main()
{
	short centinela = 0, total_Correctas = 0, contador = 1, frecuencia_M;
	float porciento;
	
	srand(time(NULL));
	porciento = 10 * 0.75;
	
	do
	{
		frecuencia_M = test() - 1;
		
		if(frecuencia_M != 10)
		{
			dialogo(1);
			total_Correctas++;
		}
	}while((total_Correctas + frecuencia_M) < 10);
	
	printf("*****************************************\n");
	printf("Frecuencia_M: %hd\ntotal_Correctas: %hd\n", 
			frecuencia_M, total_Correctas);
	
	if(total_Correctas < porciento)
		printf("Please ask you instructor for extra help\n");
	
	system("pause");
	return 0;
}

short test(void)
{
	short num1, num2, producto, respuesta;
	static short frecuencia  = 0;
	
		num1 = rand() % 10;
		num2 = rand() % 10;
		producto = num1 * num2;
		printf("How much is %hd times %hd?\n", num1, num2);
		scanf("%hd", &respuesta);
		
		while(respuesta != producto)
		{
			frecuencia++;
			dialogo(0);
			
			if(frecuencia == 10)
				return 1 + 10;
			
			printf("How much is %hd times %hd?\n", num1, num2);
			scanf("%hd", &respuesta);	
		}
		
		return 1 + frecuencia;
}

void  dialogo(short valor)
{
	short i;
	
	i = 1 + rand() % 4;
	
	if(valor == 1)
	{
		switch(i)
		{
			case 1:
				printf("Very good!\n");
				break;
			case 2:
				printf("Excellent!\n");
				break;
			case 3:
				printf("Nice work!\n");
				break;
			default:
				printf("Keep up the good work!\n");
				break;
		}
	}
	else
	{
		switch(i)
		{
			case 1:
				printf("No. Please try again.\n");
				break;
			case 2:
				printf("Wrong. Try once more.\n");
				break;
			case 3:
				printf("Don't give up!\n");
				break;
			default:
				printf("No. Keep trying.\n");
				break;
		}
	}
}
