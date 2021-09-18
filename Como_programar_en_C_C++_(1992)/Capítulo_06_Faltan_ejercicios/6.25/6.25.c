/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Talita
	Date: 11/09/21 09:07
	Description: 6.25. (Recorrido del caballo: enfoques de fuerza bruta). En el ejercicio 6.24 
	desarrollamos una soluci�n al programa del recorrido del caballo. El enfoque utilizado, conocido 
	como "heur�stica de accesibilidad", genera muchas soluciones y se ejecuta con eficiencia.
	Conforme las computadoras siguen aumentando en potencia, seremos capaces de resolver muchos 
	problemas a base del simple poder de la computadora y utilizando algoritmos relativamente poco
	complicados. Llam�mosle a este enforque la soluci�n de problemas de "fuerza bruta".
		
		a) Utilice la generaci�n de numeros aleatorios para permitir que el caballo se desplace sobre 
		el tablero de ajedrez (en movimientos leg�timos en forma de L, naturalmente) en forma 
		aleatoria. Su programa deber�a ejecutar un recorrido e imprimir el tablero de ajedres final. 
		Qu� tan lejos lleg� el caballo?
		
		b) Lo m�s probable es que el programa anterior produjo un recorrido relativamente corto. Ahora
		modifique su programa para intentar  1000 recorridos. Utilice un arreglo de un solo sub�ndice 
		para llevar el control del n�mero de recorridos de cada longitud. Cuando su programa termine 
		el intento de 1000 recorridos, deber� imprimir esta informaci�n en su formato tabular n�tido. 
		Cu�l fue el resultado mejor?
		
		c) Lo m�s probable, es que el programa anterior le di� algunos recorridos "respetables" pero 
		ning�n recorrido completo. Ahora, "quite todas las amarras" y deje s�o que su programa se 
		ejecute hasta que produzca un recorrido completo. (Precauci�n:  esta versi�n del programa 
		podr�a ejecutarse durante horas en una computadora poderosa). Aqu� otra vez, lleve una tabla 
		del n�mero de recorridos de cada longitud, e imprima esta tabla cuando se encuentre el primer
		recorrido completo. Cu�ntos recorridos tuvo que intentar su programa antes de producir un 
		recorrido completo? Cu�nto tiempo lle tom�?
		
		d) Compare la versi�n de fuerza bruta del recorrido de caballo con la versi�n de la heur�stica
		de accesibilidad. Cu�l requiri� un estudio m�s cuidadoso del problema? Qu� algoritmo fue m�s 
		dif�cil de desarrollar? Cu�l requiri� de m�s potencia de la computadora? Podr�amos estar 
		seguros (por anticipado) de poder llegar a obtener un recorrido competo con el enfoque 
		heur�stico de accesibilidad? Pod�amos estar seguros (con anticipaci�n) de obtener un recorrido 
		completo con el enforque de fuerza bruta? Discuta los pros y los contras de la resoluci�n en 
		general de problemas por fuerza bruta.
*/			

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define FILAS 8
#define COLUMNAS 8
#define TEST 1000

void impTablero(const short[][COLUMNAS], const short, const short);
void impRecord(const short [], const short);

/*
	1. El tablero de ajedrez puede ser declarado con el tipo de dato "char"; ya que el n�mero mayor 
		almacenado en cada elemento del tablero ser� 64, y el tipo char almacena n�meros hasta 127
*/
main()
{
	short board[FILAS][COLUMNAS] = {0}, horizontal[FILAS] = {2, 1, -1, -2, -2, -1, 1, 2},
			vertical[COLUMNAS] = {-1, -2, -2, -1, 1, 2, 2, 1}, currentRow, currentColumn,
			moveNumber, contador = 0, record[FILAS] = {0};
	
	srand(time(NULL));
	
	/* Pide las coordenadas de la posici�n inicial del caballo */
	printf("Necesito la posicion inicial del caballo.\n");
	printf("Entre la posicion horizontal en el tablero (0-7): ");
	do{
		scanf("%hd", &currentRow);
		
		if(currentRow < 0 || currentRow > 7)
			printf("Valor fuera de los limites del tablero, intente de nuevo: ");
	}while(currentRow < 0 || currentRow > 7);
	
	printf("Entre la posicion vertical en el tablero (0-7): ");
	do{
		scanf("%hd", &currentColumn);
		
		if(currentColumn < 0 || currentColumn > 7)
			printf("Valor fuera de los limites del tablero, intente de nuevo: ");
	}while(currentColumn < 0 || currentColumn > 7);
	
	board[currentRow][currentColumn]	= 1;
	/*******************************************************************/
	
	/* Ejecuta los 64 movimientos del caballo */
	
	/* Para el insciso b)
	for(contador = 2; contador <= TEST; contador++)
	{
	*/
		do{ /* Es para el insciso c)*/
			/* Entra un valor para moverse (0 - 7) */
			moveNumber = rand() % 8;
			/*******************************************************/
			++record[moveNumber]; /* insciso b) */
			/* Ejecutar y verificar si el movimiento del caballo esta correcto */
			currentRow += vertical[moveNumber];
			currentColumn += horizontal[moveNumber];
		
			if(currentRow < 0 || currentRow > 7 || currentColumn < 0 || currentColumn > 7)
			{
				currentRow -= vertical[moveNumber];
				currentColumn -= horizontal[moveNumber];
			}
			else if(board[currentRow][currentColumn] != 0)
			{
				currentRow -= vertical[moveNumber];
				currentColumn -= horizontal[moveNumber];
			}
			else
			{
				/* Insciso c) */
				board[currentRow][currentColumn] = 1;
				++contador;
				/***********/
				/* para insciso b)
				board[currentRow][currentColumn] = contador;
				*/
			}
		}while(contador < 64); /* Es para el insciso c)*/
		/********************************************************/
	/*} para insciso b) */
	impTablero(board, FILAS, COLUMNAS);
	impRecord(record, FILAS);

   system("PAUSE");
   return 0;
}

/* Imprime el tablero de ajedrez */
void impTablero(const short tablero[][COLUMNAS], const short filas, const short columnas)
{
	register short i, j;
	
	printf("\n******************************************\n");
	printf("*                TABLERO                 *\n");
	printf("******************************************\n");
	
	for(i = 0; i <= filas - 1; i++)
	{
		printf("%7c", ' ');
		for(j = 0; j <= columnas - 1; j++)
			printf("%2hd  ", tablero[i][j]);
		putchar('\n');
	}
	printf("******************************************\n");
}

void impRecord(const short record[], const short tam)
{
	register short i;
	
	printf("\n******************************************\n");
	printf("*               Frecuencia               *\n");
	printf("******************************************\n");
	
	printf("%s%13s\n", "Movimiento", "Frecuencia");
	for(i = 0; i <= tam - 1; i++)
	{
		printf("%10hd%13hd ", i, record[i]);
		putchar('\n');
	}
	printf("******************************************\n");
}

/*
	d) - La heur�stica de accesibilidad llev� un estudio m�s cuidadoso.
		- La heur�stica de accesibilidad fue mas dif�cil de desarrollar.
		- El algoritmo de fuerza bruta requisi� de m�s recursos de la computadora
		- Podemos estar muy seguros que se llegar� a un recorrido completo en la heur�stica de 
		  accesibilidad
		- No podemos estar muy seguros que se llegar� a un recorrido completo en la fuerza bruta.
*/

/*
	Nota: el insciso c) esta activado en la programaci�n, por lo que un resultado puede llevar horas
*/
