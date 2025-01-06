//Alberto Acqua 4 DIT 19/11/2024 Es 1

//scrivi un programma che accetti una lista di stringhe come argomenti  e calcoli la media della lunghezza delle stringhe

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	float lungMedia;
	int lMax=0, i;
	for(i=1; i<argc; i++){
		if(lMax<strlen(argv[i]))
			lMax=strlen(argv[i]);
		lungMedia=(lungMedia+strlen(argv[i]))/2;
	}
	printf("La lunghezza media e': %f", lungMedia);
	printf("\nLa/le parole piu' lunghe:");
	for(i=1; i<argc; i++){
		if(lMax==strlen(argv[i])){
			printf("\n%s", argv[i]);
		}	
	}
	
	return 0;
}
