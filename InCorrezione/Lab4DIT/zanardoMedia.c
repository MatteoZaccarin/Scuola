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
