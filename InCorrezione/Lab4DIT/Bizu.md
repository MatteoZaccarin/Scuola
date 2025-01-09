# File di Bizu

## Contenuto di BizuBit.c

//Sem Bizu
/*ES 1*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if(argc>1)
	{
		int j;
		int i=0;
		int resto;
		
		for(j=1; j<argc; j++)
		{
			i=0;
			int n=atoi(argv[j]);
			while(n!=0)
			{
				n/=2;
				i++;
			}
			printf("numero: %d, bit necessari: %d\n", atoi(argv[j]), i);
		}
	}
	else
	{
		printf("numero di parametri errati");
	}
	return 0;
}

## Bizu gruppi
//Sem Bizu
/*ES 2*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if(argc<2)
	{
		printf("numero di argomenti errati");
	}
	else
	{
		int nSequenze=0;
		int sequenza=1;
		
		for(int i=1; i<argc; i++)
		{
			int n1=atoi(argv[i]);
			
			if(n1==0 || n1==1)
			{
				if(n1==atoi(argv[i+1]))
				{
					sequenza++;
				}
					
				else
				{
					if(sequenza>=1)
					{
						nSequenze++;
						sequenza=1;
					}
						
				}
			}
		}
		if(nSequenze==0)
			printf("nessun 1 o 0 e' stato inserito");
		
		else
			printf("numero di gruppi consecutivi: %d", nSequenze);
	}
	
	return 0;
}

//SOL devi controllare l'indice prima di accedervi
## Contenuto di BizuMedia.c

//Sem Bizu 19.11.2024
/*Scrivi un programma in C che accetti una lista di stringhe come argomenti tramite linea di comando e calcoli la media della lunghezza delle stringhe*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if(argc<3)
	{
		printf("numero di pareametri errato");
	}
	else
	{
		float media=0;
		
		for(int i=1; i<argc; i++)
		{
			printf("%s ", argv[i]);
		}
		
		printf("\n");
		
		for(int i=1; i<argc;i++)
		{
			media+=strlen(argv[i]);
		}
		
		media/=(argc-1);
		
		printf("la lunghezza media delle stringhe e' %.2f", media);
		printf("\nle stringhe piu' lunghe della media sono: ");
		
		for(int i=1; i<argc; i++)
		{
			if(strlen(argv[i])>media)
				printf("%s ", argv[i]);
		}
	}
	
	return 0;
}

## Contenuto di BizuPrimi.c

//Sem Bizu 19.11.2024
/*Si sciva un programma in C che accetti una lista di numeri interi come argomenti tramite linea di comando e identifichi quali numero sono primi tra quelli forniti.
Si assume che tutti gli argomenti siano interi positivi*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if(argc<3)
	{
		printf("numero di parametri errato");
	}
	else
	{
		printf("i numeri primi sono: ");
		for(int i=1; i<=argc; i++)
		{
			int n=atoi(argv[i]);
			//printf("\t%d", n);
			int primo=0;
			
			for(int j=2; j<n/2; j++)
			{
				if(n%j==0)
					primo++;
			}
			
			if(primo==0)
				printf("%d ", n);
		}
	}
	
	return 0;
}

//SOL 4 non è primo