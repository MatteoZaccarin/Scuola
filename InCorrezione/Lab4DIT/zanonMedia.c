//Gianluca Zanon 4 dit es1
/*scrivi un programma in c che accetti una lista di stringhe come argomenti 
tramite linea di comando e calcoli la media della lunghezza delle stringhe e stampare le stringhe*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	float media, lungh;
	int i, j, slun, scambia;
	if(argc>=2){
		for(i=1; i<argc; i++){
			lungh=lungh+strlen(argv[i]);
		}
		media=lungh/i;
		printf("la lunghezza media delle stringhe e': %f", media);
		for(j=1; j<argc-1; j++){
			if(strlen(argv[j])>strlen(argv[j+1])){
				slun=argv[j];
				printf("\nla stringa piu' lunga e': %s", slun);
			}else{
				argv[j]=argv[j+1];
			}
		}
	}
	return 0;
}
