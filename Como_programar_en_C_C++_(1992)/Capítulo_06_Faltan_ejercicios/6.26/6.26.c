 /*
	Author: Rolando Docampo Fernández
	Place: Casa de Talita
	Date: 11/09/21 09:07
	Description: 6.26. (Las ocho reinas). Otro acertijo para aficionados al ajedrez es el problema de 
	las ocho reinas. Dicho simplemente: es o no posible colocar ocho reinas en un tablero de ajedrez 
	vacío, de tal forma que ninguna reina esté atacando a ninguna otra, esto es de tal forma que, 
	ningún par de reinas estén en el mismo renglón, la misma columna o a lo largo de la misma 
	diagonal. Utilice el tipo de proceso mental desarrolado en el ejercicio 6.24 para formular una 
	heurística para resover e problema de las ocho reinas. Ejecute su programa. (Sugerencia: es 
	posible asignar un valor numérico a cada casilla del tablero, indicando cuántas casillas son 
	"eliminadas" de un tablero vacío, una vez que se ha colocado una reina en dicha casilla. Por 
	ejemplo, a cada una de las cuatro esquinas deberá asignársele el valor 22, como en la figura 
	6.25).
		Una vez que esos "númerosde eliminación" son colocados en las 64 casillas, la heurística 
		apropiada podría ser: coloque la reina siguiente en la casilla con el número de eliminación 
		más pequeño. Por qué es de forma intuitiva atrayente esta estrategia?
*/			

#include<stdio.h>
#include<stdlib.h>
#define FILAS 8
#define COLUMNAS 8

void imprimir(const short [][COLUMNAS], const short, const short); /*ok*/
void eliminar_casillas(short [][COLUMNAS], const short, const short, const short, const short);   /*ok*/
void update(short [][COLUMNAS], const short, const short); /*ok*/
void copiar(short [][COLUMNAS], const short [][COLUMNAS], const short, const short); /*ok*/
void iniciar(short [][COLUMNAS], const short, const short); /*ok*/

main()
{
	short tablero[FILAS][COLUMNAS] = {0}, currentRow, currentColumn, alcance_copia[FILAS][COLUMNAS], 
			alcance[FILAS][COLUMNAS] = {{22, 22, 22, 22, 22, 22, 22, 22},
												 {22,	24, 24, 24, 24, 24, 24, 22},
												 {22, 24, 26, 26, 26, 26, 24, 22},
												 {22, 24, 26, 28, 28, 26, 24, 22},
												 {22, 24, 26, 28, 28, 26, 24, 22},
												 {22, 24, 26, 26, 26, 26, 24, 22},
												 {22, 24, 24, 24, 24, 24, 24, 22},
												 {22, 22, 22, 22, 22, 22, 22, 22}};
	short i, j, r, menor, solucion = 0, alcance_copia2[FILAS][COLUMNAS];
	
	copiar(alcance_copia, alcance, FILAS, COLUMNAS);
	copiar(alcance_copia2, alcance, FILAS, COLUMNAS); 
	
	do{
		copiar(alcance, alcance_copia2,  FILAS, COLUMNAS);
		iniciar(tablero, FILAS, COLUMNAS);
		/* Busca una solucion */											 		
		for(r = 1; r <= 8; r++)
		{
			for(i = 0, menor = 29; i <= FILAS - 1; i++)
			{
				for(j = 0; j <= COLUMNAS - 1; j++)
				{
					if((r == 1) && (alcance_copia[i][j] == 30))
						continue;
					else if((menor > alcance[i][j]) && (alcance[i][j] != -1))
					{
						menor = alcance[i][j];
						currentRow = i;
						currentColumn = j;
					}
				}
			}
			
			if(r == 1)
				alcance_copia[currentRow][currentColumn] = 30;
			
			if(tablero[currentRow][currentColumn] == 0)
			{
				tablero[currentRow][currentColumn] = r;
				eliminar_casillas(alcance, currentRow, currentColumn, FILAS, COLUMNAS);
				update(alcance, FILAS, COLUMNAS);
				
				if(r == 8)
					solucion = 1;
			}
			else
				break;		
		} 
	}while(solucion == 0);
	/**************/
	imprimir(tablero, FILAS, COLUMNAS);
	
	system("PAUSE");
	return 0;
}

