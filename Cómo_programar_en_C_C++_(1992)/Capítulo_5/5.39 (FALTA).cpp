/*
	Author: Rolando Docampo Fern�ndez
	Place: Casa de Karenia
	Date: 04/12/19 15:55
	Description: 5.39. (Torres de Hanoi) Todos los cient�ficos de c�mputos 
	incipientes deben de enfrentarse con ciertos problemas cl�sicos, y las 
	Torres de Hanoi (vea la figura 5.18) es uno de los m�s famosos. Dice la 
	leyenda que en un templo del Lejano Este, los monjes est�n intentando mover
	una pila de discos de una estaca hacia otra. La pila inicial ten�a 64 discos
	ensartados en una estaca y acomodados de la parte inferior a la superior en
	tama�os decreciente. Los monjes est�n intentando mover la pila de esta 
	estaca a la segunda con las limitaciones que exactamente un disco debe ser
	movido a la vez, y en ning�n momento se puede colocar un disco mayor por 
	encima de un disco menor. Existe una tercera estaca disponible para 
	almacenamiento temporal de discos. Se supone que cuando los monjes terminen
	su tarea llegar� el fin del mundo, por lo cual para nosotros existe poca 
	motivaci�n en ayudarles en sus esfuerzos.
	Supongamos que los monjes est�n intentando mover los discos de la estaca 1 a
	la estaca 3. Deseamos desarrollar un algoritmo que imprima la secuencia 
	precisa de las transferencias disco a disco entre estacas.
	Si fu�ramos a enfocar este problema con m�todos convencionales, nos 
	encontrar�amos r�pidamente enmara�ados y sin esperanza de poder manejar los
	discos. En vez de ello, si atacamos el problema teniendo en mente la 
	recursi�n, de inmediato se vuelve manejable. El mover n discos puede ser
	visualizado en t�rminos de s�lo mover n - 1 discos (y de ah� la recursi�n),
	como sigue:
		1. Mover n - 1 discos de la estaca 1 a la estaca 2, utilizando a la 
		   estaca 3 como un �rea de almacenamiento temporal.
		2. Mover el �ltimo disco (el m�s grande) de la estaca 1 a la estaca 3.
		3. Mover los n - 1 discos de la estaca 2 a la estaca 3, utilizando la 
		   estaca 1 como �rea de almacenamiento temporal.
	El proceso termina cuando la �ltima tarea conciste en mover el disco n = 1, 
	es decir, el caso base. Esto se lleva a cabo en forma trivial moviendo el 
	disco, sin necesidad de utilizar el �rea temporal de almacenamiento.
	Escriba un programa para resolver el problema de las Torres de Hanoi. 
	Utilice	una funci�n recursiva con cuatro par�metros:
		1. El n�mero de discos a mover.
		2. La estaca en la cual se acumular�n estos discos al inicio.
		3. La estaca a la cual esta pila de discos se mover�.
		4. La estaca a utilizarse como �rea de almacenamiento temporal.
	Su programa deber� de imprimir las instrucciones precisas que deber�n 
	seguirse para mover los discos de la estaca de arranque a la estaca destino.
	Por ejemplo, para mover una pila de tres discos de la estaca 1 a la estaca
	3, su programa deber� imprimir la serie siguiente de movimientos:
		1 -> 3 (esto significa mover un disco de la estaca 1 a la estaca 3)
		1 -> 2
		3 -> 2
		1 -> 3
		2 -> 1
		2 -> 3
		1 -> 3
*/
#include<stdio.h>
#include<stdlib.h>

/*  n: El n�mero de discos a mover. 
	i: La estaca en la cual se acumular�n estos discos al inicio. 
	f: La estaca a la cual esta pila de discos se mover�.
	m: La estaca a utilizarse como �rea de almacenamiento temporal. 
*/
void Hanoi(short, short, short, short);
short mayor(short, short, short);

main()
{
	short n, i, f, m;
	
	printf("Para resolver las Torres de Hanoi, necesito que introduzcas esto:\n");
	printf("El numero de discos a mover: ");
	scanf("%hd", &n);
	printf("La estaca en la cual se acumularan estos discos al inicio: ");
	scanf("%hd", &i);
	printf("La estaca a la cual esta pila de discos se movera: ");
	scanf("%hd", &f);
	printf("La estaca a utilizarse como area de almacenamiento temporal: ");
	scanf("%hd", &m);
	Hanoi(n, i, f, m);
	
	system("PAUSE");
	return 0;
}

void Hanoi(short n, short i, short f, short m)
{
	static short memoria = n, contador, contador2;
	static short e1, e2, e3;
	
	if(n == 1)
	{
		printf("%hd -> %hd\n", i, f);
		++contador;
		
		if(contador < 2)
			return Hanoi(memoria, m, f, i);
		else
		{
			contador = 0;
			contador2 = 0;
			return;
		}
	}
	else
	{
		if(contador2 == 0)
		{
			switch(i)
			{
				case 1:
					e1 = memoria;
					break;
				case 2:
					e2 = memoria;
					break;
				case 3:
					e3 = memoria;
					break;
				default:
					printf("Error en la identificaci�n de la estaca inicial.\n");
					break;
			}
		}
		else
		{
				
		}
		
		contador2++;
		return Hanoi(n - 1, i, f, m);
	}
}

short mayor(short disc_e1, short disc_e2, short disc_e3)
{
	short maximo = disc_e1;
	
	if(maximo < disc_e2)
		maximo = disc_e2;
	else if(maximo < disc_e3)
		maximo = disc_e3;
		
	if(maximo == disc_e1)
		return 1;
	else if(maximo == disc_e2)
		return 2;
	else
		return 3;
}
