/*
	Author: Rolando Docampo FernÃ¡ndez
	Place: Casa de Talita Pianta
	Date: 12/05/21 16:46
	Description: 6.23. (Gráficos tipo tortuga). El lenguaje Logo, que es en 
	particular popular entre usuarios de computadoras personales, hizo famoso
	el concepto de los gráficos tipo tortuga. Imagine una tortuga mecánica, que
	camina por la habitación bajo el control de un programa de C. La tortuga 
	sujeta una pluma en dos posiciones posibles, arriba o abajo. Cuando la pluma
	está abajo, la tortuga traza formas conforme se mueve; cuando la pluma está 
	arriba, la tortuga se mueve a su antojo libremente, sin escribir nada. En 
	este problema simularemos la operación de la tortuga y además crearemos un
	bloque de notas computarizado.
		Utilice un arreglo de 50 por 50 de nombre floor, que se inicializa a 
	ceros. Lea los comandos partiendo de un arreglo que los contenga. Lleve el
	control en todo momento de la posicion actual de la tortuga, asi como si en
	ese momento la pluma está arriba o abajo. Suponga que la tortuga siempre 
	empieza a partir de la posición 0,0 en el piso, con su pluma arriba. El 
	conjunto de comandos de la tortuga que su programa debe procesar, son como
	sigue:
			Comando			Significado
			1					Pluma arriba
			2					Pluma abajo
			3					Giro a la derecha
			4					Giro a la izquierda
			5,10				Moverse hacia adelante 10 espacios
								(o un número distinto que 10)
			6					Imprima el arreglo de 50 por 50
			7					Fin de los datos (valor centinela)
	Suponga que la tortuga esta en algún lugar cerca del centro del piso. El 
	siguiente "programa" dibujará e imprimirá un cuadrado de 12 por 12:
			2
			5,12
			3
			5,12
			3
			5,12
			3
			5,12
			1
			6
			7
	Conforme la tortuga se mueve con la pluma abajo, defina los elementos 
	apropiados del arreglo floor al valor 1. Cuando se dá el comando 6 
	(imprimir), siempre que exista en el arreglo un 1, despliegue un asterisco,
	o cualquier otro caracter que seleccione. Siempre que aparesca un 0, 
	despliegue un espacio vacío. Escriba un programa en C para poner en 
	operación las capacidades gráficas de la tortuga discutidas aquí.
	Escriba varios programas gráficos de tortuga para dibujar formas 
	interesantes. Añada otros comandos para incrementar el poder del lenguaje
	gráfico de su tortuga.
*/

#include<stdio.h>
#include<stdlib.h>
#define F 50
#define C 50
#define CMD 7

void imp(const char [][C]);
short conv(const char [], const int);
void update_comandos(char [], const short);
void derecha(char []);
void izq(char []);
char mover(char [], char [][C], char []);
void intro(void);

main()
{
	auto char floor[F][C] = {0}, comandos[CMD] = {0, 1}, posicion[2] = {0}, entrada[5], bandera = 0;
	auto short conteo = 1, val;
	
	intro();
	
	do
	{
		printf("COMANDO%hd: ", conteo++);
		scanf("%s", entrada);
		
		val = conv(entrada, 5);	// CONVIERTO EL VALOR DEL USUARIO DE CHAR A SHORT, -1 VALOR ERRONEO;	
		
		if(val != -1 && val != 9)
		{
			update_comandos(comandos, val);
			
			if(comandos[2] == 1)
				floor[posicion[1]][posicion[0]] = 1;
			
			if(comandos[3] == 1)
				derecha(comandos);
			else if(comandos[4] == 1)
				izq(comandos);
			
			if(comandos[5] != 0)
			{
				bandera = mover(comandos, floor, posicion); // 1 SI SE SALE DEL ARREGLO
				comandos[5] = 0;
				--conteo;
			}
		}
		else if(val != 9)
		{
			printf("Comando errado.\n");
			--conteo;
		}
	}while(val != 9 || bandera == 1);
	
	if(comandos[6] == 1)
	{
		printf("------------------------------------------------------------------\n");
		printf("                        FIGURA                                   |\n");
		printf("------------------------------------------------------------------\n");
		imp(floor);
		comandos[6] = 0;
	}
	
   system("PAUSE");
   return 0;
}

void intro(void)
{
	printf("***********************************************************\n"
		   "*                   Grafico tipo tortuga                  *\n"
		   "***********************************************************\n"
			"* Comando         Significado                             *\n"
			"* 1	          Pluma arriba                            *\n"
			"* 2	          Pluma abajo                             *\n"
			"* 3	          Giro a la derecha                       *\n"
			"* 4	          Giro a la izquierda                     *\n"
			"* 5,10            Moverse hacia adelante 10 espacios      *\n"
			"*                 (o un numero distinto que 10)	          *\n"	 
			"* 6               Imprima el arreglo de 50 por 50         *\n"
			"* 7               Fin de los datos (valor centinela)      *\n"
			"***********************************************************\n"
			"* Nota: La tortuga parte de las coordenadas (0,0) y       *\n"
			"*       con la pluma arriba.                              *\n"
			"***********************************************************\n");
}

