/* 
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago de Cuba
	Date: 19/07/19 14:37
	Description: 3.46 Una empresa desea transmitir datos mediante el tel�fono, 
	pero estan preocupados de que sus tel�fonos pudieran estar intervenidos. 
	Todos sus datos se transmiten como enteros de cuatro d�gitos. Le han 
	solicitado ha usted que escriba un programa que cifre sus datos, de tal forma
	de que puedan ser transmitidos con mayor seguridad. Su programa debe leer un
	entero de cuatro d�gitos y cifrarlo como sigue: reemplazar cada d�gito por
	(la suma del d�gito m�s 7) m�dulo 10. A continuaci�n, intercambiar el primer
	d�gito con el tercero, y el segundo con el cuarto. A continuaci�n imprimir 
	el entero cifrado. Escriba un programa por separado, que introduzca un entero
	de cuatro d�gitos cifrado, y que lo descifre para formar el n�mero original.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero, cifrado = 0, contador = 0, posicion = 1;
	
	printf("Entre el numero: ");
	scanf("%d", &numero);
	
	while(++contador <= 4)
	{  
		cifrado += (numero % 10 + 7) * posicion;
		posicion *= 10;
		numero /= 10;
	}
	posicion = 1;
	contador = 0;
	numero = 0;
	
	printf("El valor cifrado es: %d\n", cifrado);
	printf("---------------------\n");
	printf("Entre el numero cifrado: ");
	scanf("%d", &cifrado);
	
	if(cifrado >= 7777)   /* Esto es debido a que el cifrado es de 4 d�gitos y */
	{							/* que el numero mas peque�o es 0000 y su cifrado es */
		while(++contador <= 4)				/* 7777 */
		{
			numero += (cifrado % 10 - 7) * posicion;
			posicion *= 10;
			cifrado /= 10;
		}
	
		printf("El valor descifrado es: %d\n", numero);
	}
	else 
		printf("El valor del cifrado es incorrecto\n");
		
   system("PAUSE");
   return 0;
}
