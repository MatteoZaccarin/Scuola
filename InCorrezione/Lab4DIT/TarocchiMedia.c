//Luca Tarocchi 19/11/24 Verifica pratica di Tpsit
//TarocchiMedia.c
//es 1:Scivi un programma in c che accetti una lista di stringhe come argomenti tramite linea di comando
//e calcoli la media della lunghezza delle stringhe
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char*argv){
	int somma,a;
	float media;
	
	for(int i=0;i<argc;i++){
		a=strlen(argv[i]);	//metto in a la lunghezza del vettore nella posizione i di argv
		somma=somma+a;
	}
	media=somma/(argc-1);	//calcolo la media dividendo la somma per argc-1 ovvero il numero di vettori in argv
	printf("/nLa lughezza media delle stringhe: %f",media);
	return 0;
}
