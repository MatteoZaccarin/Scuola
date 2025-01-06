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

