# File di bulancea

## Contenuto di bulanceaBit.c

//Matteo Bulancea 4DIT 23/11
//Esercizio 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int contaBit=0,f;
	for(int i=1;i<argc;i++){
		int n=atoi(argv[i]);
		n=f;
		while(f<0){
			f=f%2;
			contaBit++;		
	}
	contaBit=0;
	printf("Numero: %d, Bit  neccessari: %d\n",n,contaBit);
	}
	
	return 0;
}
//SOL troppe righe sbagliate, per farlo andare ho modificato almeno 4 robe
## Contenuto di bulanceaGruppi.c

//Matteo Bulancea 4DIT 23/11
//Esercizio 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int conta0=0,conta1=0,contaG=0;
	if(argc<2){
		printf("Inserisci piu' parametri!!");
	}else{
	
	for(int i=1;i<argc;i++){
		int n=atoi(argv[i]);
		for(int j=0;j<argc;j++){
			if(n==0){
				conta0++;
			}else{
				conta1++;
			}
		}
		if(conta1>=1){
			contaG++;
		}
		if(conta0>=1){
			contaG++;
		}
		conta0=0;
		conta1=0;
	}
	printf("Il numero di gruppi consecutivi e': %d",contaG);
	return 0;
}
}

//SOl , stampi sempre il numero di input, poi perchè limiti gli input ad almeno due, anche uno va bene	



## Contenuto di bulanceaMedia.c

//Matteo Bulancea 4DIT 19/11/2024
/* 1) Scrivi un programma in C cha accetti una lista di stringhe come argomenti 
 tramite linea di comando e calcoli la media della lunghezza delle stringhe.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	if(argc<2){
		printf("Inserisci piu parametri!!");
	}else{
		float media=0,mediaTot;
		for(int i=1;i<argc;i++){
			int n=strlen(argv[i]);
			media=media+n;	
		}
		mediaTot=media/argc;
		printf("La lunghezza media delle stringhe e': %f\n",mediaTot);
		printf("Le stringhe con valore piu' grande della media sono : ");
		for(int i=1;i<argc;i++){
			int n1=strlen(argv[i]);
				if(mediaTot<n1){
					printf("%s ",argv[i]);
				}
	}
}
	return 0;
}
//SOL bravo ma la media è fratto argc-1 e non argc
## Contenuto di bulanceaPrimi.c

//Matteo Bulancea 4DIT 19/11/2024
/* 2) Si sriva un programma in C cha accetti una lista di numeri interi come argomenti tramite 
 linea di comando e identifichi quali numeri sono primi tra quelli forniti.Si assume che tutti gli argomenti siano interi positivi.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	if(argc<2){
		printf("Inserisci piu parametri!!");
	}else{
		int contaDiv=0;
		int n;
		printf("I numeri primi sono: ");
		for(int i=1;i<argc;i++){
			n=atoi(argv[i]);
			contaDiv=0;
			for(int j=1;j<n;j++){
				if(n%j==0)
					contaDiv++;
			}
			if(contaDiv==1){
				printf("%d ",n);
			}
		}
	}
	return 0;
}

//SOL bravo
