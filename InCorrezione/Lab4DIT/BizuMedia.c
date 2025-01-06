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
