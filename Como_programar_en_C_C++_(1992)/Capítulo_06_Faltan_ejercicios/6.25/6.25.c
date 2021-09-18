/*
	Author: Rolando Docampo Fernández
	Place: Casa de Talita
	Date: 11/09/21 09:07
	Description: 6.25. (Recorrido del caballo: enfoques de fuerza bruta). En el ejercicio 6.24 
	desarrollamos una solución al programa del recorrido del caballo. El enfoque utilizado, conocido 
	como "heurística de accesibilidad", genera muchas soluciones y se ejecuta con eficiencia.
	Conforme las computadoras siguen aumentando en potencia, seremos capaces de resolver muchos 
	problemas a base del simple poder de la computadora y utilizando algoritmos relativamente poco
	complicados. Llamémosle a este enforque la solución de problemas de "fuerza bruta".
		
		a) Utilice la generación de numeros aleatorios para permitir que el caballo se desplace sobre 
		el tablero de ajedrez (en movimientos legítimos en forma de L, naturalmente) en forma 
		aleatoria. Su programa debería ejecutar un recorrido e imprimir el tablero de ajedres final. 
		Qué tan lejos llegó el caballo?
		
		b) Lo más probable es que el programa anterior produjo un recorrido relativamente corto. Ahora
		modifique su programa para intentar  1000 recorridos. Utilice un arreglo de un solo subíndice 
		para llevar el control del número de recorridos de cada longitud. Cuando su programa termine 
		el intento de 1000 recorridos, deberá imprimir esta información en su formato tabular nítido. 
		Cuál fue el resultado mejor?
		
		c) Lo más probable, es que el programa anterior le dió algunos recorridos "respetables" pero 
		ningún recorrido completo. Ahora, "quite todas las amarras" y deje sóo que su programa se 
		ejecute hasta que produzca un recorrido completo. (Precaución:  esta versión del programa 
		podría ejecutarse durante horas en una computadora poderosa). Aquí otra vez, lleve una tabla 
		del número de recorridos de cada longitud, e imprima esta tabla cuando se encuentre el primer
		recorrido completo. Cuántos recorridos tuvo que intentar su programa antes de producir un 
		recorrido completo? Cuánto tiempo lle tomó?
		
		d) Compare la versión de fuerza bruta del recorrido de caballo con la versión de la heurística
		de accesibilidad. Cuál requirió un estudio más cuidadoso del problema? Qué algoritmo fue más 
		difícil de desarrollar? Cuál requirió de más potencia de la computadora? Podríamos estar 
		seguros (por anticipado) de poder llegar a obtener un recorrido competo con el enfoque 
		heurístico de accesibilidad? Podíamos estar seguros (con anticipación) de obtener un recorrido 
		completo con el enforque de fuerza bruta? Discuta los pros y los contras de la resolución en 
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
	1. El tablero de ajedrez puede ser declarado con el tipo de dato "char"; ya que el número mayor 
		almacenado en cada elemento del tablero será 64, y el tipo char almacena números hasta 127
*/
main()
{
	short board[FILAS][COLUMNAS] = {0}, horizontal[FILAS] = {2, 1, -1, -2, -2, -1, 1, 2},
			vertical[COLUMNAS] = {-1, -2, -2, -1, 1, 2, 2, 1}, currentRow, currentColumn,
			moveNumber, contador = 0, record[FILAS] = {0};
	
	srand(time(NULL));
	
	/* Pide las coordenadas de la posición inicial del caballo */
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
	d) - La heurística de accesibilidad llevó un estudio más cuidadoso.
		- La heurística de accesibilidad fue mas difícil de desarrollar.
		- El algoritmo de fuerza bruta requisió de más recursos de la computadora
		- Podemos estar muy seguros que se llegará a un recorrido completo en la heurística de 
		  accesibilidad
		- No podemos estar muy seguros que se llegará a un recorrido completo en la fuerza bruta.
*/

/*
	Nota: el insciso c) esta activado en la programación, por lo que un resultado puede llevar horas
*/
