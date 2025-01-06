//Matteo Bulancea 4DIT 19/11/2024
/* 1) Scrivi un programma in C cha accetti una lista di stringhe come argomenti 
 tramite linea di comando e calcoli la media della lunghezza delle stringhe.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	if(argc<2){
		printf("Inserisci piu parametri!!");
	}else{
		float media=0,mediaTot;
		for(int i=1;i<argc;i++){
			int n=strlen(argv[i]);
			media=media+n;	
		}
		mediaTot=media/argc;
		printf("La lunghezza media delle stringhe e': %f\n",mediaTot);
		printf("Le stringhe con valore piu' grande della media sono : ");
		for(int i=1;i<argc;i++){
			int n1=strlen(argv[i]);
				if(mediaTot<n1){
					printf("%s ",argv[i]);
				}
	}
}
	return 0;
}
