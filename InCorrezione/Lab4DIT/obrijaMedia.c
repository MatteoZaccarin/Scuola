//Denis Obrija 4dit 19/11/2024
/*
scrivi un programma in c che accetti una lista di stringhe come argomenti tramite linea di comando e
calcoli la media della lunghezza delle stringhe e 
ne stampi quelle che sono maggiori della media
Si salvi il file col nome cognomeMedia.c
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	if(argc<=1){
		printf("\nparametri insufficienti");
		return 0;
	}
	int n=0,somma=0;
	for(int i=1;i<argc;i++){
		n=strlen(argv[i]);//numero di lettere di un parametro 
		somma+=n;//somma delle lettere dei parametri 
	}
	float media=somma/(argc-1);//media tra la somma ed il numero di parametri -1
	printf("\nLa lunghezza media delle stringhe e' : %.2f",media);
	printf("\nLe stringhe piu' lunghe della media sono : ");
	for(int i=1;i<argc;i++){
		if(strlen(argv[i])>media){//confronto tra la media ed le lettere del parametro
			printf("%s ",argv[i]);//stampo se vero
		}
	}
	
	
	
	
	return 0;
}
