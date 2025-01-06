//Matteo Bulancea 4DIT 23/11
//Esercizio 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int conta0=0,conta1=0,contaG=0;
	if(argc<2){
		printf("Inserisci piu' parametri!!");
	}else{
	
	for(int i=1;i<argc;i++){
		int n=atoi(argv[i]);
		for(int j=0;j<argc;j++){
			if(n==0){
				conta0++;
			}else{
				conta1++;
			}
		}
		if(conta1>=1){
			contaG++;
		}
		if(conta0>=1){
			contaG++;
		}
		conta0=0;
		conta1=0;
	}
	printf("Il numero di gruppi consecutivi e': %d",contaG);
	return 0;
}
}
	


