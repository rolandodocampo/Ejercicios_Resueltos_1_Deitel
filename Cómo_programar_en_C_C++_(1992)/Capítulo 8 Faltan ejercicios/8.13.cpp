/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Marcia 
	Date: 29/04/20 23:00
	Description: 8.13. Escriba un programa que cifre frases de la lengua inglesa
	y las convierta en lat�n infantil. El lat�n infantil es una forma de 
	lenguaje codificado utilizado a menudo para diversi�n. Existen muchas 
	variantes en los m�todos utilizados para formar frases en lat�n infantil. 
	Para simplificar, utilice el algoritmo siguiente:
		Para formar una frase en lat�n infantil a partir de una frase en lengua
	inglesa, divida la frase en palabras, utilizando la funci�n strtok. Para 
	traducir cada palabra inglesa en una palabra en lat�n infantil, coloque la 
	primera letra de la palabra inglesa al final de la palabra y a�ada las 
	letras "ay". De ah� la palabra "jump" se convierte en "umpjay", la palabra
	"the" se convierte en "hetya", y la palabra "computer" se convierte en
	"omputercay". Los espacios en blancos entre palabras se conservan como estan.
		Suponga lo siguiente: la frase en ingl�s est� formada de palabras 
	separadas por espacios en blancos, no hay signos de puntuaci�n y todas las 
	palabras tienen dos o m�s letras. La funci�n printLatinWord deber� desplegar
	cada palabra. Sugerencia: cada vez que se encuentre un token en una llamada
	a strtok, pase el apuntador del token a la funci�n printLatinWord, e imprima
	la palabra en lat�n infantil.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *printLatinWord(char *);

main()
{
	char frase[200], *token;
	
	puts("Entre una frase en lengua inglesa:");
	gets(frase);
	
	printLatinWord(strtok(frase, " "));
	while(printLatinWord(strtok(NULL, " ")) != NULL);
	
    system("PAUSE");
    return 0;
}

char *printLatinWord(char *token)
{
	char copy[200];
	
	strcpy(copy, token);
	strncat(copy, token, 1);
	strcpy(copy, copy + 1);
	strcat(copy, "ay");
	printf("%s ", copy);
	return token;
}
