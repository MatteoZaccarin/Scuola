//Botteon Andrea 4^DIT 19/11/2024
/* Scrivi un programma che accetti una lista di numeri interi come argomenti tramite linea di comando
e identifichi quali numeri sono primi tra quelli forniti.
Si assume che tuttui gli argomenti siano interi posistivi.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int n,i=0,div,num,conta=0;
	printf("I numeri primi sono: ");
	n=atoi(argv[i+1]);
	for(int i=0;i<n;i++){
		for(div=2; div<=num/2; div++){
			if(num%div==0){
				conta++;
			}
		}
		if(conta==0)
		printf("%d ",num);
	}
	return 0;
}
