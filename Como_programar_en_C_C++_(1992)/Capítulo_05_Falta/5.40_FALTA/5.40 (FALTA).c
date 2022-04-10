/*
	Author: Rolando Docampo Fernández
	Place: Casa de Karenia 
	Date: 07/12/19 15:56
	Description: 5.40. Cualquier programa que puede ser realizado en forma 
	recursiva, puede ser organizado también en forma iterativa, aunque algunas
	veces con mayor dificultad y con menor claridad. Intente escribir una 
	versión iterativa de las torres de Hanoi. Si tiene éxito compare su versión
	iterativa con la versión recursiva que desarrolló en el ejercicio 5.39. 
	Investigue los temas correspondiente a redimiento, claridad y a su capacidad
	para demostrar la corrección de los programas.
*/

#include<stdio.h>
#include<stdlib.h>

/* n: El número de discos a mover. 
	i: La estaca en la cual se acumularán estos discos al inicio. 
	f: La estaca a la cual esta pila de discos se moverá.
	m: La estaca a utilizarse como área de almacenamiento temporal. 
*/
void hanoi(short, short, short, short);

main()
{
	short n, i, f, m;
	
	printf("**********************************\n");
	printf("*       TORRES DE HANOI          *\n");
	printf("**********************************\n");
	printf("El numero de discos a mover: ");
	scanf("%hd", &n);
	printf("Estaca inicial: ");
	scanf("%hd", &i);
	printf("Estaca final: ");
	scanf("%hd", &f);
	printf("Estaca temporal: ");
	scanf("%hd", &m);
	printf("**********************************\n");
	printf("*          MOVIMIENTOS           *\n");
	printf("**********************************\n");
	hanoi(n, i, f, m);
	
	system("PAUSE");
	return 0;
}

void hanoi(short discos, short estaca_inicial, short estaca_final, short almacen)
{
	short memoria, 
			tem_discos = discos, tem2_discos = discos, 
			i, 
			tem_inicial = estaca_inicial, tem2_inicial = estaca_inicial, 
			tem_final = estaca_final, tem2_final = estaca_final,
			tem_almacen = almacen, tem2_almacen = almacen;
			
	if(discos > 1)
	{			
		do{	
			for(i = tem_discos; i > 1; i--)
			{
				memoria = tem_final;
				tem_final = tem_almacen;
				tem_almacen = memoria;
			}
			printf("%d %c %d\n", tem_inicial, 26, tem_final);
			/*///////////////////////////*/
			
			do{	
			for(i = tem2_discos; i > 1; i--)
			{
				memoria = tem2_inicial;
				tem2_inicial = tem2_almacen;
				tem2_almacen = memoria;
			}
			printf("%d %c %d\n", tem2_inicial, 26, tem2_final);
			
			tem2_final = estaca_final;
			tem2_almacen = almacen;
		}while(--tem2_discos > 1);
		
			/*//////////////////////////*/
			tem2_discos = discos;
			tem_final = tem2_final = estaca_final;
			tem_almacen = tem2_almacen = almacen;
			tem2_inicial = estaca_inicial;
			
		}while(--tem_discos > 1);
		
		
	}
	else if(discos == 1)
		printf("%d %c %d\n", estaca_inicial, 26, estaca_final);
	else
		printf("No hay discos para mover!!!.\n");
}
