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
