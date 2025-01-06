/*Caminotto Simone 4Dit 19/11/2024*/
/*Es 2: Avendo una lista di numeri interi passati come parmetri stampa a schermo i numeri primi*/
/*Nome file: CaminottoPrimi.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool primo_check(int);

int main (int argc, char* argv){
	//controllo se sono stati passati parametri
	if(argc==1){
		printf("\nInserire parametri");
		return 1;
	}
	else{
		int primo, i;
		for(i=1; i<=argc-1; i++){
			primo=atoi(&argv[i]);
			primo=primo_check(primo);
			if(primo==1){
				//se è primo converto nuovamente argv[i] in intero e lo stampo a schermo
				primo=atoi(&argv[i]);
				printf("%d\t", primo);
			}
			else if(primo==0){
				//il numero non è primo
				printf("-\t");
			}
			else{
				//se arrivo qui c'è un errore
				printf("ERRORE ACCORSO per argv[%d]\nTERMINAZIONE...", i);
				return 1;
			}
		}
	}
	return 0;
}

bool primo_check(n){
	int t;
	if(n==1){
		//è primo per forza
		return 1;
	}
	for(t=1; t<n/2; t++){
		if(n%t==0){
			return 0; //se il resto della divisione per t (t numero compreso tra 1 e n/2) risulta zero il numero non è primo e ritorno 0 (FALSE)
		}
	}
	//se sono arrivato fin qui allora il numero è primo
	return 1; //ritorno 1 (TRUE)
}
