/*
	Author: Rolando Docampo Fernández
	Place: Casa de Marcia 
	Date: 10/04/20 10:18
	Description: 6.22. Utilice un arreglo de doble subíndice para resolver el
	problema siguiente. Una empresa tiene cuatro vendedores (1 a 4) que venden
	cinco productos diferentes (1 a 5). Una vez al día, cada vendedor emite un 
	volante para cada tipo distinto de producto vendido. Cada volante contiene:
		1. El número del vendedor.
		2. El número del producto.
		3. El valor total en dólares del producto vendido ese día.
	Por lo tanto, cada vendedor entrega por día entre 0 y 5 volantes de ventas.
	Suponga que está disponible la información de todos los volantes 
	correspondientes al mes anterior. Escriba un programa que lea toda esta 
	información correspondiente a las ventas del mes anterior, y que resuma las
	ventas totales por vendedor y por producto. Todos los totales deberán 
	almacenarse en un arreglo de doble subíndice sales. Después de procesar toda
	la información correspondiente al mes anterior, imprima los resultados en 
	forma tabular, con cada una de las columnas representando a un vendedor en
	particular y cada uno de los renglones representando un producto en 
	particular. Totalice en forma cruzada cada renglón, para obtener las ventas 
	totales de cada producto del mes pasado; totalice cada columna para obtener
	las ventas totales por vendedor correspondiente al mes pasado. Su impresión
	en forma tabular deberá incluir estos totales a la derecha de los renglones
	totalizados y en la parte inferior de las columnas totalizadas.
*/
#include<stdio.h>
#include<stdlib.h>
#define VENDEDORES 5
#define PRODUCTOS 6

void imprimir(const float [][VENDEDORES]);
short validez(void);
void calculador(float [][VENDEDORES], const int, const int, const float);
void totalizador(float [][VENDEDORES]);

main()
{
	float sales[PRODUCTOS][VENDEDORES] = {0}, valor;
	int volante = 1, vendedor, producto;
	
	while(validez())
	{
		printf("Volante #%d.\n", volante);
		
		do{
			printf("Numero del vendedor (1-4): ");
			scanf("%d", &vendedor);
			
			if(vendedor < 1 || vendedor > 4)
				printf("Valor fuera de los limites.\n");
		}while(vendedor < 1 || vendedor > 4);
		
		do{
			printf("Numero del producto (1-5): ");
			scanf("%d", &producto);
			
			if(producto < 1 || producto > 5)
				printf("Valor fuera de los limites.\n");
		}while(producto < 1 || producto > 5);
		
		printf("Valor del producto: ");
		scanf("%f", &valor);
		calculador(sales, vendedor - 1, producto - 1, valor);
		++volante;
	}
	
	totalizador(sales);
	imprimir(sales);
	
	system("PAUSE");
	return 0;
}

void imprimir(const float tabla[][VENDEDORES])
{
	int i, j;
	
	printf("\n------------------------------------------------------------------------------------|\n");
	printf("           | %s | %s | %s | %s | %s |\n", "VENDEDOR 1", 
		   "VENDEDOR 2", "VENDEDOR 3", "VENDEDOR 4", "TOTAL DEL PRODUCTO");
	printf("------------------------------------------------------------------------------------|\n");
	
	for(i = 0; i <= PRODUCTOS - 1; i++)
	{
		i != 5 ? printf("PRODUCTO %d | ", i + 1) : printf("%10s | ", "TOTAL");
		for(j = 0; j <= VENDEDORES - 1; j++)
		{
			j != 4 ? printf("%6.2f     | ", tabla[i][j]) : printf("%10.2f         | ", tabla[i][j]);
		}
		
		printf("\n------------------------------------------------------------------------------------|\n");
	}
}

short validez(void)		/* 1 = Si desea introducir mas datos */
{						/* 0 = No desea mas datos  */
	char control;
	
	printf("Deseas introducir un volante (S/N): ");
	control = getchar();
	
	do
	{
		switch(control)
		{
			case 'S': case 's':
				return 1;
				break;
			case 'N': case 'n':
				return 0;
				break;
			case ' ': case '\n':
				control = getchar();
				break;
			default:
				printf("Valor incorrecto. Intente otra vez\n"
					   "Deseas introducir un volante (S/N): ");
				control = getchar();
				break;
		}	
	}while(1);
}

void calculador(float sales[][VENDEDORES], const int vendedor, const int producto, const float valor)
{
	sales[producto][vendedor] += valor;
}

void totalizador(float sales[][VENDEDORES])
{
	int i, j;
	float tot_fila, tot_column;
	
	for(i = 0; i <= PRODUCTOS - 1; i++)
	{
		for(j = 0, tot_fila = 0; j <= VENDEDORES - 1; j++)
		{
			tot_fila += sales[i][j];
		}
		
		sales[i][4] = tot_fila;
	}
	
	for(i = 0; i <= VENDEDORES - 1; i++)
	{
		for(j = 0, tot_column = 0; j <= PRODUCTOS - 1; j++)
		{
			tot_column += sales[j][i];
		}
		
		sales[5][i] = tot_column;
	}
}
