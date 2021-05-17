/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 18/04/20 11:17
	Description: 7.13. Utilice las funciones desarrolladas en el ejercicio 7.12,
	para escribir un programa que distribuya dos manos de póker de 5 naipes, 
	evalúe cada una de las manos, y determine cual es la mejor.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define PALO 4
#define TIPO 13
#define MANOS 6

void imprimir_deck(const char [][TIPO]);	// OK (deck)
void shuffle(char [][TIPO]);	// OK (deck) ...
void deal(const char [][TIPO], char *[], char *[], const short *const, char *); // OK (deck, face, suit, *carta_inicial); Nota: Da error al poner const en los dos char.
char cant_par(const char [][TIPO], char, const short *const); // (deck, carta_inicial, barajas); Debuelve la cantidad de pares que hay en la mano.				 
char cant_tipo(const char [][TIPO], char, const short *const);	// (deck, carta_inicial, *barajas); Debuelve la cantidad de barajas de un mismo tipo mayor que tres.
char color(const char [][TIPO], char, const short *const);	// (deck, carta_inicial, *barajas); Debuelve 1 si hay un color.
char flor_imperial(const char [][TIPO], char, const short *const); // (deck); Debuelve 1 si hay una flor imperial.
void datos(char [][MANOS], const char *const, char (*[])(const char [][TIPO], char, const short *const), const char [][TIPO], char, const short *const);	//  (record, (*funcion[])); 
void ganador(const char [][MANOS], const short *const);	//  (record, jugadores)
													
main()												
{
	char *suit[PALO] = {"Hearts", "Diamonds", "Clubs", "Spades"};
	char *face[TIPO] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
					    "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
	char deck[PALO][TIPO] = {0}, i, carta_inicial; //El mazo es del tipo char para optimizar memoria
	short barajas, jugadores;
	char (*funcion[MANOS])(const char [][TIPO], char, const short *const) = {cant_par, cant_tipo, color, flor_imperial};
	
	srand(time(NULL));
	shuffle(deck); 
	
	printf("Cuantos jugadores son: ");
	scanf("%hd", &jugadores);
	printf("Cuantas barajas desea repartir por jugador: ");
	scanf("%hd", &barajas);
	
	char record[jugadores][MANOS] = {0};
	
	for(i = 1; i <= jugadores; i++)
	{
		printf("\nJugador %d:\n", i);
		deal(deck, face, suit, &barajas, &carta_inicial);
		datos(record, &i,  funcion, deck, carta_inicial, &barajas);
	}
	
	ganador(record, &jugadores);
	
	system("PAUSE");
	return 0;
}

void imprimir_deck(const char deck[][TIPO]) // OK
{
	char fila, columna;
	
	printf("******************************************\n");
	printf("* %19s                    *\n", "DECK");
	printf("******************************************\n");
	for(fila = 0; fila <= PALO - 1; fila++)
	{
		putchar('*');
		for(columna = 0; columna <= TIPO - 1; columna++)
			printf(" %2hd", deck[fila][columna]);
		printf(" *\n");
	}
	printf("******************************************\n");
}

void shuffle(char deck[][TIPO])	// OK ...
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

void deal(const char deck[][TIPO], char *face[], char *suit[], const short *const barajas, char *carta_inicial)
{
	char row, column, memoria;
	static char card = 1;
	
	*carta_inicial = card;
	
	for(memoria = card; card <= memoria + *barajas - 1; card++)
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

char cant_par(const char deck[][TIPO], char carta_inicial, const short *const barajas)		// Un par es: dos cartas del mismo 
{																							// palo y tres cartas desempardas.
	char cant_palo[PALO] = {0}, i, j, pares = 0, contador = 0, memoria;
	
	for(memoria = carta_inicial; carta_inicial <= memoria + *barajas - 1; carta_inicial++)
	{
		for(i = 0; i <= PALO - 1; i++)
		{
			for(j = 0; j <= TIPO - 1; j++)
			{	
				if(deck[i][j] == carta_inicial)
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

char cant_tipo(const char deck[][TIPO], char carta_inicial, const short *const barajas)	// Tres de un tipo: tres cartas del mismo tipo y dos de un tipo diferente.
{																						// Cuatro de un tipo: cuatro cartas del mismo tipo y uno de un tipo diferente.
	char cant_tipo[TIPO] = {0}, i, j, tipos3 = 0, contador = 0;
	char tipos4 = 0, memoria;
	
	for(memoria = carta_inicial; carta_inicial <= memoria + *barajas - 1; carta_inicial++)
	{
		for(i = 0; i <= PALO - 1; i++)
		{
			for(j = 0; j <= TIPO - 1; j++)
			{	
				if(deck[i][j] == carta_inicial)
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

char color(const char deck[][TIPO], char carta_inicial, const short *const barajas)		// Color es: cinco cartas del mismo palo.
{
	char cant_palo[PALO] = {0}, i, j, memoria;
	
	for(memoria = carta_inicial; carta_inicial <= memoria + *barajas - 1; carta_inicial++)
	{
		for(i = 0; i <= PALO - 1; i++)
		{
			for(j = 0; j <= TIPO - 1; j++)
			{	
				if(deck[i][j] == carta_inicial)
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

char flor_imperial(const char deck[][TIPO], char carta_inicial, const short *const barajas)	// Flor imperial es:  cinco cartas de mayor valor en tipo consecutivas y del mismo palo
{
	char i, j, consecutivos = 0, memoria;
	
	if(color(deck, carta_inicial, barajas))
	{
		for(memoria = carta_inicial; carta_inicial <= memoria + *barajas - 1; carta_inicial++)
		{
			for(i = 0; i <= PALO - 1; i++)
			{
				for(j = 0; j <= TIPO - 1; j++)
				{
					if(deck[i][j] == carta_inicial)
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

void datos(char record[][MANOS], const char *const jugador, char(*funcion[])(const char [][TIPO], char, const short *const), const char deck[][TIPO], char carta_inicial, const short *const barajas)
{	
	if((*funcion[0])(deck, carta_inicial, barajas) == 1)
		record[*jugador - 1][0] = 1;
	
	if((*funcion[0])(deck, carta_inicial, barajas) == 2)	
		record[*jugador - 1][1] = 1;
	
	if((*funcion[1])(deck, carta_inicial, barajas) == 3)
		record[*jugador - 1][2] = 1;
	
	if((*funcion[1])(deck, carta_inicial, barajas) == 4)
		record[*jugador - 1][3] = 1;
	
	if((*funcion[2])(deck, carta_inicial, barajas) == 1)
		record[*jugador - 1][4] = 1;
	
	if((*funcion[3])(deck, carta_inicial, barajas) == 1)
		record[*jugador - 1][5] = 1;
}

void ganador(const char record[][MANOS], const short *const jugadores)
{
	char mayor = -1, indice, i, j;
	
	for(i = 0; i <= *jugadores - 1; i++)
	{
		for(j = 0; j <= MANOS - 1; j++)
		{
			if(record[i][j] == 1)
			{
				if(mayor < j)
				{
					mayor = j;
					indice = i;
				}
			}
		}
	}
	
	printf("**************************************\n");
	printf("El mejor es el jugador %d.\n", indice + 1);
	printf("**************************************\n");
}
