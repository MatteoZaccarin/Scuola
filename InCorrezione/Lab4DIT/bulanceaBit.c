//Matteo Bulancea 4DIT 23/11
//Esercizio 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int contaBit=0,f;
	for(int i=1;i<argc;i++){
		int n=atoi(argv[i]);
		n=f;
		while(f<0){
			f=f%2;
			contaBit++;		
	}
	contaBit=0;
	printf("Numero: %d, Bit  neccessari: %d\n",n,contaBit);
	}
	
	return 0;
}
