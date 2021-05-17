#include<stdio.h>
#include<stdlib.h>
#include<math.h>

short inciso_a(short);

main()
{
	short i;
	
	for(i = 1; i <= 10000; i++)
	{			
		if(inciso_a(i))
				printf("%hd, ", i);				
	}
	printf("\n");
		
	system("pause");
	return 0;
}

short inciso_a(short numero)
{
	short i, contador = 0;
		
	for(i = 2; i < sqrt(numero); i++)
	{
		if(numero % i == 0)
			contador++;		
	}
	
	if(contador == 0)
		return 1;
	else 
		return 0;
}
