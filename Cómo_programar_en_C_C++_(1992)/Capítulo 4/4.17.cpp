/* 
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Karenia
	Date: 20/08/19 16:51
	Description: 4.17 La cobranza se hace cada vez m�s dif�cil durante periodos
	de recesi�n, por lo que las empresas pudieran restringir sus l�mites de 
	cr�dito para impedir que sus cuentas por cobrar (el dinero que se les debe)
	crezca demasiado. En respuesta a una recesi�n prolongada, una compa��a a
	reducido a la mitad sus l�mites de cr�dito de sus clientes. Por lo tanto, si
	un cliente particular ten�a un l�mite de cr�dito de $2000, el l�mite de 
	cr�dito de este cliente es ahora de $1000. Si un cliente ten�a un l�mite de 
	cr�dito de $5000, el l�mite de cr�dito de este cliente es ahora de $2500. 
	Escriba un programa que analice el estado de cr�dito de tres clientes de esta
	empresa. Para cada cliente se le dar�:
		1. El n�mero de cuenta del cliente
		2. El l�mite de cr�dito del cliente, antes de la recesi�n
		3. El saldo actual del cliente (es decir, la cantidad actual que el 
		cliente le debe a la empresa).
	Su programa deber� calcular e imprimir el nuevo l�mite de cr�dito para cada
	cliente, y deber� determinar (e imprimir) qu� clientes tienen saldos actuales
	que exceden sus nuevos l�mites de cr�dito.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	short clientes = 0;
	int cuenta, limite, saldo, limite1, limite2, limite3, control = 0;
	
	while(++clientes <= 3)
	{
		printf("Numero de cuenta cliente %d: ", clientes);
		scanf("%d", &cuenta);
		printf("Limite de credito cliente %d: ", clientes);
		scanf("%d", &limite);
		printf("Saldo actual cliente %d: ", clientes);
		scanf("%d", &saldo);
		
		switch(clientes)
		{
			case 1:
				limite1 = limite / 2;
				
				if(limite1 < saldo)
					control += limite1;
				break;
			
			case 2:
				limite2 = limite / 2; 
				
				if(limite2 < saldo)
					control += limite2;
				break;
			
			case 3: 
				limite3 = limite / 2; 
				
				if(limite3 < saldo)
					control += limite3;
				break;
		}
	}

	printf("%-10s%-20s%s\n", "Cliente", "Limite de credito", "Excedido");
	printf("%4d%17d%15s\n", 1, limite1, control == limite1 ? "Si" : "No");
	printf("%4d%17d%15s\n", 2, limite2, control == limite2 ? "Si" : "No");
	printf("%4d%17d%15s\n", 3, limite3, control == limite3 ? "Si" : "No");
	
   system("PAUSE");
   return 0;
}
