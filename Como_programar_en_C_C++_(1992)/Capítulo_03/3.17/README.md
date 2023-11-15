# 3.17 Cálculo de consumo de gasolina.

**Problema:**

En razón del alto precio de la gasolina, los conductores estan preocupados por el kilometraje que obtienen de sus automóviles. Un conductor ha llevado registro de varios tanques de gasolina, anotando las millas manejadas y los galones utilizados en cada uno de los tanques. Desarrolle un programa en C que introduzca las millas manejadas y los galones utilizados para cada tanque. Después de procesar toda la información de entrada, el programa deberá calcular e imprimir las millas por galón combinadas, obtenidas de todos los tanques.

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
--------------------------------------------------------------------------
**Solución:**

```c
#include <stdio.h>
#include <stdlib.h>

main()
{
	float galones, mxG, tMxG = 0; /*mxG: millas por galones*/
	short millas, tanque = 0;  /*tMxG: total de millas por galones*/
	
	printf("Galones usados (-1 para terminar): ");
	scanf("%f", &galones);
	
	while(galones != -1)
	{
		printf("Millas conducidas: ");
		scanf("%hd", &millas);
		mxG = millas / galones;
		tMxG += mxG;
		tanque++;
		printf("Las millas/galones en este tanque es de: %f.\n\n", mxG);
		printf("Galones usados (-1 para terminar): ");
		scanf("%f", &galones);
	}
	
	if(tanque != 0)
		printf("El promedio de millas/galones es de: %f.\n", tMxG / tanque);
	else
		printf("Valores no introduzidos");
	
	system("PAUSE");
	return 0;
}
```

**Diagrama de flujo:**

<img src=".\3.17_Diagrama_de_flujo.png"  />