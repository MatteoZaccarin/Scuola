//Durakovic Eldin	4DIT	23/11/2024
//esercizio 1
/*
	scrivi un programma in c che accetti una lista di numeri interi positivi o zero come argomenti tramite linea comando e calcoli il numero minimo di bit neccessari per rappresentare ciascun numero.
	il programma deve: calcolare il numero di bit necessari per ogni numero positivo o zero; ignorare eventuali argomenti non validi(cioè non numerici o numeri negativi); stampare per ogni numero valido il numero minimo di bit necessari per rappresentarlo
	se nessun numero valido e stato fornito stampare un messaggio adeguato.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[]){
	int i; 
	int num;
	int j;
	int count=0;  
	for(i=1; i<argc; i++){
		int num=atoi(argv[i]);
		if(num>=0){
			printf("\nERR");
			}
			while(num!=0){
				num=num/2;
				count++;
			}
				printf("\nNum: %d", argv[i]);
				printf("\nBit: %d", count);
		}
	
	return 0;
}

