/*Caminotto Simone 4Dit 19/11/2024*/
/*Es 1: Calcolare la media della lunghezza delle stringhe passate come parametri*/
/*Nome file: CaminottoMedia.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv){
	//controllo ci siano almeno due parametri ovvero il numero minimo di informazioni per fare la media
	if(argc<=2){
		printf("\nNon abbastanza parametri passare minimo 2 parametri");
		return 1;
	}
	else{
		int i, l;
		double somma=0; //somma è un double perchè devo prevedere numeri non interi (per la media)
		for(i=1; i<=argc-1; i++){
			//aggiungo a somma la lunghezza della stringa a posizione i
			somma=somma+strlen(&argv[i]);
			//rimuovo da somma il carattere terminatore della stringa
			somma--;
		}
		//in questo momento i è uguale al numero di parametri da prendere in considerazione cioè argc-1
		somma=somma/i;
		//stampo a schermo somma che in questo momento contiene la media delle lunghezze
		printf("\nLa media è:\t%d", somma);
		printf("\nLe stringhe che superano la media sono:");
		for(i=1; i<=argc-1; i++){
			//assegno a l la lunghezza della stringa
			l=strlen(&argv[i]);
			//rimuovo il carattere terminatore
			l--;
			//la confronto con somma (in cui è contenuta la media)
			if(l>somma){
				//se è maggiore la stampo a schermo
				printf("\n\t-%s", argv[i]);
			}
		}
	}
	return 0;
}
