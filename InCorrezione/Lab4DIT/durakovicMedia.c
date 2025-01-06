//Durakovic Eldin 4DIT 19/11/2024
//Esercizio 1. Scrivi il programma in  C che accetti una lista come argomenti tramite linea di comando e calcoli la media della lunghezza delle stringhe.
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	if(argc<-2) {	
		printf("ERR");
}
	int m;			//MEDIA
	int l = 0;		//LUNGHEZZA
	int i = 0;
	for (i=1;i<argc;i++) {
		l += strlen(argv[i]);
}
	printf("La lunghezza media della stringa e': \n", l);
	printf("Le stringhe piu' lunghe della media sono: ",  m);
	
	return 0;
}
