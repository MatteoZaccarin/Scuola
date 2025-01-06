//Alessandro Cella 4DIT
//Es 1 
//Scrivi un programma in C che accetti una lista di stringhe come argomenti
//tramite linea di comando e calcoli la media della lunghezza delle stringhe

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	float media, nStringhe=0;
	int i=1; 
	int lunghezza=strlen(argv[1]); 
	for(i=1; i<argc; i++)
	{
		lunghezza=strlen(argv[i]);
		media=lunghezza+media;
		nStringhe++;		
	}
	media=media/nStringhe;
	printf("La lunghezza media di e': %f", media);
	printf("\nLe stringhe piu lunghe della media sono: ");
	for(i=1; i<argc; i++)
	{
		lunghezza=strlen(argv[i]);
		if(media<lunghezza)
		{
			printf("%s", argv[i]);	
		}
			
	}
	return 0;
}
