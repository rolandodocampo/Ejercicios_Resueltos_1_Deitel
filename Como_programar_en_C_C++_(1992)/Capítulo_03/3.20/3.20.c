/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago de Cuba 
	Date: 17/07/19 10:55
	Description: 3.20 El interés simple de un préstamo se calcula mediante la 
	fórmula "interest = principal * rate * days / 365". La fórmula anterior 
	supone que rate es la tasa de interés anual y, por lo tanto, incluye la 
	división entre 365 (días). Desarrolle un programa en C que introduzca 
	princial, rate y days para varios préstamos diferentes, y que calcule y 
	despliegue el interés simple para cada uno de ellos, mediante el uso de la 
	fórmula anterior.
		Enter loan principal (-1 to end): 1000.00
		Enter interest rate: .1
		Enter term of the loan in days: 365
		The interest charge is $100.00
		
		Enter loan principal (-1 to end): 1000.00
		Enter interest rate: .08375
		Enter term of the loan in days: 224
		The interest charge is $51.40
		
		Enter loan principal (-1 to end): 10000.00
		Enter interest rate: .09
		Enter term of the loan in days: 1460
		The interest charge is $3600.00
		
		Enter loan principal (-1 to end): -1
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	float inicial, juros, interes;
	short dias;
	
	printf("Introduzca el valor inicial (-1 para salir): ");
	scanf("%f", &inicial);
	
	while(inicial != -1)
	{
		printf("Introduzca la tasa de juros anual: ");
		scanf("%f", &juros);
		printf("Introduzca la cantidad de dias: ");
		scanf("%hd", &dias);
		interes = inicial * juros * dias / 365; 
		printf("El interes cargado es de $%.2f\n\n", interes);
		
		printf("Introduzca el valor inicial (-1 para salir): ");
		scanf("%f", &inicial);
	} 

   system("PAUSE");
   return 0;
}
