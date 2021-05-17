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
	float millas, galones, Total_Millas = 0, Total_Galones = 0, promMxG;
	
	printf("Enter the gallons used (-1 to end): ");
	scanf("%f", &galones);
	
	while(galones != -1)
	{
		printf("Enter the miles driven: ");
		scanf("%f", &millas);
		printf("The miles / gallons for this tank was %f\n\n", millas / galones);
		Total_Galones += galones;
		Total_Millas += millas;
			
		printf("Enter the gallons used (-1 to end): ");
		scanf("%f", &galones);
	}
	
	Total_Millas == 0 ? printf("No se introdujo datos.\n") : 
		printf("The overall average miles/gallon was %f.\n", 
			Total_Millas / Total_Galones);
	
	system("PAUSE");
	return 0;
}
