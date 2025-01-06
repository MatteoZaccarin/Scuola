# File di Tarocchi

## Contenuto di TarocchiBit.c

//Tarocchi Luca 23/11/2024
//TarocchiBit.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char*argv){
	int nBit,i,num,potenza=2,j=1;
	int numParametri=argc-1;
	for (i=0;numParametri>0;numParametri--){
		num=atoi(&argv[numParametri]);
		if(numParametri<0){
			printf("il numero inserito � negativo");
		}
		else{
			while(nBit==0){
				potenza=potenza*2;
				j++;				//tengo conto del numero di volte in cui ho moltiplicato il 2 come indice della potenza
				if(potenza>=num){	//se la potenza di 2 � maggiore del numero il numero di bit corrisponde all'indice della potenza
					nBit=j;
				}
			}
			printf("Numero: %d, Bit necessari: %d",num,nBit);
		}
	}
	return 0;
}

//SOL nbit va inizializzato, inoltre il while è finchè è diverso da 0

## Contenuto di TarocchiGruppi.c

//Tarocchi Luca 23/11/2024
//TarocchiGruppi.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char*argv){
	int contaGruppi,i,num;
	int numParametri=strlen(&argv[0]);
	for (i=0;numParametri>0;numParametri--){
		num=atoi(&argv[0][numParametri]);
		if(num==0 || num==1){	//se il numero � binario conteggio un gruppo
			contaGruppi++;
			while(num==argv[numParametri+1]){ //se il numero successivo � uguale lo salto contandolo nel gruppo gia conteggiato
				numParametri--;
				}
			}
		}
	}
	if(contaGruppi>0){
	printf("Numero di gruppi consecutivi: %d",contaGruppi);
	}
	else{
		printf("Non sono stati inseriti numeri binari all'interno della stringa");
	}
	return 0;
}

//SOL non compila
## Contenuto di TarocchiMedia.c

//Luca Tarocchi 19/11/24 Verifica pratica di Tpsit
//TarocchiMedia.c
//es 1:Scivi un programma in c che accetti una lista di stringhe come argomenti tramite linea di comando
//e calcoli la media della lunghezza delle stringhe
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char*argv){
	int somma,a;
	float media;
	
	for(int i=0;i<argc;i++){
		a=strlen(argv[i]);	//metto in a la lunghezza del vettore nella posizione i di argv
		somma=somma+a;
	}
	media=somma/(argc-1);	//calcolo la media dividendo la somma per argc-1 ovvero il numero di vettori in argv
	printf("/nLa lughezza media delle stringhe: %f",media);
	return 0;
}

//SOL hai dichiarato male argv, inoltre cicli da i=0

## Contenuto di TarocchiPrimi.c

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
				return 0;	//se la variabile stop � stata incrementata esco dal ciclo
			}
			else{
				if(valore%num==0){
					stop++;	//se il modulo di valore e num � diverso da zero il numero non � pari
				}
			}
		}
		if(stop==0){
			vet[j]=valore; 	//se dopo aver concluso il ciclo la variabile stop � a zero il numero � primo
			j++;
		}
	}
	printf("I numeri primi sono: ")
	for(j=0;vet[j]==0;j++){
		printf("/t%d",vet[j]);
	}
	return 0;
}

//SOL troppi errori di compilazione