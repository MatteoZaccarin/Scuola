/*
scrivere programma che accetti una lista di stringhe come argomenti tramite linea di comando
e caloli la media della lunghezza delle stringe
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i;
	float media=0, lunghezza;
	if(argc>2)
	{
		for(i=1;i<argc;i++)
		{
			lunghezza= strlen(argv[i]);
			media=media+lunghezza;		
		}
		media=media/(argc-1);
		printf("la media della lunghezza delle strighe e': %f ", media);
		printf("\n");
		printf("le parole piu lunghe sono:\n");
		for(i=1;i<argc;i++)
		{
			if(strlen(argv[i])>media)
			{
				printf("%s\n", argv[i]);
			}	
		}	
	}
	else
	{
		printf("numero di parametri insufficienti");
	}
	return 0;
}
