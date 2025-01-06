//TOFAN DAVID 4DIT ES2
/*
scrivere programma che accetti una lista di numeri come argomenti tramite linea di comando e identifichi quali sono primi tra quelli forniti
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i,j, n, conta=0;
	if(argc>2)
	{
		for(i=1;i<argc;i++)
		{
			n=atoi(argv[i]);
			if(n==2)
			{
				printf("%d e' un numero primo\n", n);	
			}
			if(n%2!=0)
			{
				printf("%d e' un numero primo\n", n);	
			}		
		}
			
	}
	else
	{
		printf("numero di parametri insufficienti");
	}
	return 0;
}
