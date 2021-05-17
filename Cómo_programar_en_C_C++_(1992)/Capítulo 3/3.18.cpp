/*
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago de Cuba 
	Date: 17/07/19 09:10
	Description: 3.18 Desarrolle un programa en C que determine si un cliente de
	una tienda departamental ha excedido el l�mite de cr�dito en una cuenta de 
	cargo. Para cada uno de los clientes, estan disponibles los siguientes 
	hechos:
		1. N�mero de la cuenta.
		2. Saldo al principio del mes.
		3. Total de todos los elementos cargados por el cliente este mes.
		4. Total de todos los cr�ditos aplicados este mes a la cuenta de este 
			cliente.
		5. L�mite permitido de cr�dito.
	El programa deber� introducir cada uno de estos hechos, calcular el nuevo
	saldo (= saldo inicial + cargos - cr�ditos), y determinar si el nuevo saldo
	excede el l�mite de cr�dito del cliente. Para aquellos clientes cuyo l�mite 
	de cr�dito est� excedido, el programa deber� desplegar el n�mero de cuenta 
	del cliente, el l�mite de cr�dito, el nuevo saldo y el mensaje "l�mite de
	cr�dito excedido".
	
		Enter account number (-1 to end): 100
		Enter beginning balance: 5394.78
		Enter total charges: 1000.00
		Enter total credits: 500.00
		Enter credit limit: 5500.00
		Account:      100
		Credit limit: 5500.00
		Balance:      5894.78 
		Credit Limit Exceeded.
		
		Enter account number (-1 to end): 200
		Enter beginning balance: 1000.00
		Enter total charges: 123.25
		Enter total credits: 321.00
		Enter credit limit: 1500.00
		
		Enter account number (-1 to end): 300
		Enter beginning balance: 500.00
		Enter total charges: 274.73
		Enter total credits: 100.00
		Enter credit limit: 800.00
		
		Enter account number (-1 to end): -1
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int No_Cuenta;
	float Balance_Inicial, Total_Cargos, Total_Creditos, Limite_Credito,
			Balance_Nuevo;
			
	printf("Enter account number (-1 to end): ");
	scanf("%d", &No_Cuenta);
	
	while(No_Cuenta != -1)
	{
	   printf("Enter beginning balance: ");
		scanf("%f", &Balance_Inicial);
		printf("Enter total charges: ");
		scanf("%f", &Total_Cargos);
		printf("Enter total credits: ");
		scanf("%f", &Total_Creditos);
		printf("Enter credit limit: ");
		scanf("%f", &Limite_Credito);
		Balance_Nuevo = Balance_Inicial + Total_Cargos - Total_Creditos;
		
		if (Balance_Nuevo <= Limite_Credito)
		{
			printf("\nEnter account number (-1 to end): ");
			scanf("%d", &No_Cuenta);
		} 
		else	
		{
		   printf("Account:      %d\n", No_Cuenta);
			printf("Credit limit: %.2f\n", Limite_Credito);	
			printf("Balance:      %.2f\n", Balance_Nuevo);
			printf("Credit Limit Exceeded.\n\n");
			
			printf("Enter account number (-1 to end): ");
			scanf("%d", &No_Cuenta);
		}
	}
	
   system("PAUSE");
   return 0;
}
