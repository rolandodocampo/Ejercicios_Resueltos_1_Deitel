/*
	Author: Rolando Docampo Fernández
	Place: INEL Santiago
	Date: 27/08/19 09:34
	Description: 4.27 (Ternas pitagóricas). Un triángulo rectángulo puede tener 
	lados que sean todos enteros. El conjunto de tres valores enteros para los 
	lados de un triángulo rectángulo se conoce como una terna pitagórica. Estos 
	tres lados deben satisfacer la relación de que la suma de los cuadrados de 
	dos de los lados es igual al cuadrado de la hipotenusa. Encuentre todas las
	ternas pitagóricas para lado 1, lado 2 e hipotenusa, todos ellos no mayores
	de 500. Utilice un ciclo for de triple anidamiento, que pruebe todas las
	posibilidades. Este es un ejemplo de computación de "fuerza bruta". Para 
	muchas personas no es de forma estética agradable. Pero existen muchas 
	razones por las cuales estas técnicas son de importancia. Primero, con la
	potencia de las computadoras incrementándose a una velocidad tan fenomenal,
	soluciones que con la tecnología de sólo hace unos años habrían tomado años e
	inclusive siglos de tiempo de computadora para producir, pueden ser hoy 
	producidas en horas, minutos e inclusive segundos. !Chips microprocesadores
	recientes pueden procesar más de 100 millones de instrucciones por segundo!.
	Y en los años 90's probablemente aparecerán chips de microprocesadores de 
	billones de instrucciones por segundo. Segundo, como aprenderá en cursos de 
	ciencias de computación más avanzadas, hay gran número de problemas 
	interesantes para los cuales no exciste un enfoque algorítmico conocido salvo
	el uso de simple fuerza bruta. En este libro investigamos muchos tipos de 
	metodologías para la resolución de problemas. Consideraremos muchos enfoques
	de fuerza bruta para la solución de varios problemas interesantes.
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
