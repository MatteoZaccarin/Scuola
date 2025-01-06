//Battistuz Fabio 4^DIT
//Si scriva un programma in c che accetti una lista di numeri interi come argomenti tramite linea di comando e identifichi quai numeri sono primi tra quelli forniti.Si assume che tutti gli argomenti siano interi e positivi

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc,char* argv[])
{
	if (argc<1)
	{
		printf("errore nell'inserimento dei parametri");
	}
	int i;
	int div;
	int n=atoi(argv[i]);
	for(i=1;i<argc;i++)
	{
		conta=0;
		for(div=2;div<n/2;div++)
		{
			if(n%div!=0)
			{
			 	
			}
			printf("il numero %d e primo",t);	
		}	
		
	}
	return 0;
}
