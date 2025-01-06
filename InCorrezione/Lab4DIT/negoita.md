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