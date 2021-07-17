/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 21/04/20 13:44
	Description: 7.20. Modifique el programa de barajar y distribuir naipes de 
	la figura 7.24, de tal forma que las operaciones de barajar y de reparto 
	sean ejecutados por la misma función (shuffleAndDeal). La función deberá 
	contener una esturctura de ciclo anidado, similar a la función shuffle, de
	la figura 7.24.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define PALO 4
#define TIPO 13

void shuffleAndDeal(char [][TIPO], char *[], char *[]);
													
main()												
{
	char *suit[PALO] = {"Hearts", "Diamonds", "Clubs", "Spades"};
	char *face[TIPO] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
					    "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
	char deck[PALO][TIPO] = {0}; //El mazo es del tipo char para optimizar memoria
	
	srand(time(NULL));
	
	shuffleAndDeal(deck, face, suit);
		
	system("PAUSE");
	return 0;
}

void shuffleAndDeal(char deck[][TIPO], char *face[], char *suit[])
{
	char card, row, column, card2, row2, column2;
	
	for(card = 1; card <= 52; card++)
	{
		row = rand() % 4;
		column = rand() % 13;
		
		while(deck[row][column] != 0)
		{
			row = rand() % 4;
			column = rand() % 13;
		}
		
		deck[row][column] = card;
		
		for(row2 = 0; row2 <= PALO - 1; row2++)
		{
			for(column2 = 0; column2 <= TIPO - 1; column2++)
			{
				if(deck[row2][column2] == card && deck[row2][column2] <= 5)
					printf("%5s of %-8s\n", face[column2], suit[row2]);
			}
		}
	}
}
