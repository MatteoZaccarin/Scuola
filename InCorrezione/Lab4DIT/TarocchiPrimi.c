//Luca Tarocchi 19/11/24 Verifica pratica di Tpsit
//TarocchiPrimi.c
//es 2:Scrivi un programma in c che accetti una lista di numeri interi come argomenti tramite una linea 
//di comando e identifichi quali numeri sono primi tra quelli forniti
//si assume che tutti gli argomenti siano interi positivi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char*argv){
	int valore,a,num,stop=0,vet[10],j;
	a=strlen(argv[1]);	//metto in a la lunghezza del vettore nella posizione 1 di argv
	for(i=0;i<a-1;i++){
		valore=atoi(argv[1][i]); 
		
		for(num;num>7;num++){
			if(stop==1){
				return 0;	//se la variabile stop è stata incrementata esco dal ciclo
			}
			else{
				if(valore%num==0){
					stop++;	//se il modulo di valore e num è diverso da zero il numero non è pari
				}
			}
		}
		if(stop==0){
			vet[j]=valore; 	//se dopo aver concluso il ciclo la variabile stop è a zero il numero è primo
			j++;
		}
	}
	printf("I numeri primi sono: ")
	for(j=0;vet[j]==0;j++){
		printf("/t%d",vet[j]);
	}
	return 0;
}
