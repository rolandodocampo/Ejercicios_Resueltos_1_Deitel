/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 16/04/20 09:59
	Description: 7.12. Modifique el programa de la figura 7.24, de tal forma que
	la función de distribución de naipes reparta una mano de póker de cinco 
	naipes. A continuación escriba las funciones adicionales siguientes:
		a) Determine si la mano contiene un par.
		b) Determine si la mano contiene dos pares.
		c) Determine si la mano contiene tres de un tipo (es decir, por ejemplo
		tres jacks).
		d) Determine si la mano contiene cuatro de un tipo (por ejemplo, cuatro
		ases).
		e) Determine si la mano contiene un color (es decir, todos los cinco 
		naipes del mismo palo).
		f) Determine si la mano contiene una flor imperial(es decir, cinco 
		naipes de valores nominales consecutivos).
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define PALO 4
#define TIPO 13

void imprimir_deck(const char [][TIPO]);	/* OK (deck) */
void shuffle(char [][TIPO]);	/* OK (deck) ... */
void deal(const char [][TIPO], const char *[], const char *[]); /* OK (deck, face, suit)*/
char cant_par(const char [][TIPO]); /* OK (deck); Debuelve la cantidad de pares que hay en la mano. */				 
char cant_tipo(const char [][13]);	/* OK (deck); Debuelve la cantidad de barajas de un mismo tipo mayor que tres. */
char color(const char [][13]);	/* OK (deck); Debuelve 1 si hay un color. */
char flor_imperial(const char [][13]); /* OK (deck); Debuelve 1 si hay una flor imperial. */
													
main()												
{
	char *suit[PALO] = {"Hearts", "Diamonds", "Clubs", "Spades"};
	char *face[TIPO] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
					    	  "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
	char deck[PALO][TIPO] = {0}; /* El mazo es del tipo char para optimizar memoria */
	
	srand(time(NULL));
	imprimir_deck(deck);
	shuffle(deck); 			/*...: eso significa que hay que optimizarla más*/
	imprimir_deck(deck);
	deal(deck, face, suit);
	printf("\nLa cantidad de pares es: %d\n", cant_par(deck));	
	printf("La cantidad de tipos es: %d\n", cant_tipo(deck));
	printf("Hay un color: %d\n", color(deck));
	printf("Hay una flor imperial: %d\n", flor_imperial(deck));
	
	system("PAUSE");
	return 0;
}

void imprimir_deck(const char deck[][TIPO]) /* OK */
{
	char fila, columna;
	
	printf("******************************************\n");
	printf("* %19s                    *\n", "DECK");
	printf("******************************************\n");
	for(fila = 0; fila <= PALO - 1; fila++)
	{
		putchar('*');
		for(columna = 0; columna <= TIPO - 1; columna++)
			printf(" %2d", deck[fila][columna]);
		printf(" *\n");
	}
	printf("******************************************\n");
}

void shuffle(char deck[][TIPO])	/* OK ... */
{
	char card, row, column;
	
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
	}
}

void deal(const char deck[][TIPO], const char *face[], const char *suit[])
{
	int card, row, column;
	
	for(card = 1; card <= 5; card++)
	{
		for(row = 0; row <= PALO - 1; row++)
		{
			for(column = 0; column <= TIPO - 1; column++)
			{
				if(deck[row][column] == card)
					printf("%5s of %-8s\n", face[column], suit[row]);
			}
		}
	}	
}

char cant_par(const char deck[][TIPO])		/* Un par es: dos cartas del mismo */
{											/* palo y tres cartas desempardas. */
	char cant_palo[PALO] = {0}, i, j, pares = 0, card, contador = 0;
	
	for(card = 1; card <= 5; card++)
	{
		for(i = 0; i <= PALO - 1; i++)
		{
			for(j = 0; j <= TIPO - 1; j++)
			{	
				if(deck[i][j] == card)
					++cant_palo[i];
			}
		}
	}
		
	for(i = 0; i <= PALO - 1; i++)
	{
		if(cant_palo[i] == 2)
			++pares;
		else if(cant_palo[i] == 1)
			++contador;
	}
	
	if(pares == 1 && contador == 3)
		return 1;
	else if(pares == 2)
		return 2;
	else
		return 0;
}

char cant_tipo(const char deck[][13])	/* Tres de un tipo: tres cartas del mismo tipo y dos de un tipo diferente. */
{												 /* Cuatro de un tipo: cuatro cartas del mismo tipo y uno de un tipo diferente. */
	char cant_tipo[TIPO] = {0}, i, j, tipos3 = 0, card, contador = 0;
	char tipos4 = 0;
	
	for(card = 1; card <= 5; card++)
	{
		for(i = 0; i <= PALO - 1; i++)
		{
			for(j = 0; j <= TIPO - 1; j++)
			{	
				if(deck[i][j] == card)
					++cant_tipo[j];
			}
		}
	}
		
	for(i = 0; i <= TIPO - 1; i++)
	{
		if(cant_tipo[i] == 3)
			++tipos3;
		else if(cant_tipo[i] == 4)
			++tipos4;
		else if(cant_tipo[i] == 1)
			++contador;
	}
	
	if(tipos3 == 1 && contador == 2)
		return 3;
	else if(tipos4 == 1)
		return 4;
	else
		return 0;
}

char color(const char deck[][13])		/* Color es: cinco cartas del mismo palo. */
{
	char cant_palo[PALO] = {0}, i, j, card;
	
	for(card = 1; card <= 5; card++)
	{
		for(i = 0; i <= PALO - 1; i++)
		{
			for(j = 0; j <= TIPO - 1; j++)
			{	
				if(deck[i][j] == card)
					++cant_palo[i];
			}
		}
	}
		
	for(i = 0; i <= PALO - 1; i++)
	{
		if(cant_palo[i] == 5)
			return 1;
	}
	
	return 0;
}

char flor_imperial(const char deck[][13])	/* Flor imperial es:  cinco cartas de mayor valor en tipo consecutivas y del mismo palo */
{
	char card, i, j, consecutivos = 0;
	
	if(color(deck))
	{
		for(card = 1; card <= 5; card++)
		{
			for(i = 0; i <= PALO - 1; i++)
			{
				for(j = 0; j <= TIPO - 1; j++)
				{
					if(deck[i][j] == card)
					{
						switch(j)
						{
							case 0: case 12: case 11: case 10: case 9:
								++consecutivos;
								break;
						}
					}
				}
			}
		}
		
		if(consecutivos == 5)
			return 1;
	}
	
	return 0;
}
