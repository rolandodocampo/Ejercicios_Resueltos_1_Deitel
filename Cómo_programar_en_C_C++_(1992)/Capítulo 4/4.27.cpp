/*
	Author: Rolando Docampo Fern�ndez
	Place: INEL Santiago
	Date: 27/08/19 09:34
	Description: 4.27 (Ternas pitag�ricas). Un tri�ngulo rect�ngulo puede tener 
	lados que sean todos enteros. El conjunto de tres valores enteros para los 
	lados de un tri�ngulo rect�ngulo se conoce como una terna pitag�rica. Estos 
	tres lados deben satisfacer la relaci�n de que la suma de los cuadrados de 
	dos de los lados es igual al cuadrado de la hipotenusa. Encuentre todas las
	ternas pitag�ricas para lado 1, lado 2 e hipotenusa, todos ellos no mayores
	de 500. Utilice un ciclo for de triple anidamiento, que pruebe todas las
	posibilidades. Este es un ejemplo de computaci�n de "fuerza bruta". Para 
	muchas personas no es de forma est�tica agradable. Pero existen muchas 
	razones por las cuales estas t�cnicas son de importancia. Primero, con la
	potencia de las computadoras increment�ndose a una velocidad tan fenomenal,
	soluciones que con la tecnolog�a de s�lo hace unos a�os habr�an tomado a�os e
	inclusive siglos de tiempo de computadora para producir, pueden ser hoy 
	producidas en horas, minutos e inclusive segundos. !Chips microprocesadores
	recientes pueden procesar m�s de 100 millones de instrucciones por segundo!.
	Y en los a�os 90's probablemente aparecer�n chips de microprocesadores de 
	billones de instrucciones por segundo. Segundo, como aprender� en cursos de 
	ciencias de computaci�n m�s avanzadas, hay gran n�mero de problemas 
	interesantes para los cuales no exciste un enfoque algor�tmico conocido salvo
	el uso de simple fuerza bruta. En este libro investigamos muchos tipos de 
	metodolog�as para la resoluci�n de problemas. Consideraremos muchos enfoques
	de fuerza bruta para la soluci�n de varios problemas interesantes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int lado1, lado2, lado3;
	int copia1  = 0, copia2 = 0;
	
	printf("%s\t%s\t%s\n", "Lado 1", "Lado 2", "Hipotenusa");
	for(lado1 = 1; lado1 <= 500; lado1++)
	{
		for(lado2 = 1; lado2 <= 500; lado2++)
		{
			for(lado3 = 1; lado3 <= 500; lado3++)
			{	
				if(pow(lado1, 2) == pow(lado2, 2) + pow(lado3, 2))	
				{
					if(lado2 >= lado3)
					   printf("%d\t%d\t%d\n", lado3, lado2, lado1);
				}
			}
		}
	}

   system("PAUSE");
   return 0;
}
