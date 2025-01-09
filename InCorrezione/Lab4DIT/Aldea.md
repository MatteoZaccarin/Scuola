# File di Aldea

## Contenuto di AldeaBit.c

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
	int conta=0; //inizializzo questa variabile a zero, in quanto verr� conteggiata all'interno del while
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

//SOL giusto

## Contenuto di AldeaGruppi.c

// Aldea Robert 4^DIT 
/* Esercizio 2 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[]){ 
	int i; //variabili utilizzate all'interno dei for
	int conta=0; //inizializzo questa variabile a zero-->(in quanto verr� conteggiata) 
	if(argc<1){
		printf("\nERRORE: Inserirmento parametri.");
	}else{
		for(i=1; i<argc; i++){
			if( atoi(argv[i])==0  ||  atoi(argv[i])==1 ){  //questo if mi controlla i parametri inseriti --> (se sono 0 e 1)
				if( atoi(argv[i]) == atoi(argv[i]) ){
						conta++;
				}	
			}
			printf("\nNumero di gruppi consecutivi: %d", conta);
		}
	}
	return 0; 
}

//SOL neanche terminato


## Contenuto di AldeaMedia.c

//Aldea Robert 4^DIT 
/*	
	Esercizio 1 
	Programma in C che accetti una lista di stringhe come argomenti tramite linea di comando e 
	calcoli la media della lunghezza delle stringhe. salvare file cognomeMedia
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int Num=0, i, somma=0;
    float Media;  // Media come float per gestire i decimali
    if(argc<=1) 
	{
        printf("ERRORE.\n");
    }else
	{
        for (i=1; i<argc; i++) 
		{
            somma+= strlen(argv[i]);
        }
        Media =(float)somma/(argc-1);  // Divido per argc-1 perch� il primo argomento � il nome del programma
		printf("La media della lunghezza delle stringhe e': %.2f\n", Media);
    }

    return 0;  // Indica che il programma � terminato correttamente
}

## Contenuto di AldeaPrimi.c

//Aldea Robert 4^DIT
/*	
	Esercizio 2 Programma in C che accetti una lista di numeri interi come argomenti tramite linea di comando e 
	identifichi quali numeri sono primi tra quelli forniti. 
	Si assume che tutti gli argomenti siano interi positivi. 
	Salvare file AldeaPrimi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if(argc<=1) // Controllo se sono stati passati argomenti alla linea di comando
	{
		printf("ERRORE INSERIMENTO PARAMETRI \n");
		return 0;
	}else
	{
		float arr[argc-1]; // Dichiarazione di un array di float per memorizzare i numeri passati
		int i, contaD, Divisore=2;
		for(i=0; i<argc; i++) // Ciclo per verificare se ogni numero � primo
		{
			arr[i]=atoi(argv[i+1]);
			if(arr[i]<0 && arr[i]%0.1 != 0){
				printf("\nInserimento di un valore negativo e negativo \n");
				return 0;
			}
		}
		
		printf("\nI valori primi inseriti: ");
		for(i=0; i<argv; i++){
			while(Divisore<=arr[i]/2 && contaD==0)
			{
				Divisore++;
				
			}
			
			if(contaD==0) // Se contaD rimane 0, il numero � primo (non � stato trovato alcun divisore)
			{
				printf("%d", (int) arr[i]);
			}
		}
	}
	return 0;
}

//SOL non compila 2





