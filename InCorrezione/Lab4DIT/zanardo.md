# File di zanardo

## Contenuto di zanardoGruppi.c

//Zanardo Gioele 4DIT
//ES2
//fatto con più parametri
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	int nGruppi, i, num, numPrima, diverso0;
	for(i=1; i<argc; i++){
		num=atoi(argv[i]);
		if(i>1){
			numPrima=atoi(argv[i-1]);
		}
		if(num==0 && numPrima!=0){
			nGruppi++;
		}
		if(num==1 && numPrima!=1){
			nGruppi++;
		}
		if(num!=0 && num!=1){
			diverso0++;
		}
	}
	printf("Numero di gruppi consecutivi: %d", nGruppi);
	if(diverso0==argc-1){
		printf("Non ci sono ne 1 ne 0");
	}
	return 0;
}

## Contenuto di zanardoMedia.c

// Zanardo Gioele 4DIT 
//Scrivi un programma in c che accetti una lista di stringhe, calcoli la lunghezza media e stampi le stringhe di lunghezza oltre la media
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	int i, sopramedia=0;
	float media, lung=0;
	for(i=1; i<argc; i++){
		lung=strlen(argv[i]);
		media=media+lung;
	}
	media=media/(argc-1);
	printf("\nLa lunghezza media e': %.2f", media);
	printf("\nLe stringhe piu' lunghe della media sono: ");
	for(i=1; i<argc; i++){
		lung=strlen(argv[i]);
		if(lung>media){
			printf("\n%s", argv[i]);
			sopramedia++;
		}
	}
	if(sopramedia==0){
		printf("\ntutte le stringhe hanno lo steso valore");
	}
	return	0;
}

## Contenuto di zanardoPrimi.c

// Zanardo Gioele 4DIT 
//Scrivi un programma in c che accetti una lista di interi e indentifichi quali numeri sono primi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	int num, i, divisore, primo;
	printf("I numeri primi sono:");
	for(i=1; i<argc; i++){
		num=atoi(argv[i]);
		primo=0;
		for(divisore=2; divisore<(num/2); divisore++){
			if(num%divisore==0){
				primo++;
			}
			
		}
		if(primo==0)
			printf(" %d", num);
	}
	return 0;
}
	
