/* 
	Author: Rolando Docampo Fernández
	Place: Casa María Caridad
	Date: 19/08/19 11:12
	Description: 4.15 Modifique el programa de interés compuesto de la sección 
	4.6 para repetir sus pasos para tasas de interés de 5%, 6%, 7%, 8%, 9% y 10
	por ciento. Utilice un ciclo for para variar la tasa de interés.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int ano, interes;
	double principal = 1000, monto = 0;
	
	for(interes = 5; interes <= 10; interes++)
	{
		printf("Interes del %d%:\n", interes);
		printf("%s\t%s\n", "Ano", "Monto");
		for(ano = 1; ano <= 10; ano++)
		{
			monto += principal * pow(1 + (double)interes / 100, ano);
			printf("%d\t%.2f\n", ano, monto);
		}
		printf("****************\n");
	}
	
   system("PAUSE");
   return 0;
}
