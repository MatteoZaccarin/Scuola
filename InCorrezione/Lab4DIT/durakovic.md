# File di durakovic

## Contenuto di durakovicBit.c

//Durakovic Eldin	4DIT	23/11/2024
//esercizio 1
/*
	scrivi un programma in c che accetti una lista di numeri interi positivi o zero come argomenti tramite linea comando e calcoli il numero minimo di bit neccessari per rappresentare ciascun numero.
	il programma deve: calcolare il numero di bit necessari per ogni numero positivo o zero; ignorare eventuali argomenti non validi(cio� non numerici o numeri negativi); stampare per ogni numero valido il numero minimo di bit necessari per rappresentarlo
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

//SOL un po' di cose strane ma funziona

## Contenuto di durakovicGruppi.c

//Durakovic Eldin	4DIT	23/11/2024
//esercizio 2

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(char* argv[], int argc){
	
	int i;
	int numeri;
	int j;
	int count=0;
	if(argc<1){
		printf("errrore");
	}else{
		
	}
}

	
	
	
	
	
	return 0;
}

//SOL non compila




## Contenuto di durakovicMedia.c

//Durakovic Eldin 4DIT 19/11/2024
//Esercizio 1. Scrivi il programma in  C che accetti una lista come argomenti tramite linea di comando e calcoli la media della lunghezza delle stringhe.
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	if(argc<-2) {	
		printf("ERR");
}
	int m;			//MEDIA
	int l = 0;		//LUNGHEZZA
	int i = 0;
	for (i=1;i<argc;i++) {
		l += strlen(argv[i]);
}
	printf("La lunghezza media della stringa e': \n", l);
	printf("Le stringhe piu' lunghe della media sono: ",  m);
	
	return 0;
}

//SOL nel caso non ci siano abbastanza parametri comunque esegui il codice, nomi variabili poco chiari, comunque non svolge quanto richiesto
## Contenuto di durakovicPrimi.c

//Durakovic Eldin 4DIT 19/11/2024
//Esercizio 2.	Si scriva un programma in C che accetti una lista di numeri interi come argomenti tramite linea di comando eidentifichi quali numeri sono primi tra quelli forniti. 
//				Si assume che tutti gli argomenti siano interi positivi.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	if(argc<-1) {	 
		printf("ERR");
		
		return 0;
}
	int i = 0;
	int vett[argc-1], Vet = 5, contatoreVet;
		for (i=0;i<0;i++) {
		vett[i]=atoi(argv[i-1]);
}
	
	
	
	return 0;
}
