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

/* n: El n�mero de discos a mover. 
	i: La estaca en la cual se acumular�n estos discos al inicio. 
	f: La estaca a la cual esta pila de discos se mover�.
	m: La estaca a utilizarse como �rea de almacenamiento temporal. 
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
	if(discos != 1)
	{	
		hanoi(discos - 1, estaca_inicial, almacen, estaca_final);
		printf("%d %c %d\n", estaca_inicial, 26, estaca_final);
		hanoi(discos - 1, almacen, estaca_final, estaca_inicial);
	}
	else if(discos == 1)
		printf("%d %c %d\n", estaca_inicial, 26, estaca_final);
}
