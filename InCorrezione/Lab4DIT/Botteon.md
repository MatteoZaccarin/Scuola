# File di Botteon

## Contenuto di BotteonBit.c

//Botteon Andrea 4^DIT 23/11/024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[]){
	int num,conta=0;
	if(argc>1){
		for(int i=0; i<argc; i++){
			num=atoi(argv[i]);
			if(num<0){
				printf("Il numero e' negativo ");
			}
			int conta=0;			
			while(num>0){
				num=num/2;
				conta++;
			}
			printf("%s servono %d bit ",argv[1],conta);
		}
	}else{
		printf("Parametri insufficienti");
	}
	
	return 0;
}
//SOL bravo
## Contenuto di BotteonGruppi.c

//Botteon Andrea 4^DIT 23/11/024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main (int argc, char* argv[]){
	if(argc==2){
		int conta,p=1,i=1;
		bool f;
		do{
			f=false;
			conta=0;
			while(f==true && i<strlen(argv[1])){
				if(argv[1][i] != argv[1][i-1] && (argv[1][i] != '1' || argv[1][i] !='0')){
					f=false;
				}
			if(argv[1][i] == '1' || argv[1][i] !='0'){
					p++;
				}	
		}
		}while(i<strlen(argv[1]));
		printf("%s numero di gruppi consecutivi %d", argv[1],p);	
		
	}
	else{
		printf("errore");
	}
	
	return 0;
}

//SOL due cicli infiniti, comunque non funziona
## Contenuto di BotteonMedia.c

//Botteon Andrea 4^DIT 19/11/2024
/* Scrivi un programma che accetti una lista di stringhe comne argomenti 
tramite linea di comando e calcoli la media della lunghezza delle stringhe.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int n=0,somma=0;
	float media=0.0;
	for(int i=1;i<argc; i++){
		n=strlen(argv[i]);
		somma+=n;
	}
	media=somma/(argc-1);
	printf("%.2f", media);
	return 0;
}

//SOL devi fare un controllo sui parametri, nel tuo caso con 0 parametri non  potrà andare, divide per 0

## Contenuto di BotteonPrimi.c

//Botteon Andrea 4^DIT 19/11/2024
/* Scrivi un programma che accetti una lista di numeri interi come argomenti tramite linea di comando
e identifichi quali numeri sono primi tra quelli forniti.
Si assume che tuttui gli argomenti siano interi posistivi.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int n,i=0,div,num,conta=0;
	printf("I numeri primi sono: ");
	n=atoi(argv[i+1]);
	for(int i=0;i<n;i++){
		for(div=2; div<=num/2; div++){
			if(num%div==0){
				conta++;
			}
		}
		if(conta==0)
		printf("%d ",num);
	}
	return 0;
}

//SOL perchè almeno l'algoritmo per trovare i primi è corretto