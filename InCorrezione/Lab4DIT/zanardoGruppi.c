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
