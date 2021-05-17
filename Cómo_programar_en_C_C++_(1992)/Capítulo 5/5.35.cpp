/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago
	Date: 03/12/19 09:56
	Description: 5.35. Escriba un programa en C que juegue el juego de "adivine
	el número" como sigue: su programa escoge el número que se debe de adivinar
	seleccionando un entero al azar en el rango del 1 al 1000. El programa a 
	continuación escribe:
		I have a number between 1 and 1000.
		Can you guess my number?
		Please type your first guess.
	El jugador entonces escribe su primera estimación. El programa responde con 
	una de las siguientes:
		1. Excellent! You guessed the number!
			Would you like to play again (y or n)?
		2. Too low. Try again.
		3. Too high. Try again.
	Si la adivinanza del jugador es incorrecta, su programa deberá de ciclar 
	hasta que el jugador obtiene al final el número correcto. Su programa debe de
	insistir en indicarle al jugador Too high o bien Too low para ayudarlo a 
	centrarse a la contestación correcta. Nota: la técnica de búsqueda empleada
	en este problema es conocida como búsqueda binaria. Diremos más en relación 
	con lo anterior en el siguiente problema.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

short generador(void);
void prueba(short);

main()
{
	char letra;
	
	srand(time(NULL));
	
	do
	{
		prueba(generador());
		printf("Would you like to play again (y or n)?\n");
		letra = getchar();
		
		switch(letra)
		{
			case ' ': case '\n':
				letra = getchar();
			case 'n': case 'N':
				letra = 1;
				break;
		}
	}while(letra != 1);
	
	system("pause");
	return 0;
}

short generador(void)
{
	short numero;
	
	numero = 1 + rand() % 1000;
	printf("I have a number between 1 and 1000.\n");
	printf("Can you guess my number?\n");
	printf("Please type your first guess.\n");
	return numero;
}

void prueba(short numero)
{
	short num_usuario;
	
	do
	{
		scanf("%hd", &num_usuario);
		
		if(num_usuario == numero)
			printf("Excellent! You guessed the number!\n");
		else if(num_usuario < numero)
			printf("Too low. Try again.\n");
		else
			printf("Too high. Try again.\n");
			
	}while(num_usuario != numero);
}
