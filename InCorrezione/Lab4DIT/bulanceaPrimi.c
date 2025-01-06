//Matteo Bulancea 4DIT 19/11/2024
/* 2) Si sriva un programma in C cha accetti una lista di numeri interi come argomenti tramite 
 linea di comando e identifichi quali numeri sono primi tra quelli forniti.Si assume che tutti gli argomenti siano interi positivi.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	if(argc<2){
		printf("Inserisci piu parametri!!");
	}else{
		int contaDiv=0;
		int n;
		printf("I numeri primi sono: ");
		for(int i=1;i<argc;i++){
			n=atoi(argv[i]);
			contaDiv=0;
			for(int j=1;j<n;j++){
				if(n%j==0)
					contaDiv++;
			}
			if(contaDiv==1){
				printf("%d ",n);
			}
		}
	}
	return 0;
}
