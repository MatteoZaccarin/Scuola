# File di obrija

## Contenuto di obrijaBit.c

//Denis Obrija 4dit 23/11/2024
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
    if(argc>1){
        for(int i=1;i<argc;i++) {
            int n=atoi(argv[i]);
			if (n<=0) {
                printf("\nErrore: %s non � un numero positivo.", argv[i]);
                }
			int conta=0;
			while(n>0) {
                n=n/2;
                conta++;
            }
			printf("\n%s servono %d bit", argv[i], conta);
        }
    }else{
        printf("\nParametri insufficienti");
    }

    return 0;
}



## Contenuto di obrijaGruppi.c

//Denis Obrija 4dit 23/11/2024

int main(int argc, char* argv[]){
	if(argc<1){
		printf("\nParametri insufficienti");
		}else{
			int gruppo=0;
			int conta=0;
			for(int i=1;i<argc;i++){
				if((argv[1][i]==1)&&(argv[1][i]==0)){
					conta++;
					if(conta==3){
						gruppo++;
						conta=0;
					}
					//ho provato a fare una stringa unica
					//non funziona
				}
				printf(" %d ", gruppo);
			}
			}
		return 0;

}

## Contenuto di obrijaMedia.c

//Denis Obrija 4dit 19/11/2024
/*
scrivi un programma in c che accetti una lista di stringhe come argomenti tramite linea di comando e
calcoli la media della lunghezza delle stringhe e 
ne stampi quelle che sono maggiori della media
Si salvi il file col nome cognomeMedia.c
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	if(argc<=1){
		printf("\nparametri insufficienti");
		return 0;
	}
	int n=0,somma=0;
	for(int i=1;i<argc;i++){
		n=strlen(argv[i]);//numero di lettere di un parametro 
		somma+=n;//somma delle lettere dei parametri 
	}
	float media=somma/(argc-1);//media tra la somma ed il numero di parametri -1
	printf("\nLa lunghezza media delle stringhe e' : %.2f",media);
	printf("\nLe stringhe piu' lunghe della media sono : ");
	for(int i=1;i<argc;i++){
		if(strlen(argv[i])>media){//confronto tra la media ed le lettere del parametro
			printf("%s ",argv[i]);//stampo se vero
		}
	}
	
	
	
	
	return 0;
}

## Contenuto di obrijaPrimi.c

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
		int conta=0;//conta che sar� la mia sentinella e verifica la presenza di numeri non primi
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

//SOL bravo ma non serviva creare il vettore di interi, anche perchè non conosci n in compilazione e va nello stack