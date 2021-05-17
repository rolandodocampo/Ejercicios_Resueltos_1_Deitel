/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa Karenia
	Date: 02/12/19 19:12
	Description: 5.32. Las computadores est�n jugando un papel creciente en la
	educaci�n. Escriba un programa que ayudar�a a un alumno de escuela primaria
	a aprender a multiplicar. Utilice rand para producir dos enteros positivos 
	de un d�gito. A continuaci�n deber�a imprimir una pregunta como la 
	siguiente:
		How much is 6 times 7?
	A continuaci�n el alumno escribe la respuesta. El programa verifica la 
	respuesta del alumno. Si es correcta,  imprime "Very good!" y a continuaci�n
	solicita otra multiplicaci�n. Si la respuesta es incorrecta, imprimir� "No.
	Please try again", y a continuaci�n permitir� que el alumno vuelva a 
	intentar la misma pregunta en forma repetida, hasta que al final la conteste
	correctamente.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

short test(void);

main()
{
	short centinela = 0;
	
	srand(time(NULL));
	
	do
	{
		if(test() == 1)
			printf("Very good!\n");
			
		printf("Si desea finalizar entre -1: ");
		scanf("%hd", &centinela);
	}while(centinela != -1);
	
	system("pause");
	return 0;
}

short test(void)
{
	short num1, num2, producto, respuesta;
	
		num1 = rand() % 10;
		num2 = rand() % 10;
		producto = num1 * num2;
		printf("How much is %hd times %hd?\n", num1, num2);
		scanf("%hd", &respuesta);
		
		while(respuesta != producto)
		{
			printf("No. Please try again.\n");
			printf("How much is %hd times %hd?\n", num1, num2);
			scanf("%hd", &respuesta);	
		}
		
		return 1;
}
