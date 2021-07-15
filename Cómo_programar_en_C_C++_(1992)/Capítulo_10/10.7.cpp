/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 10/05/20 16:46
	Description: 10.7. Modifique el programa de la figura 10.16 para barajar las
	cartas utilizando un algoritmo de barajar de alto rendimiento (como se 
	muestra en la figura 10.3). Imprima el mazo resultante en un formato de dos
	columnas, como en la figura 10.4. Anteceda cada carta con su color.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct bitCard{
	unsigned face : 4;
	unsigned suit : 2;
	unsigned color : 1;
};
typedef struct bitCard Card;

void filldeck(Card *);
void shuffle(Card *);
void deal(Card *, char *[], char *[], char *[]);

main()
{
	Card deck[52];
	char *face[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
					"Eigth", "Nine", "Ten", "Jack", "Queen", "King"},
		 *suit[] = {"Hearts", "Diamonds", "Cluns", "Spades"},
		 *color[] = {"Rojo", "Negro"};
		
	srand(time(NULL));
	filldeck(deck);
	shuffle(deck);
	deal(deck, face, suit, color);
	
    system("PAUSE");
    return 0;
}

void filldeck(Card *wDeck)
{
	int i;
	
	for(i = 0; i <= 51; i++)
	{
		wDeck[i].face = i % 13;
		wDeck[i].suit = i / 13;
		wDeck[i].color = i / 26;
	}
}

void deal(Card *wDeck, char *face[], char *suit[], char *color[])
{
	char i;
	
	for(i = 0; i <= 51; i++)
	{
		printf("%5s of %-8s %-5s", face[wDeck[i].face], suit[wDeck[i].suit], 
				color[wDeck[i].color]);
		
		if((i + 1) % 2 == 0)
			printf("\n");
		else
			printf("\t\t");
	}
	
}

void shuffle(Card *wDeck)
{
	Card temporal;
	int i, j;
	
	for(i = 0; i <= 51; i++)
	{
		j = rand() % 52;
		
		temporal = wDeck[j];
		wDeck[j] = wDeck[i];
		wDeck[i] = temporal;
	}
}
