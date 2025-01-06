# File di berto

## Contenuto di bertoBit.c

//Berto Giada 4^DIT 23/11/2024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[])
{
	if (argc<2)
		printf("non e' presente nessun parametro");
	
	else
	{
		int i;
		for(i=1;i<argc;i++)
		{
			int n=atoi(argv[i]);
			
			if (argv[i]<0)	//verifico se il numero è negativo
				printf("e' stato inserito un numero negativo");
				
			else
			{
				int cont=0;
				while (n!=0)
				{
					n=n/2;
					cont ++;
				}
				printf("numero %d, bit necessari %d\n", atoi(argv[i]), cont);
			}
			
		}
	}
	
	return 0;
}

## Contenuto di bertoGruppi.c

//Berto Giada 4^DIT 23/11/2024
/*ho usato più parametri*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[])
{
	if(argc<1)
		printf("non e' stato inserito nessun parametro");
	
	else
	{
		int i, cont=0;
		for(i=1;i<argc;i++)
		{
			if(atoi(argv[i])== 0 || atoi(argv[i])== 1)	//controlla che i parametri siano 0 o 1
			{
				if(atoi(argv[i]) == atoi(argv[i+1]))
					cont++;	
			}
		}
		printf("numero di gruppi consecutivi: %d", cont);
	}
	
	return 0;
}

## Contenuto di bertoMedia.c

//Berto Giada 4^DIT 19/11/2024
/*Scrivi un programma in C che accetti una lista di stringhe come argomenti tramite linea di comando 
e calcoli la media della lunghezza delle stringhe*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if(argc<1)
		printf("nessun parametro inserito");
	else 
	{
		int i, somma=0;
	
		for(i=1;i<argc;i++)
		{
			int n=strlen(argv[i]);
			somma=somma+n;
		}
		
		float media=somma/(argc-1);
		printf("la media e': %.2f\n", media);
		printf("Le stringhe piu lunghe della media sono: ");
		for(i=1;i<argc;i++)
		{
			if(strlen(argv[i])>media)
				printf("%s", argv[i]);
		}
	}
	return 0;
}

## Contenuto di bertoPrimi.c

//Berto Giada 4^DIT 19/11/2024
/*Si scriva un programma in C che accetti una lista di numeri interi come argomenti tramite linea di comando 
e identifichi quali numeri sono primi tra quelli forniti.
Si assume che tutti gli argomenti siano interi positivi.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if(argc<1)
		printf("nessun parametro inserito");
	else 
	{
		int i,j,p,n;
		printf("i numeri primi sono: \t");
		for(i=1;i<argc;i++)
		{
			p=0;
			n=atoi(argv[i]);
			for(j=2;j<=n/2;j++)
			{
				if(n%j==0)
					p++;	//mi segna se è divisibile per qualche numero=non primo
			}
			if(p==0)
				printf("%d ", n);
		}
	}
	return 0;
}
