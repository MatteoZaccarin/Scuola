# File di negoita

## Contenuto di negoitaMedia.c

//Negoita Roberto Marian 4DIT 19/11/2024
/*Scribi un programma in c che accetti una lista di stringhe e ne calcoli la media delle lunghezze e stampare solo le stringhe con la lunghezza maggiore. salvarlo con cognomeMedia.c*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	float media=0;
	int i, l;
		for(i=1;i<argc;i++)
		{
			l=strlen(argv[i]);
			media=media+l;
		}
		media=media/(argc-1);
		printf("la media vale %f\n", media);
		printf("e i valori maggiori della media sono:");
		for(i=1;i<argc;i++)
		{
			if(strlen(argv[i])>media)printf(" %s", argv[i]);
		}
	return 0;
}

//SOL bravo
## Contenuto di negoitaPrimi.c

//Negoita Roberto Marian
/*Scrivi un programma che identifichi quali numeri siano primi tra quelli forniti. Salvarlo con negoitaPrimi*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
		int i, y, conta=0, a; //utilizzo i e y uno per contare e prendere ogni volta il valore del vettore dei parametri e y per verificare con il modulo se c'� resto 1 o 0
		int n=argc;
		printf("i numeri primi sono:");
		for(i=1;i<n;i++)
		{
			a=0;
			a=atoi(argv[i]);
			for(y=2;y<a/2+1;y++)
			{
				if(a%y==0)conta++;
			}
			if(conta==0)
			{
				printf(" %d", a);
			}
			conta=0;
		}
	return 0;
}

//SOL manca una libreria

## primo 
//Negoita Roberto Marian 4DIT 26/11/2024
/*Scrivi un programma in C che accetti una lista di stringhe come argomenti da linea di comando e determini:
Quale stringa contenga il numero massimo di vocali (a, e, i, o, u, sia maiuscole che minuscole). Voglio il numero e anche la stringa.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if(argc>1)
	{
		int i, j, max=0, conta=0, indice;
		char n;
		for(i=1;i<argc;i++)
		{
			for(j=0;j<strlen(argv[i]);j++)
			{
				n=argv[i][j];
				if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
				{
					conta++;
				}
				if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
				{
					conta++;
				}
			}
			if(conta>max)
			{
				max=conta;
				indice=i;
			}
			conta=0;
		}
		printf("\nla stringa con piu' vocali e' %s con %d vocali", argv[indice], max);
	}else{
		printf("\nnessun parametro inserito");
	}
	return 0;
}

//SOL

## secondo

//Negoita Roberto Marian 4DIT 26/11/2024
/*Scrivi un programma in C che accetti una lista di numeri interi tramite linea di comando e determini:La somma dei numeri primi forniti.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i, j, conta, somma=0;
	int n;
	if(argc>1)
	{
		for(i=1;i<argc;i++)
		{
			n=atoi(argv[i]);
			for(j=2;j<=n/2;j++)
			{
				if(n%j==0)conta++;
			}
			if(conta==0)somma=somma+n;
			conta=0;
		}
		printf("la somma dei numeri primi e' %d", somma);
	}else{
		printf("\nnessun parametro inserito");
	}
	return 0;
}

//SOL bravo