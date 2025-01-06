/*
Scrivi un programma in c che accetti una lista di numeri interi come argomenti
tramite linea di comando e identifichi quali numeri sono primi tra quelli.
CISERA FEDERICO 4DIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i, y;
	if(argc==1)
	{
		printf("Numero errato di parametri\n");
		return 0;
	}
	printf("I numeri primi sono : ");
	for(i=1; i<argc; i++)
	{
		int numero=atoi(argv[i]);
		for(y=0; y<numero+1; y++)
		{
			int divisore=2;
			if((numero%divisore)==0)
			{
				break;
			}
			divisore=divisore+1;
			if(divisore==numero-1)
			{
				printf("%d ", numero);
				break;
			}
		}	
	}			
	return 0;		
}

