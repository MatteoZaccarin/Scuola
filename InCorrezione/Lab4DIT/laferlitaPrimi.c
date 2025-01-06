//Mauro La Ferlita 4^DIT 19/11/2024

/*2)Si scriva un programma in C che accetti una lista di numeri interi come argomenti
tramite linea di comando e identifichi quali numeri sono primi tra quellli forniti.
Si assume che tutti gli argomenti siano interi positivi*/

//librerie
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//main
int main(int argc, char* argv[])
{
	int resto/*variabile che memorizza il resto tra n%i*/, x/*contatore*/, i/*e il nostro divisore*/, n/*contiene il numero intero con il comando atoi*/;
	printf("I numeri primi sono: ");
	for(x=1; x<argc; x++)
	{
		//ad ogni ciclo rinizializzo resto ed i
		resto=1;
		i=2;
		n=atoi(argv[x]);//vado trasformare argv[i] in intero e lo assegno ad n
		//verifico nel if se il valore sia positivo quindi maggiore di 0
		if(n>0)
		{
			while(resto!=0 && i<n)//dento il while verifico che resto sia diverso da 0 e la varia
			{
				resto=n%i;//calcola il resto
				i++;//incremento i di uno
			}
			//verifico che i sia uguale a n
			if(i==n)
			{
				printf("%d ", n);	//se e vero vado a stampare il valore primo
			}
		}
	}
	
	return 0;
}
