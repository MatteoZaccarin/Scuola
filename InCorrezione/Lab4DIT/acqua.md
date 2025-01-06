# File di acqua

## Contenuto di acquaMedia.c

//Alberto Acqua 4 DIT 19/11/2024 Es 1

//scrivi un programma che accetti una lista di stringhe come argomenti  e calcoli la media della lunghezza delle stringhe

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	float lungMedia;
	int lMax=0, i;
	for(i=1; i<argc; i++){
		if(lMax<strlen(argv[i]))
			lMax=strlen(argv[i]);
		lungMedia=(lungMedia+strlen(argv[i]))/2;
	}
	printf("La lunghezza media e': %f", lungMedia);
	printf("\nLa/le parole piu' lunghe:");
	for(i=1; i<argc; i++){
		if(lMax==strlen(argv[i])){
			printf("\n%s", argv[i]);
		}	
	}
	
	return 0;
}
//SOL non si calcola cosí la media
## Contenuto di acquaPrimi.c


//Alberto Acqua 4 DIT 19/11/2024 Es 1

//scrivi un programma che accetti una lista di numeri interi come argomenti  e identifichi quali sono primi

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int i, j, resto, n;
	printf("I numeri primi:");
	for(i=1; i<argc; i++){
		n=atoi(argv[i]);
			if(n==2||n==3){
				printf("\t%d", n);
			}
		for(j=2; j<=n/2; j++){
			resto=n%j;
			if(resto==0)
				break;
			if(resto!=0&&j==n/2){
					printf("\t%d", n);
				}
		}
	}	
	return 0;
}

//SOL si poteva fare senza if per il 2 e 3 e senza break, quindi 6

## acquaPrimo.c
//Alberto Acqua 4 dit 26/11/2024
/*Scrivi un programma in C che accetti una lista di stringhe come argomenti da linea di comando e determini:
Quale stringa contenga il numero massimo di vocali (a, e, i, o, u, sia maiuscole che minuscole). 
Voglio il numero e anche la stringa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int i, j, conta=0, contaMax=0;
	int vet[argc];//per memorizzare il numero di vocali di ogni parola
	printf("Le parole:\n");
	for(i=1;i<argc;i++){
		printf("%s\t", argv[i]);
		for(j=0;j<strlen(argv[i]);j++){
			if(argv[i][j]=='a'||argv[i][j]=='e'||argv[i][j]=='i'||argv[i][j]=='o'||argv[i][j]=='u'
			||argv[i][j]=='A'||argv[i][j]=='E'||argv[i][j]=='I'||argv[i][j]=='O'||argv[i][j]=='U'){
				conta++;
			}
		}
		vet[i]=conta;
		//printf("\nN vocali: %d\n", vet[i]);
		if(vet[i]>contaMax)
			contaMax=vet[i];
		conta=0;
	}
	for(i=1;i<argc;i++){
		if(vet[i]==contaMax)
			printf("\n%s, %d vocali", argv[i], vet[i]);
	}
	return 0;
}

//SOL si poteva fare meglio, bastava salvare la i della parola massima e in una variabile il numero delle sue vocali


## acquaSecondo.c
//Alberto Acqua 4 dit 26/11/2024
/*Scrivi un programma in C che accetti una lista di numeri interi tramite linea 
di comando e determini:La somma dei numeri primi forniti.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int n, somma=0, i, j, resto, conta=0;
	printf("I numeri:\n");
	for(i=1;i<argc;i++){
		n=atoi(argv[i]);
		printf("%d\t", n);
		for(j=2;j<=n/2;j++){
			resto=n%j;
			if(resto==0){
				conta++;
			}
		}
		if(conta==0){
			//printf("\nN: %d\n", n);
			somma+=n;
		}
		conta=0;
	}
	printf("\nLa somma e' %d", somma);
	return 0;
}

//SOL perfetto