char mover(char comandos[], char floor[][C], char posicion[])
{
	char overflow(const char [], char []);
	char i = posicion[0], j = posicion[1];
		
	if(overflow(comandos, posicion) == 0)
	{	
		if(comandos[2] == 1 && comandos[0] == 0)
		{
		  for(; j <= posicion[1]; j++)
		  {
		  	  for(; i <= posicion[0]; i++)
		  	     	 floor[j][i] = 1;
		  }
		}
		else if(comandos[2] == 1 && comandos[0] == 1)
		{
		  for(; i <= posicion[0]; i++) 
		  {
		  	  for(; j < posicion[1]; j++)
		  	     {
		  	     	 floor[j][i] = 1;
				  }	
		  }
		}
		else if(comandos[2] == 1 && comandos[0] == 2)
		{
			 for(; j <= posicion[1]; j--)
		  {
		  	  for(; i > posicion[0]; i--)
		  	  		floor[j][i] = 1;
		  }
		}
		else if(comandos[2] == 1 && comandos[0] == 3)
		{
			 for( ; i <= posicion[0]; i--)
		  {
		  	  for(; j > posicion[1]; j--)
		  	  		floor[j][i] = 1;
		  }
		}
	}
	else
	{
		printf("Movimiento fuera del tablero.\n");
		posicion[0] = i;
		posicion[1] = j;
		return 1;
	}
}

char overflow(const char comandos[], char posicion[]) // 1 overflow, 0 no overflow
{	
	switch(comandos[0])
	{
		case 0:
			posicion[0] += comandos[5] - 1;
			
			if(posicion[0] > 49)
				return 1;
			else
				return 0;
			break;
		
		case 1:
			posicion[1] += comandos[5] - 1;
			
			if(posicion[1] > 49)
				return 1;
			else
				return 0;
			break;
		
		case 2:
			posicion[0] -= comandos[5] - 1;
			
			if(posicion[0] < 0)
				return 1;
			else
				return 0;
			break;
		
		case 3:
			posicion[1] -= comandos[5] - 1;
			
			if(posicion[1] < 0)
				return 1;
			else
				return 0;
			break;
	}
}

void izq(char comandos[])
{
	--comandos[0];
	
	if(comandos[0] < 0)
		comandos[0] = 3;
	
	comandos[4] = 0;
}

void derecha(char comandos[])
{
	++comandos[0];
	
	if(comandos[0] > 3)
	   comandos[0] = 0;
	
	comandos[3] = 0;
}

void imp(const char a[][C]) // IMPRIME FLOOR
{
	char i, j;
	
	for(i = 0; i <= F - 1; i++)
	{
		for(j = 0; j <= C - 1; j++)
			(a[i][j] == 1) ? printf("*") : printf(" ");
			
		putchar('\n');
	}
}

short conv(const char entrada[], const int size) // -1 Entrada no valida
{
	short convFrac(const char []);
	switch(entrada[0])
	{
		case '1':
			return 1;
			break;
		case '2':
			return 2;
			break;
		case '3':
			return 3;
			break;
		case '4':
			return 4;
			break;
		case '5':
			if(convFrac(entrada) == -1)
				return -1;
			else
				return convFrac(entrada) + 50;
			break;
		case '6':
			return 6;
			break;
		case '9':
			return 9;
			break;
		default:
			return -1;
			break;
	}
}

void update_comandos(char cmd[], const short val)
{
	short sub = val;
		
	if(sub == 1)
	{
		cmd[sub] = 1;
		cmd[sub + 1] = 0;
	}
	else if(sub == 2)
	{
		cmd[sub] = 1;
		cmd[sub - 1] = 0;
	}
	else if(sub == 3)
	{
		cmd[sub] = 1;
		cmd[sub + 1] = 0;
	}
	else if(sub == 4)
	{
		cmd[sub] = 1;
		cmd[sub - 1] = 0;
	}
	else if(sub >= 50)
		cmd[5] = sub - 50;
	else if(sub == 6)
		cmd[sub] = 1;
}

short convFrac(const char ent[])
{
	short valor = 0;
	
	switch(ent[3])
	{
		case '1':
			valor = 1;
			break;
		case '2':
			valor = 2;
			break;
		case '3':
			valor = 3;
			break;
		case '4':
			valor = 4;
			break;
		case '5':
			valor = 5;
			break;
		case '6':
			valor = 6;
			break;
		case '7':
			valor = 7;
			break;
		case '8':
			valor = 8;
			break;
		case '9':
			valor = 9;
			break;
	}
	switch(ent[2])
	{
		case '0':
			break;
		case '1':
			valor += 10;
			break;
		case '2':
			valor += 20;
			break;
		case '3':
			valor += 30;
			break;
		case '4':
			valor += 40;
			break;
		case '5':
			valor += 50;
			break;
		default:
			valor = -1;
			break;			
	}
	
	return valor;
}
