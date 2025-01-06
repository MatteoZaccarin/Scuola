# File di bottari

## Contenuto di bottariBit.c

//Matteo Bottari 4^Dit 23/11/2024
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int n, bit, i, y, stop;
	float divisione;
	for(i=1; i<argc; i++)
	{
		n=atoi(argv[i]);
		stop=0;
		bit=0;
		divisione=n;
		if(n>=0)
		{
		for(y=0; y<n; y++)
		{
			while(stop==0)
			{
			divisione=divisione/2;
			if(divisione<=1)
			{
				stop++;
			}
			else
			{
				bit++;
			}
			}			
		}
		if(n%2==0)
		{
			bit++;
		}
		}
		else
			bit=0;
		if(n>0)
		{
			printf("Numeri: %d, Bit necessari %d \n", n, bit+1);	
		}
	}
	return 0;
}
//SOL estremamente complesso

## Contenuto di bottariGruppi.c

//Matteo Bottari 4^Dit 23/11/2024
//esercizio svolto con pi� parametri
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int numGruppi, i, n, numInizio, numFine;
	for(i=1; i<argc; i++)
	{
		n=atoi(argv[i]);
		numFine=atoi(argv[i+1]);
		if(i>1)
		{
			numInizio=atoi(argv[i-1]);	
		}
		if(n==0 && numInizio!=0)
		{
			numGruppi++;
		}
		if(n==1 && numInizio!=1)
		{
			numGruppi++;
		}
	}
	printf("Numeri di gruppi consecutivi tra loro: %d", numGruppi);
	return 0;
}


## Contenuto di bottariMedia.c

//Matteo Bottari 4^Dit 19/11/2024
//Scrivi un programma in C che accetti una lista di stringhe come argomenti tramite linea di comando e calcoli la media della lunghezza delle stringhe.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[])
{
	int n;
	int lunghezza=0;
	for(n=0; n<argc; n++)
	{	
	lunghezza=lunghezza+strlen(argv[n]);
	printf("La lunghezza della stringa inserita %d e': %d \n");
	}
	int calcolaMedia=lunghezza/argc;
	printf("La lunghezza di %d \n");
	printf("La lunghezza delle medie inserite e': ");
	for(n=0; n<argc; n++)
	{
		int lunghezza=strlen(argv[n]);
		if(lunghezza==calcolaMedia)
		printf("%s", argv[n]);
	}
	return 0;	
}
//SOL parti a  esaminare le stringhe dalla cella 0 di argv?

## Contenuto di bottariPrimi.c

//Matteo Bottari 4^Dit 19/11/2024
//Si scriva un programma in C che accetti una lista di numeri interi come argomenti tramite linea di comando e identifichi quali numeri sono rpimi tra quelli forniti. Si assume che tutti gli argomenti siano ineti positivi

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[])
{
	int a,b;
	int numero=2;
	int a=1;
	if(argc==1)
	for(a=1; a<argc; a++)
	{
		int num=atoi(argv[a]);
		for(b=0; b<argc; b++)
		{
			while(a==!)
		}
		if((numero%num)==0)
		printf("Il numero %d risulta primo \n", numero);
		a=0;
	}
	else
	{
		if(num==(numero*numero))
		{
			printf("Il numero %d non risulta primo");
		}
		num++;
	}	
	return 0;
}

//SOL non compila
