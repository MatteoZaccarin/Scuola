//Catto Martina 4^DIT 19/11/24
//Esercizio 1
/*Scrivi un programma che accetti una lista di stringhe come argomenti tramite linea di comando e calcoli la media della lugnhezza delle stringhe*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int i;
	double media=0;
	for(i=1;i<argc;i++){
		media=media+strlen(argv[i]);
	}
	media=media/argc;
	printf("La lunghezza media delle strighe e' %f", media);
	return 0;
}
