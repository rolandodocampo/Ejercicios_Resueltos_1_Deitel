/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 22/11/19 23:26
	Description: 5.23. Escriba una función que obtenga el tiempo como tres 
	argumentos enteros (para horas, minutos y segundos), y regrese el número de 
	segundos desde la última vez que el reloj "llegó a las 12". Utilice esta 
	función para calcular la cantidad de tiempo en segundo entre dos horas, 
	cuando ambas estén dentro de un ciclo de 12 horas del reloj.
*/

#include<stdio.h>
#include<stdlib.h>

int tiempo(int, int, int);
int calcular_tiempo(void);

main()
{
	int horas, minutos, segundos;
	
	printf("Introduzca el tiempo (hora, minuto, segundo): ");
	scanf("%d%d%d", &horas, &minutos, &segundos);
	printf("El tiempo en segundos es: %d\n", tiempo(horas, minutos, segundos));
	printf("El tiempo entre las dos horas en segundos es: %d\n", 
			calcular_tiempo());
	
	system("pause");
	return 0;
}

int tiempo(int horas, int minutos, int segundos)
{
	int horas_seg, minutos_seg;
	
	horas_seg = horas * 3600;
	minutos_seg = minutos * 60;
	return horas_seg + minutos_seg + segundos;
}

int calcular_tiempo(void)
{
	int horas1, minutos1, segundos1,
		horas2, minutos2, segundos2;
	
	printf("Introduzca el tiempo 1 (hora, minuto, segundo): ");
	scanf("%d%d%d", &horas1, &minutos1, &segundos1);	
	printf("Introduzca el tiempo 2 (hora, minuto, segundo): ");
	scanf("%d%d%d", &horas2, &minutos2, &segundos2);
	return tiempo(horas1, minutos1, segundos1) + tiempo(horas2, minutos2, segundos2);	
}
