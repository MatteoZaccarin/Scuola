# File di cester

## Contenuto di cesterBit.c

//Cester Roberto  4dit
//es.1

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	int num, i, j, bit, divisore;
	
	for(i=1; i<argc; i++){
		num=atoi(argv[i]);
		bit=0;
		divisore=num;
		
		while(divisore!=0){
		 	divisore=divisore/2;
		 	bit++;
		}
	
	if(num==0)
		bit=1;
	printf("Numero: %d, Bit necessari: %d \n", num, bit);
	}
	return 0;
	
}

//SOL bravo

## Contenuto di cesterGruppi.c

//Cester Roberto  4dit  23/11/2024
//es.2
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv){
	
	
}

//SOL almeno il return 0

## Vocali
//Cester Roberto   4dit
//Scrivi un programma in C che accetti una lista di stringhe come argomenti da linea di comando e determini:
//Quale stringa contenga il numero massimo di vocali (a, e, i, o, u, sia maiuscole che minuscole). 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int i, j, contatore=0, contaMax=0;
	int vet[argc];
	printf("Le parole:\n");
	
	for(i=1;i<argc;i++){
		printf("%s\t", argv[i]);
		for(j=0;j<strlen(argv[i]);j++){
			if(argv[i][j]=='a'||argv[i][j]=='e'||argv[i][j]=='i'||argv[i][j]=='o'||argv[i][j]=='u'
			||argv[i][j]=='A'||argv[i][j]=='E'||argv[i][j]=='I'||argv[i][j]=='O'||argv[i][j]=='U'){
				contatore++;
			}
		}
		vet[i]=contatore;
		if(vet[i]>contaMax)
			contaMax=vet[i];
		contatore=0;
	}
	for(i=1;i<argc;i++){
		if(vet[i]==contaMax)
			printf("\n %s, %d vocali", argv[i], vet[i]);
	}
	return 0;
}

//SOL bravo

## contaprimi

//Cester Roberto  4dit   
//Scrivi un programma in C che accetti una lista di numeri interi tramite linea di comando e determini:La somma dei numeri primi forniti.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i, j, conta;
    int n;
    int somma=0;
    if(argc>1){
        for(i=1;i<argc;i++){
            n=atoi(argv[i]);
            for(j=2;j<=n/2;j++){
                if(n%j==0)conta++;
            }
            
            if(conta==0)somma=somma+n;
            conta=0;
        }
        printf("la somma dei numeri primi e' %d", somma);
    }
	else{
        printf("nessun parametro inserito");
    }
    return 0;
}

//SOL bravo
