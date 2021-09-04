/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 31/03/20 16:15
	Description: 6.11. La ordenación por el método de burbuja presentada en la 
	figura 6.15, es ineficiente en el caso de arreglos grandes. Haga las 
	siguientes modificaciones simples para mejorar el rendimiento de este tipo 
	de ordenación:
		a) Después de la primera pasada, el número más alto esta organizado que 
		deberá aparecer en el elemento numerado más alto dentro del arreglo; 
		después de la segunda pasada, los dos números más altos estarán "en su
		lugar", y asi en lo sucesivo. En vez de hacer nueve comparaciones en 
		cada pasada, modifique la ordenación tipo burbuja para llevar a cabo 8
		comparaciones en la segunda pasada, 7 en la tercera, y así sucesivamente.
		b) Los datos en el arreglo pudieran estar ya en el orden apropiado o en
		un orden casi apropiado, por lo tanto, porque hacer nueve pasadas si 
		menos pudieran ser suficientes?. Modifique la ordenación para verificar,
		al final de cada pasada, si se han hechos intercambios, entonces por lo 
		menos se requiere de una pasada adicional.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define T 100

void ordenador(int [], const short);
void imp(const int [], const short);
void generador(int [], const short);

main()
{
	int datos[T] = {0};
	
	srand(time(NULL));
	generador(datos, T);
	printf("***********************************************\n");
	printf("*             TABLA DESORDENADA               *\n");
	printf("***********************************************\n");
	imp(datos, T);
	printf("***********************************************\n");
	printf("*               TABLA ORDENADA                *\n");
	printf("***********************************************\n");
	ordenador(datos, T);
	imp(datos, T);
	printf("***********************************************\n");
	
	return 0;
}

void ordenador(int datos[], const short cant)
{
	short pruebas, comparaciones, lim_comp, validez;
	int memoria;
	
	for(pruebas = 1, lim_comp = 2; pruebas <= cant - 1; lim_comp++, pruebas++)
	{
		validez = 0;
		
		for(comparaciones = 0; comparaciones <= cant - lim_comp; comparaciones++)
		{
			if(datos[comparaciones] > datos[comparaciones + 1])
			{
				++validez;
				memoria = datos[comparaciones + 1];
				datos[comparaciones + 1] = datos[comparaciones];
				datos[comparaciones] = memoria;
			}
		}
		
		if(validez == 0)
			break;
	}
}

void imp(const int datos[], const short cant)
{
	short i;
	
	printf("%3c", ' ');
	for(i = 0; i <= cant - 1; i++)
	{
		if((i + 1) % 10 == 0 && i != 0)
			printf("%3d\n%3c", datos[i], ' ');
		else
			printf("%3d ", datos[i]);
	}
	
	printf("\n");
}

void generador(int datos[], const short cant)
{
	short i;
	
	for(i = 0; i <= cant - 1; i++)
		datos[i] = rand() % cant;
}
