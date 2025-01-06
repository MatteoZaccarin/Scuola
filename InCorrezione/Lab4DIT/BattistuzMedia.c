//Battistuz Fabio 4^DIT
//Scrivi un programma in C che accetti una lista di stringhe come argomenti tramite linea di comando e calcoli la media della lunghezza delle stringhe 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc,char* argv[])
{
	int media;
	int i;
	int somma=0;
	int t=1;
	for(i=1;i<argc;i++)
	{
		somma=somma+strlen(argv[i]);
		t++;
	media=somma/t;
	
	}
	printf("la media della stringa %d\n",media);
	for(i=1;i<argc;i++)
	{
		if(strlen(argv[i])>media)
		{
			printf<("la parola con la lunghezza superiore alla media e %s",argv[i]);
		}
	}
	return 0;
}
