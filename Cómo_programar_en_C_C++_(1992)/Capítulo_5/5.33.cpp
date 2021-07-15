/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago
	Date: 02/12/19 19:35
	Description: 5.33. La utilización de las computadoras en la educación se 
	conoce como instrucción asistida por computadora (CAI). Un problema que se
	desarrolla en los entornos CAI es la fatiga del alumno. Esto puede ser 
	eliminado variando el diálogo de la computadora para retener la atención del
	alumno. Modifique el programa del ejercicio 5.32 de tal forma que los 
	comentarios que se impriman para respuesta correcta y cada respuesta 
	incorrecta sea como sigue:
		Respuestas a las contestaciones correctas:
			Very good!
			Excellent!
			Nice work!
			Keep up the good work!
		Respuestas a las contestaciones incorrectas:
			No. Please try again.
			Wrong. Try once more.
			Don't give up!
			No. Keep trying.
	Utilice el generador de números aleatorios para escoger el número de 1 a 4 y
	seleccionar una respuesta apropiada para cada una de las contestaciones. 
	Utilice una estructrura switch con enunciados printf para emitir las 
	respuestas.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

short test(void);
void  dialogo(short);

main()
{
	short centinela = 0;
	
	srand(time(NULL));
	
	do
	{
		if(test() == 1)
			dialogo(1);
			
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
			dialogo(0);
			printf("How much is %hd times %hd?\n", num1, num2);
			scanf("%hd", &respuesta);	
		}
		
		return 1;
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
