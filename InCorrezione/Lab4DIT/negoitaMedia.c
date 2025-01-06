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
