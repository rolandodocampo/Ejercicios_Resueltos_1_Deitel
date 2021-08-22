/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago
	Date: 21/08/19 15:09
	Description: 4.19 Una empresa de ventas por correo vende cinco productos, 
	cuyos precios de menudeo se muestran en la tabla siguiente:
		Número del producto		Precio al menudeo
				1								$2.98
				2								 4.50
				3								 9.98
				4 								 4.49
				5								 6.87
	Escribe un programa que lea una serie de pares de números, como sigue:
		1. Número del producto.
		2. Cantidad vendida en un día.
	Su programa deberá utilizar un enunciado switch para ayudar a determinar el 
	precio de menudeo de cada producto. Su programa deberá calcular y desplegar
	el valor total de menudeo, de todos los productos vendidos la semana pasada.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	float total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0;
	int producto, total_vendido;
	
	do
	{
		printf("Numero del producto (-1 para terminar): ");
		scanf("%d", &producto);
		
		if(producto == EOF)
			break;
		
		printf("Cantidad vendida (1 dia): ");
		scanf("%d", &total_vendido);
		
		switch(producto)
		{
			case 1:
				total1 += total_vendido * 2.98;
				break;
			
			case 2:
				total2 += total_vendido * 4.50;
				break;
				
			case 3:
				total3 += total_vendido * 9.98;
				break;
				
			case 4:
				total4 += total_vendido * 4.49;
				break;
				
			case 5:
				total5 += total_vendido * 6.87;
				break;
				
			default:
				printf("Producto invalido, intente de nuevo.\n");
				break;
		}
	}while(producto != EOF);
	
	printf("-------------------------\n");
	printf("Producto   Total vendidos\n");
	printf("%5d%16.2f\n", 1, total1);
	printf("%5d%16.2f\n", 2, total2);
	printf("%5d%16.2f\n", 3, total3);
	printf("%5d%16.2f\n", 4, total4);
	printf("%5d%16.2f\n", 5, total5);

   system("PAUSE");
   return 0;
}
