// Aldea Robert 4^DIT 
/* Esercizio 1 
		Programma che accetta una lista di numeri interi positivi o zero coem argomenti tramite linea di comando e 
		calcoli il numero minimo di bit necessari per rappresentare ciascun numero
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[]){
	int i, j; //variabili utilizzate all'interno dei for
	int conta=0; //inizializzo questa variabile a zero, in quanto verrà conteggiata all'interno del while
	if(argc<1){
		printf("\nERRORE: Inserirmento parametri.");
	}else{
		for(i=1; i<argc; i++)
		{
			int num=atoi(argv[i]);
			if(argv[i]<0){
				printf("\nERRORE: Inserimento di un numero negativo, inserire valori corretti.");
			}else{
				while(num!=0){
				num=num/2;
				conta++;
				}
			printf("\nNumero: %d, Bit necessari: %d", atoi(argv[i]), conta);
			}
		}
	}
	return 0;
}
