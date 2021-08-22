/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 28/04/20 17:36
	Description: 8.12. (Quintillas jocosas). Una quintilla jocosa es un verso
	cómico de cinco líneas, en las cuales la primera y la segunda línea riman
	con la quinta, y la tercera rima con la cuarta. Utilizando técnicas 
	similares a las desarrolladas en el ejercicio 8.10, escriba un programa en
	C que produzca quintillas al azar. Pulir este programa para que pueda 
	producir buenas quitillas es un verdadero reto, !pero el resultado puede 
	merecer el esfuerzo!.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define QUINT 100	

void generador_quintilla(char [], char *[], const short);
short validacion_quintilla(const char []); //0: no rima; // Falta

main()
{
	char *articulo[4] = {"el", "la", "una", "un"},
    *sustantivo[7][9] = {{"mabel", "mantel", "nube", "casa", "carro", "piso", "tierra", "trabajo", "competencia"}, //sustantivos comunes	
						 {"gato", "balon", "oveja", "perro", "abeja", "bicicleta", "patin", "ventilador", "trabajador"}, //sustantivos individuales
						 {"manada", "arboleda", "jauria", "enjambre", "caserio", "hormigero", "condominio", "basurero", "poblacion"}, //sustantivos colectivos
						 {"lluvia", "hamburguesa", "avion", "carta", "pajaro", "llave", "bate", "pelota", "escalera"}, //sustantivos concretos
						 {"alegria", "hambre", "belleza", "miedo", "amor", "paciencia", "tristeza", "enojado", "inteligencia"}, //sustantivos abstractos
						 {"delfin", "mono", "silla", "mesa", "armario", "cama", "libro", "cuchara", "billete"}, //sustantivos contables
						 {"viento", "arena", "musica", "nieve", "azucar", "leche", "agua", "aceite", "sed"}}, 	//sustantivos no contables	   
		     *verbo[9] = {"camina", "salta", "corre", "canta", "toma", "sostiene", "habla", "cae", "pega"},
	  *preposicion[16] = {"a", "ante", "bajo", "con", "contra", "de", "desde", "en", 
	 			    	  "entre", "hacia", "hasta", "para", "por", "sin", "sobre", "tras"};
	char quintilla[QUINT] = {'\0'}, sel_sust;
	
	srand(time(NULL));
	/*articulo + sustantivos + verb + articulo + sustantivos*/
	
	do
	{
		sel_sust = rand() % 7;
		generador_quintilla(quintilla, articulo, 1);
		generador_quintilla(quintilla, sustantivo[sel_sust], 2);
		generador_quintilla(quintilla, verbo, 3);
		generador_quintilla(quintilla, articulo, 5);
		sel_sust = rand() % 7;
		generador_quintilla(quintilla, sustantivo[sel_sust], 6);
	}while(validacion_quintilla(quintilla) == 0);
	
	puts(quintilla);
	
    system("PAUSE");
    return 0;
}

void generador_quintilla(char quintilla[], char *linea[], const short parte_constructiva)
{
	short genero_articulos(const char *);	//0:femenino_s, 1: masculino_s, -1: error en funcion
	short genero_sustantivos(const char *);	//0:femenino_s, 1: masculino_s, -1: error en funcion
	char selector_linea, g_art, g_sust;
	
	if(parte_constructiva == 1 || parte_constructiva == 5) //art
	{
		selector_linea = rand() % 4;
		g_art = (char)genero_articulos(linea[selector_linea]);
	}
	else if(parte_constructiva == 2 || parte_constructiva == 6) //sust
	{
		do
		{
			selector_linea = rand() % 9;
			g_sust = (char)genero_sustantivos(linea[selector_linea]);
		}while(g_sust != g_art);
		
	}
	else if(parte_constructiva == 3)
		selector_linea = rand() % 9;
	else if(parte_constructiva == 4)
		selector_linea = rand() % 16;
	
	strcat(quintilla, linea[selector_linea]);
	strcat(quintilla, " ");	
}

short genero_articulos(const char *inicio_articulo)
{
	if(strchr(inicio_articulo, 'a') != NULL && strchr(inicio_articulo, 's') == NULL)
		return 0;
	else if(strchr(inicio_articulo, 'a') == NULL && strchr(inicio_articulo, 's') == NULL)
		return 1;
	
	return -1;
}

short genero_sustantivos(const char *inicio_sustantivo)
{
	char *referencia;
	
	referencia = strrchr(inicio_sustantivo, 'a');
	
	if(referencia != NULL && *(referencia + 1) == '\0')
		return 0;
	else
	{
		if(strcmp(inicio_sustantivo, "nube") == 0 || strcmp(inicio_sustantivo, "poblacion") == 0)
			return 0;
		else if(strcmp(inicio_sustantivo, "llave") == 0 || strcmp(inicio_sustantivo, "sed") == 0)
			return 0;
		else if(strcmp(inicio_sustantivo, "leche") == 0 || strcmp(inicio_sustantivo, "nieve") == 0)
			return 0;
		else if(strcmp(inicio_sustantivo, "leche") == 0)
				return 0;
	}

	return 1;
}

short validacion_quintilla(const char quintilla[])
{
	char copia[QUINT], *copia2[5], i = 0;
	short rima(char *, char *);
	
	strcpy(copia, quintilla);
	copia2[i] = strtok(copia, " ");
	
	do
	{
		i++;
		copia2[i] = strtok(NULL, " ");
	}while(copia2[i] != NULL);
	
	
	if(rima(copia2[0], copia2[1]) == 0 && rima(copia2[1], copia2[4]) == 0)
	{
		if(rima(copia2[2], copia2[3]) == 0)
			return 1;	
	}	
	 
	return 0;
}

short rima(char *inicio_1ra_palab, char *inicio_2da_palab)
{
	unsigned int tam1, tam2;
	
	tam1 = strlen(inicio_1ra_palab);
	tam2 = strlen(inicio_2da_palab);
	
	return strcmp((inicio_1ra_palab + (tam1 - 2)), (inicio_2da_palab + (tam2 - 2)));
}
