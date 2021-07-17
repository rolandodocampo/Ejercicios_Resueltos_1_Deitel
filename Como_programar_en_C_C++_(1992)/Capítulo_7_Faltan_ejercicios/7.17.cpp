/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Marcia 
	Date: 20/04/20 08:59
	Description: 7.17. (Simulaci�n la liebre y la tortuga). En este problema 
	recrear� uno de los grandes momentos de la historia, la carrera cl�sica 
	entre la liebre y la tortuga. Utilizar� una generaci�n de n�meros aleatorios
	para desarrollar una simulaci�n de este evento memorable. 
		Nuestros contendientes empiezan la carrera en el "cuadro 1" de 70 
	"cuadros". Cada cuadro representa una posici�n posible a lo largo de la 
	carrera. La l�nea de meta est� en el cuadro 70. El primer contendiente que 
	llegue o pase el cuadro 70 gana una cubeta de zanahorias y lechugas frescas.
	El desarrollo de la pista transcurre sobre la ladera de una monta�a 
	resbalosa, por lo que ocacionalmente los corredores pierden terreno.
		Exciste un reloj que hace tic una vez por segundo. Con cada tic del 
	reloj, su programa deber� ajustar la posici�n de los animales, de acuerdo 
	con las reglas de la p�gina siguiente:
		Utilice variables para llevar control de las posiciones de los animales
	(es decir, los n�meros de posici�n son del 1 al 70). Inicie cada animal en 
	la posici�n 1 (es decir, en la "l�nea de arranque"). Si un animal resbala
	antes del cuadro 1, regrese al animal devuelta al cuadro 1.
		Genere los porcentajes de la tabla anterior mediante la producci�n de 
	un entero al azar, i, en el rango 1 <= i <= 10. Para la tortuga, ejecute un 
	"paso r�pido" cuando 1 <= i <= 5, un "resbal�n" cuando 6 <= i <= 7, o un
	"paso lento" cuando 8 <= i <= 10. Utilice una t�cnica similar para mover a 
	la liebre.
		Empiece la carrera imprimiendo:
		
		BANG	!!!!!
		AND THEY'RE OFF	!!!!!
   |--------------------------------------------------------------------------------|	
   |Animal  - Tipo de movimiento - Porcentaje del tiempo - Movimiento Real		    |
   |--------------------------------------------------------------------------------|
   |Tortuga - Paso r�pido		 - 50%					 - 3 cuadros a la derecha   |
   |		- Resbal�n			 - 20%					 - 6 cuadros a la izquierda |
   | 		- Paso lento		 - 30%					 - 1 cuadros a la derecha   |
   |--------------------------------------------------------------------------------|
   | Liebre - Dormido   		 - 20%					 - Ning�n movimiento        |
   |		- Salto grande		 - 20%					 - 9 cuadros a la derecha   |
   | 		- Resbal�n grande	 - 10%					 - 12 cuadros a la izquierda|
   |		- Salto peque�o		 - 30%					 - 1 cuadros a la derecha   |
   | 		- Peque�o resbal�n	 - 20%					 - 2 cuadros a la izquierda |
   |--------------------------------------------------------------------------------|
	
		Entonces, por cada pulso del reloj (es decir, por cada repetici�n del 
	ciclo) imprima una l�nea de 70 posiciones, que mestre la letra T en la 
	posici�n de la tortuga, y la letra H en la posici�n de la liebre. 
	Ocacionalmente, ambos contendientes coincidir�n en el mismo cuadro. En esta
	condici�n, la tortuga muerde a la liebre y su programa deber� imprimir 
	OUCH !!! empezando en esta posici�n. Todas las posiciones de impresi�n, 
	distintas a las de T, la H, o la OUCH !!! (en caso de un empate) deber�n 
	estar vac�as.
		Despu�s de que se ha impreso cada l�nea, pruebe si ambos animales han 
	alcanzado o han pasado el cuadro 70. Si es as�, entonces imprima el ganador 
	y d� por terminada la simulaci�n. Si la tortuga gana, imprima TORTOUSE WINS !!!
	YAY!!!. Si la liebre gana, imprima HARE WINS. YUCH. Si ambos animales ganan
	en el mismo pulso de reloj, quiz�s desee favorecer a la tortuga (el "m�s 
	d�bil"), o quiz�s desee imprimir It's a tie. Si ninguno de los animales gana, 
	otra vez vuelva a ejecutar el ciclo, para simular el siguiente pulso de 
	reloj. Cuando est� listo para ejecutar su programa, re�na un grupo de 
	observadores para presenciar la carrera. !Se asombrar� del inter�s que su 
	auditorio mostrar�!
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define CUADROS 70
#define CORREDORES 2

char mostrar(const char *const, const char *const, const char [][CUADROS]);
char encuesta(const char [][CUADROS]);
void reloj(void); // ok
void movimiento(char [][CUADROS], char *const, char *const);

main()
{
	char pista[CORREDORES][CUADROS] = {{1}, {1}};
	char posicion_tortuga = 0, posicion_liebre = 0, validez;
	
	srand(time(NULL));
	
	do
	{
		system("cls");
		printf("BANG!!!!!\nAND THEY'RE OFF!!!!!\n");
		validez = mostrar(&posicion_tortuga, &posicion_liebre, pista);
		
		if(validez == 0)
			break;
			
		reloj();
		movimiento(pista, &posicion_tortuga, &posicion_liebre);
	}while(1);
	
	system("pause");
	return 0;
}

char mostrar(const char *const posicion_tortuga, const char *const posicion_liebre, const char pistas[][CUADROS])
{
	char i, pista[CUADROS] = {0};
	
	printf("***********************************************************************\n");
	
	if(encuesta(pistas) == 1)
	{
		printf("TORTOUSE WINS !!!, YAY!!!\n");
		return 0;
	}
	else if(encuesta(pistas) == 2)
	{
		printf("HARE WINS. YUCH\n");
		return 0;
	}
	else if(*posicion_tortuga == *posicion_liebre && *posicion_tortuga >= 69)
	{
		printf("It's a tie\n");
		return 0;
	}
	else if(*posicion_tortuga != *posicion_liebre)
	{
		pista[*posicion_tortuga] = 1;
		pista[*posicion_liebre] = 2;
		
		for(i = 0; i <= CUADROS - 1; i++)
		{
			if(pista[i] == 1)
				printf("%c", 'T');
			else if(pista[i] == 2)
				printf("%c", 'H'); 
			else
				printf("%c", '_');
		}
	}
	else if(*posicion_tortuga == *posicion_liebre)
	{
		for(i = 0; i <= CUADROS - 7; i++)
			i == *posicion_tortuga ? printf("OUCH!!!"): printf("%c", '_');
	}
	printf("|\n");
	printf("***********************************************************************\n");
	
	return 1;
}

char encuesta(const char pista[][CUADROS])	// 1: Tortuga wins; Faltan cosas
{											// 2: Liebre wins
	char i, pos_tortuga = -1, pos_liebre = -1;
	
	for(i = 0; i <= CUADROS - 1; i++)
	{
		if(pista[0][i] == 1)
			pos_tortuga = i;
		
		if(pista[1][i] == 1)
			pos_liebre = i;
		
		if(pos_liebre != -1 && pos_tortuga != -1)
			break;
	}
	
	if(pos_tortuga >= 69 && pos_liebre < pos_tortuga)
		return 1;
	else if(pos_liebre >= 69 && pos_tortuga < pos_liebre)
		return 2;
	
	return 0;
}

void reloj(void)	// Solo da una espera de un segundo
{
	char tiempo, tiempo2;
	
	tiempo = tiempo2 = (time(NULL) % 10);
	
	do
	{
		if(tiempo2 == (tiempo + 1) % 10)
			break;
		
		tiempo2 = (time(NULL) % 10);
	}while(1);
}

void movimiento(char pista[][CUADROS], char *const posicion_tortuga, char *const posicion_liebre)
{
	short i;
	void movimiento_tortuga(char [][CUADROS], const short *const, char *const);
	void movimiento_liebre(char [][CUADROS], const short *const, char *const);
	
	i = rand() % 10 + 1;
	
	movimiento_tortuga(pista, &i, posicion_tortuga);
	movimiento_liebre(pista, &i, posicion_liebre);
}

void movimiento_tortuga(char  pista[][CUADROS], const short *const tipo_mov, char *const posicion_tortuga)
{
	if(*tipo_mov >= 1 && *tipo_mov <= 5)	// Paso r�pido
	{
		if(*posicion_tortuga + 3 <= 69)
		{
			pista[0][*posicion_tortuga] = 0;
			pista[0][*posicion_tortuga + 3] = 1;
			*posicion_tortuga += 3;
		}
		else
		{
			pista[0][*posicion_tortuga] = 0;
			*posicion_tortuga = 69;
			pista[0][*posicion_tortuga] = 1;	
		}
	}
	else if(*tipo_mov >= 6 && *tipo_mov <= 7)	// Resbal�n
	{
		if(*posicion_tortuga - 6 >= 0)
		{
			pista[0][*posicion_tortuga] = 0;
			pista[0][*posicion_tortuga - 6] = 1;
			*posicion_tortuga -= 6;
		}
		else
		{
			pista[0][*posicion_tortuga] = 0;
			*posicion_tortuga = 0;
			pista[0][*posicion_tortuga] = 1;
		}
	}
	else if(*tipo_mov >= 8 && *tipo_mov <= 10)  // Paso lento
	{
		if(*posicion_tortuga + 1 <= 69)
		{
			pista[0][*posicion_tortuga] = 0;
			pista[0][*posicion_tortuga + 1] = 1;
			*posicion_tortuga += 1;
		}
	}
}

void movimiento_liebre(char  pista[][CUADROS], const short *const tipo_mov, char *const posicion_liebre)
{
	if(*tipo_mov >= 1 && *tipo_mov <= 2);	//Dormido
	else if(*tipo_mov >= 3 && *tipo_mov <= 4)	//Salto grande
	{
		if(*posicion_liebre + 9 <= 69)
		{
			pista[1][*posicion_liebre] = 0;
			pista[1][*posicion_liebre + 9] = 1;
			*posicion_liebre += 9;
		}
		else
		{
			pista[1][*posicion_liebre] = 0;
			*posicion_liebre = 69;
			pista[1][*posicion_liebre] = 1;	
		}
	}
	else if(*tipo_mov == 5)	//Resbal�n grande
	{
		if(*posicion_liebre - 12 >= 0)
		{
			pista[1][*posicion_liebre] = 0;
			pista[1][*posicion_liebre - 12] = 1;
			*posicion_liebre -= 12;
		}
		else
		{
			pista[1][*posicion_liebre] = 0;
			*posicion_liebre = 0;
			pista[1][*posicion_liebre] = 1;
		}
	}
	else if(*tipo_mov >= 6 && *tipo_mov <= 8)	//Salto peque�o
	{
		if(*posicion_liebre + 1 <= 69)
		{
			pista[1][*posicion_liebre] = 0;
			pista[1][*posicion_liebre + 1] = 1;
			*posicion_liebre += 1;
		}
		else
		{
			pista[1][*posicion_liebre] = 0;
			*posicion_liebre = 69;
			pista[1][*posicion_liebre] = 1;	
		}
	}
	else if(*tipo_mov >= 9 && *tipo_mov <= 10)	//Peque�o resbal�n
	{
		if(*posicion_liebre - 2 >= 0)
		{
			pista[1][*posicion_liebre] = 0;
			pista[1][*posicion_liebre - 2] = 1;
			*posicion_liebre -= 2;
		}
		else
		{
			pista[1][*posicion_liebre] = 0;
			*posicion_liebre = 0;
			pista[1][*posicion_liebre] = 1;
		}
	}
}
