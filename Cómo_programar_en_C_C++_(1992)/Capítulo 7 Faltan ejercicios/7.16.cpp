/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Marcia 
	Date: 19/04/20 15:27
	Description: 7.16. En el programa de barajar y distribuir naipes de la 
	figura 7.24, intencionalmente utilizamos un algoritmo de barajar ineficiente,
	que introducia la posibilidad de posposici�n indefinida. En este problema, 
	usted crear� un algoritmo de barajar de alto rendimiento, que elimine la 
	posposici�n indefinida. 
	Modifique el programa de la figura 7.24 como sigue. Empiece inicializando el
	arreglo deck como se muestra en la figura 7.29. Modifique la funci�n shuffle
	para ciclar, rengl�n por rengl�n y columna por columna, a trav�s del arreglo,
	tocando cada elemento una vez. Cada elemento deber� ser intercambiado con un
	elemento elegido al azar del arreglo. Imprima el arreglo resultante para 
	determinar si el mazo ha sido barajado de manera satisfactoria (como en la 
	figura 7.30, por ejemplo). Posiblemente desee que su programa llame varias 
	veces a la funci�n shuffle, para asegurarse que se ha barajado correctamente.
	Note que, a pesar que el enfoque en este programa mejora el algoritmo de 
	barajar, el algoritmo de repartir todav�a requiere buscar en el arreglo deck
	el naipe 1, a continuaci�n el naipe 2, y en sequida el naipe 3, y as� en lo
	sucesivo. Y lo que es a�n peor, a�n despu�s de que el algoritmos de 
	distribuci�n localiza y reparte el naipe, el algoritmo sigue buscando a 
	trav�s del resto del mazo. Modifique el programa de la figura 7.24, de tal
	forma que una vez que se haya distribuido un naipe, no se hagan intentos 
	posteriores para hacer coincidir este n�mero de naipe, y el programa 
	contin�e de inmediato con la distribuci�n del naipe siguiente. En el 
	cap�tulo 10 desarrollamos un algoritmo de reparto de naipes, que requiere
	de una operaci�n por cada naipe.
	
		0	1	2	3	4	5	6	7	8	9	10	11	12
	------------------------------------------------------
	0 | 1	2	3	4	5	6	7	8	9	10	11	12	13
	1 | 14	15	16	17	18	19	20	21	22	23	24	25	26
	2 | 27	28	29	30	31	32	33	34	35	36	37	38	39
	3 | 40	41	42	43	44	45	46	47	48	49	50	51	52
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define PALO 4
#define TIPO 13

void imprimir_deck(const char [][TIPO]);	// OK (deck)
void shuffle(char [][TIPO]);
void deal(const char [][TIPO], char *[], char *[]); // OK (deck, face, suit); Nota: Da error al poner const en los dos char.

													
main()												
{
	char *suit[PALO] = {"Hearts", "Diamonds", "Clubs", "Spades"};
	char *face[TIPO] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
					    "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
	char deck[PALO][TIPO] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11, 12, 13},
						     {14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26},
							 {27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39},
							 {40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52}};
	
	srand(time(NULL));
	
	imprimir_deck(deck);
	shuffle(deck);
	imprimir_deck(deck);
	shuffle(deck);
	deal(deck, face, suit);
	
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

void shuffle(char deck[][TIPO])
{
	char i, j, row, column, memoria;
	
	for(i = 0; i <= PALO - 1; i++)
	{
		for(j = 0; j <= TIPO - 1; j++)
		{
			row = rand() % 4;
			column = rand() % 13;
		
			while(row == i && column == j)
			{
				row = rand() % 4;
				column = rand() % 13;	
			}
			
			memoria = deck[i][j];
			deck[i][j] = deck[row][column];
			deck[row][column] = memoria;
		}
	}
}

void deal(const char deck[][TIPO], char *face[], char *suit[])
{
	char card, row, column, salida = 0;
	
	for(card = 1; card <= 5; card++)
	{
		for(row = 0; row <= PALO - 1; row++)
		{
			for(column = 0; column <= TIPO - 1; column++)
			{
				if(deck[row][column] == card)
				{
					printf("%5s of %-8s\n", face[column], suit[row]);
					salida = 1;
					break;	
				}
			}
			
			if(salida == 1)
			{
				salida = 0;
				break;
			}
		}
	}	
}
