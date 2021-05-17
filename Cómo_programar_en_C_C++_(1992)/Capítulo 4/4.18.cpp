/* 
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Karenia
	Date: 20/08/19 17:44
	Description: 4.18 Una aplicaci�n interesante de las computadoras, es dibujar
	gr�ficos y gr�ficas de barra (A veces llamadas "histogramas"). Escriba un 
	programa que lea cinco n�meros (cada uno de ellos entre 1 y 30). Para cada 
	uno de los n�meros le�dos, su programa deber� imprimir una l�nea, conteniendo
	dicho n�mero en asteriscos adyacentes. Por ejemplo, si su programa lee el 
	n�mero 7, deber� imprimir *******.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	short contador = 0, columna;
	int num, num1, num2, num3, num4, num5;
	
	while(++contador <= 5)
	{
		printf("Entre un numero (1 al 30): ");
		scanf("%d", &num);
		
		if(num >= 1 && num <= 30)
		{
			switch(contador)
			{
				case 1:
					num1 = num;
					break;
				case 2:
					num2 = num;
					break;
				case 3:
					num3 = num;
					break;
				case 4:
					num4 = num;
					break;
				case 5:
					num5 = num;
					break;
			}
		}
		else 
		{
			printf("Numero fuera del rango, intentelo de nuevo.\n");
			--contador;
		}
	}
	
	printf("%s\t%s\n", "Numero", "Histograma");
	printf("%d\t", 1);
		for(columna = 1; columna <= num1; columna++)
		   printf("*");
		   printf("\n");
		   
	printf("%d\t", 2);
		for(columna = 1; columna <= num2; columna++)
		   printf("*");
		   printf("\n");
		   
	printf("%d\t", 3);
		for(columna = 1; columna <= num3; columna++)
		   printf("*");
		   printf("\n");
		   
	printf("%d\t", 4);
		for(columna = 1; columna <= num4; columna++)
		   printf("*");
		   printf("\n");
		   
	printf("%d\t", 5);
		for(columna = 1; columna <= num5; columna++)
		   printf("*");
		   printf("\n");
	
   system("PAUSE");
   return 0;
}

