/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 28/04/20 11:31
	Description: 8.11. Escriba un programa que utilice generación de números
	aleatorios para crear oraciones. El programa deberá utilizar 4 arreglos de 
	apuntadores a char llamados article, noun, verb y preposition. El programa 
	deberá crear una oración, seleccionando una palabra al azar de cada unos de 
	los arreglos, en el orden siguiente: article, noun, verb, preposition y noun.
	Conforme se seleccione cada palabra, deberá ser concartenada con las 
	palabras anteriores en un arreglo lo suficiente extenso para contener a toda 
	la oración final, deberá iniciar con una letra mayúscula y terminar con un 
	punto. El programa deberá generar 20 oraciones de este tipo.
	
		Los arreglos deberán ser llenados como siguie: El arreglo article deberá
	contener los artículos "the", "a", "one", "some", y "any"; el arreglo noun
	deberá contener los nombres "boy", "girl", "dog", "town" y "car"; el arreglo
	verb deberá contener los verbos "drove", "jumped", "ran", "walked", y 
	"skipped"; el arreglo preposition deberá contener las prepocisiones "to", 
	"from", "over", "under", y "on".
		Una vez escrito el programa anterior y funcionando, modifíquelo para 
	producir una corta historia que este formada con varias de estas oraciones.
	(!Qué tal le parecería la posibilidad de convertirse en un escritor de tesis
	al azar!).	
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
#define TAM 5
#define ORACION 20

void generador_oracion(char *const, const char *const *, const int);

main()
{
	char *article[TAM] = {"the", "a", "one", "some", "any"},
		    *noun[TAM] = {"boy", "girl", "dog", "town", "car"},
		    *verb[TAM] = {"drove", "jumped", "ran", "walked", "skipped"},
	 *preposition[TAM] = {"to", "from", "over", "under", "on"},
	 oraciones[ORACION][200];
	int lineas;
	
	srand(time(NULL));
	
	for(lineas = 0; lineas <= ORACION - 1; lineas++)
	{
		generador_oracion(oraciones[lineas], article, 1);
		generador_oracion(oraciones[lineas], noun, 2);
		generador_oracion(oraciones[lineas], verb, 3);
		generador_oracion(oraciones[lineas], preposition, 4);
		generador_oracion(oraciones[lineas], article, 5);
		generador_oracion(oraciones[lineas], noun, 6);
	}
	
	for(lineas = 0; lineas <= ORACION - 1; lineas++)
		puts(oraciones[lineas]);
	
    system("PAUSE");
    return 0;
}

void generador_oracion(char *const oracionesPtr, const char *const *palabraPtr, const int coordenada)
{
	short i;
	
	i = rand() % 5;
	
	if(coordenada == 1)
	{
		*oracionesPtr = toupper(*palabraPtr[i]);
		oracionesPtr[1] = '\0';
		strcat(oracionesPtr, &palabraPtr[i][1]);
	}
	else if(coordenada == 6)
	{
		strcat(oracionesPtr, " ");
		strcat(oracionesPtr, palabraPtr[i]);
		strcat(oracionesPtr, ".");
	}
	else
	{
		strcat(oracionesPtr, " ");
		strcat(oracionesPtr, palabraPtr[i]);
	}
}
