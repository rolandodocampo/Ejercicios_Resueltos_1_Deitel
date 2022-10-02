/* 
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba
	Date: 17/07/19 08:22
	Description: 3.17 En razón del alto precio de la gasolina, los conductores 
	estan preocupados por el kilometraje que obtienen de sus automóviles. Un
	conductor ha llevado registro de varios tanques de gasolina, anotando las 
	millas manejadas y los galones utilizados en cada uno de los tanques. 
	Desarrolle un programa en C que introduzca las millas manejadas y los galones
	utilizados para cada tanque. Después de procesar toda la información de 
	entrada, el programa deberá calcular e imprimir las millas por galón 
	combinadas, obtenidas de todos los tanques.
	
		Enter the gallons used (-1 to end): 12.8
		Enter the miles driven: 287
		The miles / gallons for this tank was 22.421875
		
		Enter the gallons used (-1 to end): 10.3
		Enter the miles driven: 200
		The miles / gallons for this tank was 19.417475
		
		Enter the gallons used (-1 to end): 5
		Enter the miles driven: 120
		The miles / gallons for this tank was 24.000000
		
		Enter the gallons used (-1 to end): -1
		The overall average miles/gallon was 21.601423
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	float galones, total_Galones = 0.00, promMxG;
	short millas, total_Millas = 0;
	
	printf("Introduzca la cantidad de galones usados (-1 para terminar): ");
	scanf("%f", &galones);
	
	while(galones != -1)
	{
		printf("Introduzca las millas conducidas: ");
		scanf("%hd", &millas);
		printf("Las millas / galones para este tanque fue de %f\n\n", millas / galones);
		total_Galones += galones;
		total_Millas += millas;
			
		printf("Introduzca la cantidad de galones usados (-1 para terminar): ");
		scanf("%f", &galones);
	}
	
	total_Millas == 0 ? printf("No se introdujeron datos.\n") : 
		printf("El promedio total de millas / galones fue de %f.\n", 
			total_Millas / total_Galones);
	
	system("PAUSE");
	return 0;
}
