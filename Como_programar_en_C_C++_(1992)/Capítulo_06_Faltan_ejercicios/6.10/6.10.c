/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia
	Date: 30/03/20 15:35
	Description: 6.10. Utilice un arreglo de un subíndice para resolver el 
	siguiente problema. Una empresa le paga a su personal de ventas en base a
	comisión. Los vendedores reciven $200 por semana más el 9% de sus ventas
	brutas de dicha semana. Por ejemplo, un vendedor que vende $3000 en ventas
	brutas, en una semana recive $200 más el 9% de $3000, o sea un total de 
	$470. Escriba un programa en C (utilizando un arreglo de contadores) que 
	determine cuantos de los vendedores ganaron salarios en cada uno de los 
	rangos siguientes (suponiendo que el salario de cada vendedor se trunca a 
	una cantidad entera):
		1. $200 - $299
		2. $300 - $399
		3. $400 - $499
		4. $500 - $599
		5. $600 - $699
		6. $700 - $799
		7. $800 - $899
		8. $900 - $999
		9. $1000 o superior
*/
#include<stdio.h>
#include<stdlib.h>
#define T 10

short cal_salario(short);

main()
{
	short frec_salarial[T] = {0}, ventas_brutas, i, cliente = 1;
	
	do
	{
		printf("Cliente %d: Valor de las ventas brutas esta semana (-1 para terminar): ", cliente);
		scanf("%hd", &ventas_brutas);
		
		if(ventas_brutas == -1)
			break;
		else
			++frec_salarial[cal_salario(ventas_brutas)];
		
		++cliente;
	}while(ventas_brutas != -1);
	
	printf("***********************************************\n");
	printf("*%13s%9c%17s%7c\n", "Valores", '|', "Frecuencia", '*');
	printf("***********************************************\n");
	for(i = 1; i <= T - 1; i++)
	{
		if(i != T - 1)
		{
			printf("* %d. $%d00 - %d99%8c%12d%12c\n", i, i + 1, i + 1, '|', frec_salarial[i], '*');
			printf("*---------------------------------------------*\n");
		}
		else
			printf("* %d. $1000 o superior%2c%12d%12c\n", i, '|', frec_salarial[i], '*');
	}
	printf("***********************************************\n");
	
	system("PAUSE");
	return 0;
}

short cal_salario(short ventas_brutas)
{
	short salario;
	
	salario = 200 + ventas_brutas * 0.09;
	
	if(salario >= 200 && salario <= 299)
		return 1;
	else if(salario >= 300 && salario <= 399)
		return 2;
	else if(salario >= 400 && salario <= 499)
		return 3;
	else if(salario >= 500 && salario <= 599)
		return 4;
	else if(salario >= 600 && salario <= 699)
		return 5;
	else if(salario >= 700 && salario <= 799)
		return 6;
	else if(salario >= 800 && salario <= 899)
		return 7;
	else if(salario >= 900 && salario <= 999)
		return 8;
	else
		return 9;
}
