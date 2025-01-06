/*
Scrivi un programma in c che accetti una lista di stringhe come argomenti 
tramite linea di comando e ne calcoli la media della lunghezza delle stringhe
CISERA FEDERICO 4DIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i;
	if(argc==1)
	{
		printf("Numero errato di parametri\n");
		return 0;
	}
	int lung=0;
	for(i=1; i<argc; i++)
	{
		lung=lung+strlen(argv[i]);
		printf("La lunghezza della stringa %d e' %d\n", argc, strlen(argv[i]));		
	}
	int media=lung/argc;
	printf("La media della lunghezza di %d stringhe e' %d\n", argc, media);
	printf("Le stringhe piu lunghe della media sono: ");
	for(i=1; i<argc; i++)
	{
		int lun=strlen(argv[i]);
		if(lun==media)
		{
			printf("%s ", argv[i]);	
		}	
	}
	return 0;		
}
