//Denis Obrija 4dit 19/11/2024
/*
Scrivi un programma in C  che accetti una lista di numeri interi come argomenti tramite linea di comando 
e identifichi quali numeri sono PRIMI tra quelli forniti.
Si assume che tutti gli argomenti siano interi positivi 
Si salvi il file col nome cognomePrimi.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	if(argc<=1){
		printf("\nparametri insufficienti");
		return 0;
	}
	int n=argc-1;
	int vet[n];
	for(int i=0;i<n;i++){
		vet[i]=atoi(argv[i+1]);// rendo i parametri in interi
		if(vet[i]<0){
			printf("\nHai inserito un parametro negativo!!");
			return 0;
		}
	}
	printf("\nI numeri primi sono: ");
	for(int i=0;i<n;i++){
		int div=2;//il divisore inizializzato a 2
		int conta=0;//conta che sarà la mia sentinella e verifica la presenza di numeri non primi
		while(div<=vet[i]/2 && conta==0){// sara' inizializzato a 0 per ogni ciclo
			if(vet[i]%div==0 ){
				conta++;
			}else{
				div++;
			}
		}
		if(vet[i]==1){//escludo il caso in cui il parametro equivalga ad 1
				conta++;
			}
		if(conta==0){
			printf("%d ",vet[i]);
		}
	}
	
	
	
	
	
	return 0;
}
