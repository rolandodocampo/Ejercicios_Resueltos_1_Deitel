# 6.33

**(Palíndromos)**. Un palíndromo es una cadena que se escribe de la misma forma hacia adelante y hacia atrás. Algunos ejemplos de palíndromos son "radar", "able was i ere i saw elba", y "a man a plan a canal panama". Escriba una función recursiva testPalindorme, que devuelva uno si la cadena almacenada en el arreglo es un palíndromo y 0 de lo contrario. La función deberá ignorar espacios y puntuaciones incluidas en la cadena.

-----------------------------------------------------------------------------------------------------------------------------------------------------------
```c
#include<stdio.h>
#include<stdlib.h>
#define T 30
			
short contador(const char []);
short palindromo(const char [], short, short);
void minusculas(char []);

main()
{
	char usuario[T], ejemplos[3][T] = {"radar", "able was i ere i saw elba", 
									   "a man a plan a canal 	panama"};
	short high;
	
	/*Parte 1*/
	printf("Entre una palabra: ");
	scanf("%s", usuario);
	high = contador(usuario); /*subindice alto de la cadena */
	minusculas(usuario);
	palindromo(usuario, 0, high - 1) ? printf("%s es palindromo.\n", usuario) : 
									      printf("%s no es palindromo.\n", usuario);
	printf("-------------------------------\n");

	/*Parte 2*/
	high = contador(ejemplos[0]);
	palindromo(ejemplos[0], 0, high - 1) ? printf("\"radar\" es palindromo.\n") : 
												printf("\"radar\" no es palindromo.\n");
	printf("-------------------------------\n");

	/*Parte 3*/
	high = contador(ejemplos[1]);
	palindromo(ejemplos[1], 0, high - 1) ? printf("\"able was i ere i saw elba\" es 													palindromo.\n") : printf("\"able was i 													ere i saw elba\" no es palindromo.\n");
	printf("-------------------------------\n");

	/*Parte 4*/
	high = contador(ejemplos[2]);
	palindromo(ejemplos[2], 0, high - 1) ? printf("\"a man a plan a canal panama\" es 												palindromo.\n") : printf("\"a man a plan a 													canal panama\" no es palindromo.\n");
	printf("-------------------------------\n");
	system("PAUSE");
	return 0;
}

/*1: es palindromo
  0: no es palindromo*/
short palindromo(const char cadena[], short low, short high)
{
	while((cadena[low] < 97 || cadena[low] > 122))
		++low;
		
	while((cadena[high] < 97 || cadena[high] > 122))
	--high;
	
	if(cadena[low] != cadena[high])
		return 0;
	else if(low >= high)
		return 1;
	else		
		return palindromo(cadena, low + 1, high - 1);	
}

/* Convierte el texto en minuscula */
void minusculas(char texto[])
{
	short i;
	for(i = 0; texto[i] != '\0'; i++)
	{
		if(texto[i] >= 65 && texto[i] <= 90)
			texto[i] += 32;
	}
}

/*Devuelva la cantidad de caracteres que tiene 
  una cadena, sin contar el caracter '\0'*/
short contador(const char cadena[])
{
	short total = 0, i;
	for(i = 0; cadena[i] != '\0'; i++)
		++total;

	return total;
}
```