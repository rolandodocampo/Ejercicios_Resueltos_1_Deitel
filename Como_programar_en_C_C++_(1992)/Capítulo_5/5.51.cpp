/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 10/12/19 11:07
	Description: 5.51. Modifique el programa de craps de la figura 5.10 para 
	permitir apuestas. Empaquete como una función aquella parte del programa que 
	ejecuta un juego de craps.	Inicialice la variable bankBalance a 1000 dólares.
	Solicite al jugador que introduzca una apuesta. Utilice un ciclo while para 
	verificar que wager es menor o igual a bankBalance y de lo contrario 
	indíquele al usuario de que vuelva a entrar wager hasta que se intoduzca un
	wager válido. Una vez introducido un wager válido, ejecute un juego de craps.
	Si el jugador gana, aumente bankBalance por la cantidad wager e imprima el 
	nuevo bankBalance. Si el jugador pierde, reduzca bankBalance por la cantidad
	wager, imprima el nuevo bankBalance, verifique si bankBalance se ha 
	convertido en cero, y si es así, imprima el mensaje "Sorry. You busted!". 
	Conforme progrese el juego, imprima varios mensajes para crear algo de 
	"plática" como es, "Oh, you going for broke, huh?", o bien "Aw, cmon, take a
	chance!" o bien "You're up big. Now's the time to cash in your chips!"
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int craps(void);
int rollDice(void);
void dialogo(short);

main()
{
	int bankBalance = 1000, wager, centinela;
	
	srand(time(NULL));
	printf("Introduzca una apuesta: ");
	scanf("%d", &wager);
	
	while(wager > bankBalance)
	{
		printf("Valor excedido (max = 1000).\n");
		printf("Introduzca una apuesta: ");
		scanf("%d", &wager);
	}
	
	do
	{		
		if(craps())
		{
			bankBalance += wager;
			dialogo(1);
			printf("El nuevo bankBalance es: %d", bankBalance);
		}
		else
		{
			bankBalance -= wager;
			if(bankBalance <= 0)
			{
				printf("El nuevo bankBalance es: %d\n", bankBalance);
				printf("Sorry. You busted!\n"); 
				break;
			}
			else
			{
				dialogo(0);
				printf("El nuevo bankBalance es: %d\n", bankBalance);
			}
		}
		printf("\n-------------------------------------\n");
	
	printf("Deseas apostar? (1: Si): ");
	scanf("%d", &centinela);
		
	if(centinela != 1)
		break;
	else
	{
		printf("Introduzca una apuesta: ");
		scanf("%d", &wager);
	
		while(wager > bankBalance)
		{
			printf("Valor excedido (max = %d).\n", bankBalance);
			printf("Introduzca una apuesta: ");
			scanf("%d", &wager);
		}
	}
	}while(bankBalance > 0);
	
   system("PAUSE");
   return 0;
}

int craps(void)
{
	int gameStatus, sum, myPoint;
	
	sum = rollDice();
	
	switch(sum)
	{
		case 7: case 11:
			gameStatus = 1;
			break;
		case 2: case 3: case 12:
			gameStatus = 2;
			break;
		default:
			gameStatus = 0;
			myPoint = sum;
			printf("Point is %d\n", myPoint);
			break;
	}
	
	while(gameStatus == 0)
	{
		sum = rollDice();
		
		if(sum == myPoint)
			gameStatus = 1;
		else if(sum == 7)
			gameStatus = 2;
	}
	
	if(gameStatus == 1)
	{
		printf("Player wins\n");
		return 1;
	}
	else
	{
		printf("Player loses\n");
		return 0;
	}
}

int rollDice(void)
{
	int die1, die2, workSum;
	
	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = die1 + die2;
	printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
	return workSum;	
}

void dialogo(short valor)
{
	short azar;
	
	azar = 1 + rand() % 3;
	
	if(valor == 1)
	{
		switch(azar)
		{
			case 1: 
				printf("You're up big. Now's the time to cash in your chips!\n");
				break;
			case 2:
				printf("Great!\n");
				break;
			case 3:
				printf("Wonderful!\n");
				break;
		}
	}
	else
	{
		switch(azar)
		{
			case 1: 
				printf("Oh, you going for broke, huh?\n");
				break;
			case 2:
				printf("Aw, cmon, take a chance!\n");
				break;
			case 3:
				printf("Oh deam!\n");
				break;
		}
	}
}
