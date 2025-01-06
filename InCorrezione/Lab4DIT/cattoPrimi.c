//Catto Martina 4^DIT 19/11/24
//Esercizio 2
/*Scrivi un programma che accetti una lista di numeri interi come argoment tramite linea di comando e identifichi quali numeri sono primitra quelli forniti.
Si assume che tutti gli argomenti siano interi positivi*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int primi[100];
	int i, j, num;
	printf("I numeri primi sono:");
	printf("\n");
	for(i=1;i<argc;i++){
		num=atoi(argv[i]);
		for(j=2; j<=num/2; j++){
			if(num%j!=0){
				printf("%d", num);
				printf("\n");
			}
		}
	}
	return 0;
}
