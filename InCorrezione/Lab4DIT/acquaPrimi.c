//Alberto Acqua 4 DIT 19/11/2024 Es 1

//scrivi un programma che accetti una lista di numeri interi come argomenti  e identifichi quali sono primi

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int i, j, resto, n;
	printf("I numeri primi:");
	for(i=1; i<argc; i++){
		n=atoi(argv[i]);
			if(n==2||n==3){
				printf("\t%d", n);
			}
		for(j=2; j<=n/2; j++){
			resto=n%j;
			if(resto==0)
				break;
			if(resto!=0&&j==n/2){
					printf("\t%d", n);
				}
		}
	}	
	return 0;
}
