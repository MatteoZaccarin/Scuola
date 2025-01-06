# File di catto

## Contenuto di cattoBit.c

//Catto Martina 4^DIT 23/11/2024
//Es 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[]){
	int n, i, conta=0, ris=0;
	for(i=1; i<argc; i++){
		n=atoi(argv[i]);
		if(n>0){
			while(n!=0 && n>0){
				ris=n/2;
				conta++;
			}
			printf("\n Per il numero %d ho bisogno di %d bit", n, conta);
			conta=0;
			ris=0;
		}
		i++;
	}
	return 0;
}

//SOL loop

## Contenuto di cattoGruppi.c

//Catto Martina 4^DIT 23/11/2024
//Es 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[]){
	int num, grup=0, i, j;
	for(i=1; i<argc; i++){
		for(j=2; j<argc; j++){
		num=atoi(argv[i]);
		if(num==0){
			grup++;
		}
		else{
			if(num==1){
				grup++;
			}
		}
	}
	}
	printf("Numero di gruppi consecutivi: %d", grup);
	return 0;
}

//SOL bastava un ciclo e salvarsi il carattere precedente
## Contenuto di cattoMedia.c

//Catto Martina 4^DIT 19/11/24
//Esercizio 1
/*Scrivi un programma che accetti una lista di stringhe come argomenti tramite linea di comando e calcoli la media della lugnhezza delle stringhe*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int i;
	double media=0;
	for(i=1;i<argc;i++){
		media=media+strlen(argv[i]);
	}
	media=media/argc;
	printf("La lunghezza media delle strighe e' %f", media);
	return 0;
}

//SOL manca la parte di stampare le stringhe di dim superiore alla media, la media é fratto arc-1 e non argc
## Contenuto di cattoPrimi.c

//Catto Martina 4^DIT 19/11/24
//Esercizio 2
/*Scrivi un programma che accetti una lista di numeri interi come argoment tramite linea di comando e identifichi quali numeri sono primitra quelli forniti.
Si assume che tutti gli argomenti siano interi positivi*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int primi[100];
	int i, j, num;
	printf("I numeri primi sono:");
	printf("\n");
	for(i=1;i<argc;i++){
		num=atoi(argv[i]);
		for(j=2; j<=num/2; j++){
			if(num%j!=0){
				printf("%d", num);
				printf("\n");
			}
		}
	}
	return 0;
}

//SOL non puó funzionare senza un contatore, esempio 39 viene stampato
