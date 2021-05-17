/*
	Author: Rolando Docampo Fernández
	Place: Casa Karenia
	Date: 23/11/19 17:11
	Description: 5.29. El máximo común divisor de dos enteros es el entero más 
	grande que divide de forma uniforme cada uno de los dos números. Escriba una
	función gcd que regrese el máximo común divisor de dos enteros.
*/

#include<stdio.h>
#include<stdlib.h>

short gcd(short, short);

main()
{
	short num1, num2;
	
	printf("Introduzca dos numeros enteros: ");
	scanf("%hd%hd", &num1, &num2);
	printf("El MCD de los dos numeros es: %hd\n", gcd(num1, num2));
	
	system("pause");
	return 0;
}

short gcd(short num1, short num2)
{
   short factor, mcd = 1, resto1, resto2, cociente1, cociente2;
   
   cociente1 = num1;
   cociente2 = num2;
   
   for(factor = 2; factor <= num1; factor++)
   {
   		resto1 = cociente1 % factor;
   		resto2 = cociente2 % factor;
   		
   		if(cociente1 == 1)
   			resto1 = 1;
   			
   		if(cociente2 == 1)
   			resto2 == 1;
   			
   		if(cociente1 == 1 && cociente2 == 1)
   			break;
   		
   		if(resto1 == 0)
   		   cociente1 /= factor;
   		if(resto2 == 0)
   		   cociente2 /= factor;
   		
   		if(resto1 == 0 && resto2 == 0)
   			mcd *= factor;
   		
		if(resto1 == 0 || resto2 == 0)
			--factor;	
   }
   
   return mcd;
}
