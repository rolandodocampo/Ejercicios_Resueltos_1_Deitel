/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 04/04/20 12:37
	Description: 6.21. (Sistema de reservaciones de aerolínea). Una pequeña 
	aerolínea acaba de adquirir una computadora para su sistema automatizado de
	reservaciones. El presidente le ha solicitado a usted que programe el nuevo 
	sistema en C. Usted debe escribir un programa que asigne asientos en cada 
	vuelo del único avión de la aerolínea (capacidad: 10 asientos).
		Su programa deberá mostrar el siguiente menú de alternativas:
			Please type 1 for "smoking"
			Please type 2 for "nonsmoking"
	Si la persona escribe 1, entonces su programa deberá asignar un asiento en 
	la sección de fumar (asientos 1 al 5) si la persona escribe 2, entonces su
	programa deberá de asignar un asiento en la sección de no fumar (asiento 6
	al 10). Su programa a continuación deberá imprimir un pase de abordaje, 
	indicando el número de asiento de la persona y si está o no en la sección de
	no fumar del aeroplano.
		Utilice un arreglo de un subíndice para representar el diagrama de 
	asientos del avión. Inicialice todos los elementos del arreglo a cero para 
	indicar que todos los asientos estan vacíos. Conforme se asigne cada asiento,
	defina los elementos correspondientes del arreglo a 1 para indicar que dicho
	asiento ya no está disponible.
		Su programa no deberá, naturalmente, asignar nunca un asiento que ya 
	haya sido asignado. Cuando esté llena la sección de fumar, su programa 
	deberá solicitar a la persona, si le parece aceptable ser colocada en la 
	sección de no fumar (o viceversa). Si dice que si, entonces efectúe la 
	asignación apropiada de asiento. Si dice que no, entonces imprima el mensaje
	"Next flight leaves in 3 hours".
*/
#include<stdio.h>
#include<stdlib.h>
#define ASIENTOS 10

short intro(void); /* ok */
short fumar(void); /* ok */
short asignar_asientos(short [], const short); /* ok */
void boleto(const short, const short); /* ok */
short cambio_de_zona(void);
void zona_fumar(short [], short);
void zona_no_fumar(short [], short);

main()
{
	short avion[ASIENTOS] = {0}, intr, zona;
	
	do
	{
		intr = intro();
		
		if(intr)  
		{
			zona = fumar();
			
			if(zona == 1) /* Zona de fumar */
				zona_fumar(avion, 0);
			else	/* Zona de no fumar  */
				zona_no_fumar(avion, 0);		
		}
		else
		{
			printf("Gracias por su visita. El proximo\n"
				   "vuelo sale en 3 horas.\n");
		}
	}while(intr == 1);
	
	
	system("PAUSE");
	return 0;
}

short intro(void) /* 1 = Si desea reservar */
{				  /* 0 = Si no desea reservar	*/		
	char respuesta, error = 0;
	
	printf("**************************************\n"
		   "*  BIENVENIDOS A LA NUEVA AEROLINEA  *\n"
		   "**************************************\n"
		   "* La nueva aerolinea tiene un solo   *\n"
		   "* avion de 10 capacidades, donde hay *\n"
		   "* lugar para fumadores y los que no  *\n"
		   "* son fumadores. Desea reservar un   *\n"
		   "* asiento? (S/N): ");
	scanf("%c", &respuesta);
	
	do
	{
		switch(respuesta)
		{
			case 'S': case 's':
				printf("**************************************\n");
				return 1;
				break;
			case 'N': case 'n':
				printf("**************************************\n");
				return 0;
				break;
			case ' ': case '\n':
				respuesta = getchar();
				error = 1;
				continue;
				break;
			default:
				error = 1;
				break;
		}
		
		printf("* Entrada de datos no valida, inten- *\n"
			   "* te de nuevo. (S/N): ");
		respuesta = getchar();	  
	}while(error == 1);
}

short fumar(void)		/* 1 = Fumar */
{					    /* 0 = No Fumar  */
	short valor, error = 0;
	
	printf("Please type 1 for \"smoking\"\n"
		   "Please type 2 for \"nonsmoking\"\n");
	scanf("%hd", &valor);
	
	do
	{
		switch(valor)
		{
			case 1:
				printf("Escogio la seccion de fumar\n");
				return 1;
				break;
			case 2:
				printf("Escogio la seccion de no fumar\n");
				return 0;
				break;
			default:
				error = 1;
				break;
		}
		
		printf("Entrada invalida.\n"
			   "Please type 1 for \"smoking\"\n"
		       "Please type 2 for \"nonsmoking\"\n");
		scanf("%hd", &valor);
	}while(error == 1);
}

short asignar_asientos(short avion[], const short zona) /* 0 = Seccion de fumar esta lleno  */
{												  
	short i, control = 0;
	
	if(zona == 1)  /* Zona de Fumar  */
	{
		for(i = 0; i <= ASIENTOS - 6; i++)  /* Solo 5 asientos */
		{
			if(avion[i] == 0)
			{
				avion[i] = 1;
				return ++i;
			}
			else
				++control;
		}
	
		if(control == 5)
			return 0;
	}
	else		 /* Zona de no Fumar */
	{
		for(i = 5; i <= ASIENTOS - 1; i++)  /* Solo 5 asientos */
		{
			if(avion[i] == 0)
			{
				avion[i] = 1;
				return ++i;
			}
			else
				++control;
		}
	
		if(control == 5)
			return 0;
	}
}

void boleto(const short asiento, const short zona)
{
	if(asiento != 0)
	{
		printf("***********************************\n"
		   "Seccion de: %s\nAsiento: %hd\n", zona == 1 ? "Fumar" : "No Fumar", asiento);
	}
	else
		printf("\n***********************************\n"
			   "Next flight leaves in 3 hours\n");
	
}

short cambio_de_zona(void)    /* 1: Si quiero cambiar */
{							  /* 0: No quiero  */
	char respuesta, error = 0;
	
	printf("La seccion esta llena.\n"
			"Desea estar en la otra zona (S/N): ");
	scanf("%c", &respuesta);
	
	do
	{
		switch(respuesta)
		{
			case 'S': case 's':
				printf("**************************************\n");
				return 1;
				break;
			case 'N': case 'n':
				printf("**************************************\n");
				return 0;
				break;
			case ' ': case '\n':
				respuesta = getchar();
				error = 1;
				continue;
				break;
			default:
				error = 1;
				break;
		}
		
		printf("* Entrada de datos no valida, inten- *\n"
			   "* te de nuevo. (S/N): ");
		respuesta = getchar();	  
	}while(error == 1);
}

void zona_fumar(short avion[], short control)
{
	short disponibilidad; 
	
	disponibilidad = asignar_asientos(avion, 1);
	
	if(disponibilidad == 0 && control != 2)
	{
		if(cambio_de_zona())
			zona_no_fumar(avion, control++);
	}
	else if(disponibilidad != 0 && control != 2)
		boleto(disponibilidad, 1);
}

void zona_no_fumar(short avion[], short control)
{
	short disponibilidad; 
	
	disponibilidad = asignar_asientos(avion, 2);
	
	if(disponibilidad == 0 && control != 2)
	{
		if(cambio_de_zona())
			zona_fumar(avion, control++);
	}
	else if(disponibilidad != 0 && control != 2)
		boleto(disponibilidad, 2);
}