/* Cancela las casillas atacadas por las reinas */
void eliminar_casillas(short alcance[][COLUMNAS], const short x, const short y, const short fila, 
							  const short columna)
{
	short cordx = x, cordy = y, i, movx, movy;
	
	for(i = 0; i <= fila - 1; i++)
	{
		if(alcance[i][y] != 0 && alcance[i][y] != -1)
			alcance[i][y] = -1;
		
		if(alcance[x][i] != 0 && alcance[x][i] != -1)
			alcance[x][i] = -1;
	}
	
	for(i = 1; i <= 4; i++)
	{
		switch(i)
		{
			case 1:
				movx = 1;
				movy = -1;
				break;
			case 2:
				movx = 1;
				movy = 1;
				break;
			case 3:
				movx = -1;
				movy = 1;
				break;
			case 4:
				movx = -1;
				movy = -1;
				break;
		}
		
		do
		{
			cordx += movx;
			cordy += movy;
			
			if((cordx >= 0 && cordx <= 7) && (cordy >= 0 && cordy <= 7))
				alcance[cordx][cordy] = -1;
			
		}while((cordx >= 0 && cordx <= 7) && (cordy >= 0 && cordy <= 7));
		
		cordx = x;
		cordy = y;
	}
}

/* Imprime el tablero de ajedrez */
void imprimir(const short tablero[][COLUMNAS], const short fila, const short columna)
{
	register short i, j;
	
	printf("\n******************************************\n");
	printf("*                TABLERO                 *\n");
	printf("******************************************\n");
	
	for(i = 0; i <= fila - 1; i++)
	{
		printf("%6c", ' ');
		for(j = 0; j <= columna - 1; j++)
			printf("%2hd  ", tablero[i][j]);
		putchar('\n');
	}
	printf("******************************************\n");
}

void update(short alcance[][COLUMNAS], const short fila, const short columna)
{
	short i, j, k, total, movx, movy, cordx, cordy;
	
	for(i = 0; i <= fila - 1; i++)
	{
		for(j = 0; j <= columna - 1; j++)
		{
			
			if(alcance[i][j] != -1)
			{
				total = 0;
				
				for(k = 0; k <= fila - 1; k++)
				{
					if(alcance[k][j] != -1)
						++total;		
						
					if(alcance[i][k] != -1)
						++total;			
				}
				
				for(k = 1; k <= 4; k++)
				{
					cordx = i;
					cordy = j;
					
					switch(k)
					{
						case 1:
							movx = 1;
							movy = -1;
							break;
						case 2:
							movx = 1;
							movy = 1;
							break;
						case 3:
							movx = -1;
							movy = 1;
							break;
						case 4:
							movx = -1;
							movy = -1;
							break;
					}
					
					do
					{
						cordx += movx;
						cordy += movy;
						
						if((cordx >= 0 && cordx <= 7) && (cordy >= 0 && cordy <= 7))
						{
							if(alcance[cordx][cordy] != -1)
								++total;	
						}
							
					}while((cordx >= 0 && cordx <= 7) && (cordy >= 0 && cordy <= 7));
				}
				alcance[i][j] = total - 1;
			}
		}
	}
}

void copiar(short copia[][COLUMNAS], const short original[][COLUMNAS], const short fila, 
				const short columna)
{
	short i, j;
	
	for(i = 0; i <= fila - 1; i++)
	{
		for(j = 0; j <= columna - 1; j++)
			copia[i][j] = original[i][j];
	}
}

void iniciar(short tablero[][COLUMNAS], const short fila, const short columna)
{
	short a[8][8] = {0};
	
	copiar(tablero, a, fila, columna);
}
