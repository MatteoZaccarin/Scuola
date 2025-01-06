//Botteon Andrea 4^DIT 19/11/2024
/* Scrivi un programma che accetti una lista di stringhe comne argomenti 
tramite linea di comando e calcoli la media della lunghezza delle stringhe.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int n=0,somma=0;
	float media=0.0;
	for(int i=1;i<argc; i++){
		n=strlen(argv[i]);
		somma+=n;
	}
	media=somma/(argc-1);
	printf("%.2f", media);
	return 0;
}
