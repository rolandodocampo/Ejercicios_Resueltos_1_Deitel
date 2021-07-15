/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 16/11/19 16:30
	Description: 5.21. Utilice técnicas similares a las desarrolladas en los 
	ejercicios 5.19 y 5.20 para producir un programa que grafique una amplia 
	gama de formas
*/

#include <stdio.h>
#include <stdlib.h>

void introduccion(void);
void cuadrado(void);
void rectangulo(void);
void triangulo_intro(void);
void triangulo_rectangulo(short);
void triangulo_equilatero(short);
void fillCharacter(char);

main()
{
	short figura;
	
	introduccion();
	
	do
	{
		printf("Introduzca el numero de la figura de la leyenda que desea\n");
		printf("dibujar (-1 para terminar): ");
		scanf("%hd", &figura);
		
		switch(figura)
		{
			case 1:
				cuadrado();
				break;
			case 2:
				rectangulo();
				break;
			case 3:
				triangulo_intro();
				break;
		}
	}while(figura != -1);
	
	system("PAUSE");
	return 0;
}

void introduccion(void)
{
	printf("Bienvenido a mi programa de dibujo de figuras geometricas.\n");
	printf("Leyenda:\n");
	printf("Figura 1: Cuadrado\nFigura 2: Rectangulo\n");
	printf("Figura 3: Triangulo (Rectangulo y Equilatero)\n");
	printf("******************************************\n");
}

void cuadrado(void)
{
	short lado;
	register short fila, columna;
	char character;
	
	printf("\"Cuadrado\"\n");
	printf("Valor del lado: ");
	scanf("%hd", &lado);
	printf("Introduzca el caracter que desea imprimir para el cuadrado: ");
	scanf("%c", &character);
	
	while(character == ' ' || character == '\n')
		scanf("%c", &character);
	
	for(fila = 1; fila <= lado; fila++)
	{
		for(columna = 1; columna <= lado; columna++)
			fillCharacter(character);
		
		printf("\n");
	}
	printf("\n");
}

void rectangulo(void)
{
	short lado1, lado2;
	register short fila, columna;
	char character;
	
	printf("\"Rectangulo\"\n");
	printf("Valor del lado 1: ");
	scanf("%hd", &lado1);
	printf("Valor del lado 2: ");
	scanf("%hd", &lado2);
	printf("Introduzca el caracter que desea imprimir para el cuadrado: ");
	scanf("%c", &character);
	
	while(character == ' ' || character == '\n')
		scanf("%c", &character);
	
	for(fila = 1; fila <= lado1; fila++)
	{
		for(columna = 1; columna <= lado2; columna++)
			fillCharacter(character);
		
		printf("\n");
	}
	printf("\n");
}

void triangulo_intro(void)
{
	short tipo, lado1;
	
	printf("\"Triangulo\"\n");
	printf("Hay 2 tipos de triangulos en este programa:\n");
	printf("Tipo 1: Rectangulo\nTipo 2: Equilatero\n");
	printf("Introduzca el tipo de triangulo que desea dibujar: ");
	scanf("%hd", &tipo);
	
	switch(tipo)
	{
		case 1:
			printf("Introduzca la altura: ");
			scanf("%hd", &lado1);
			triangulo_rectangulo(lado1);
			break;
		case 2:
			printf("Introduzca la altura: ");
			scanf("%hd", &lado1);
			triangulo_equilatero(lado1);
			break;
	}
}

void triangulo_rectangulo(short altura)
{
	short fila, columna;
	char character;
	
	printf("Introduzca el caracter que desea imprimir para el cuadrado: ");
	scanf("%c", &character);
	
	while(character == ' ' || character == '\n')
		scanf("%c", &character);
	
	for(fila = 1; fila <= altura; fila++)
	{
		for(columna = fila; columna >= 1; columna--)
			fillCharacter(character);
		
		printf("\n");
	}
	printf("\n");
}

void triangulo_equilatero(short altura)
{
	short fila, columna, ci = 0, espacios; /* ci: Contador de impresion */
	char character;
	
	printf("Introduzca el caracter que desea imprimir para el cuadrado: ");
	scanf("%c", &character);
	
	while(character == ' ' || character == '\n')
		scanf("%c", &character);
	
	for(fila = 1; fila <= altura; fila++)
	{
		
		for(espacios = 1; espacios <= altura - fila; espacios++)
			printf(" ");
		
		for(columna = 1; columna <= ci + 1; columna++)
			fillCharacter(character);
		
		printf("\n");
		
		ci += 2;
	}
	printf("\n");
}

void fillCharacter(char caracter)
{
	printf("%c", caracter);
}

