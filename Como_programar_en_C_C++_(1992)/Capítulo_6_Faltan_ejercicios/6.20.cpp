/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 04/04/20 11:22
	Description: 6.20. Escriba un programa que ejecute 1000 juegos de craps y 
	que responda a cada una de las preguntas siguientes:
		a) Cuántos juegos son ganados en la primera tirada, segunda tirada, ...,
		tirada número 20 y después de la tirada número 20?.
		b) Cuántos juegos han sido perdidos en la primera tirada, segunda tirada,
		..., tirada número 20 y después de la tirada número 20?.
		c) Cuáles son las probabilidades de ganar en el craps?. (Nota: deberá 
		llegar a la conclusión que el craps es uno de los juegos de casino más
		justos). Qué es lo que supone que esto significa?.
		d) Cuál es la longitud o duración promedio de un juego de craps?
		e) Al aumentar la duración del juego aumentan las probabilidades de 
		ganar?
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rollDice(void);
void craps(int [], int []);

main()
{
	int i, juegos_wins[22] = {0}, juegos_loses[22] = {0};
	int total = 0;
	
	srand(time(NULL));	

	for(i = 1; i <= 1000; i++)
	{
		craps(juegos_wins, juegos_loses);
		printf("***************\n");
	}
	
	printf("%9s%26s%27s\n", "Tiradas", "Cantidad ganadas", "Cantidad perdidas");
	for(i = 1; i <= 21; i++)
	{
		if(i == 21)
			printf("%9s%26d%27d\n", "Mas de 20", juegos_wins[i], juegos_loses[i]);	
		else
			printf("%9d%26d%27d\n", i, juegos_wins[i], juegos_loses[i]);
	}
	
	for(i = 1; i <= 21; i++)
		total += juegos_wins[i];
		
	printf("Las probabilidades del juego de craps son: %.2f%c\n", ((float)total / 1000) * 100, '%');
	printf("La duracion de un juego de craps es rapida, porque las mayores\n"
		   " probabiliades de ganar son en las primeras tiradas. Ademas a medida\n"
		   "que aumenta la duracion del juego las probabilidades de ganar son\n"
		   "menores.\n");
		
	system("PAUSE");
	return 0;
}

int rollDice(void)
{
	int die1, die2, worksum;
	
	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	worksum = die1 + die2;
	printf("Player rolled %d + %d = %d\n", die1, die2, worksum);
	
	return worksum;
}

void craps(int juegos_wins[], int juegos_loses[])
{
	int gameStatus, sum, myPoint, contador = 0;
	
	sum = rollDice();
	++contador;
	
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
		++contador;
		
		if(sum == myPoint)
			gameStatus = 1;
		else if(sum == 7)
			gameStatus = 2;
	}
	
	if(gameStatus == 1)
	{
		printf("Player wins\n");
		contador <= 20 ? ++juegos_wins[contador] : ++juegos_wins[21];
	}
	else
	{
		contador <= 20 ? ++juegos_loses[contador] : ++juegos_loses[21];
		printf("Player lose\n");
	}
		
}
