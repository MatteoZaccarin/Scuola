# File di poiana

## Contenuto di poianaBit.c

//poiana sebastian 23.11.2024
/**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char* argv[]){
	int n;
	bool cond;
	int contaBit;
	if(argc > 1){
		for(int i=1; i<argc; i++){
			cond=false;
			n=atoi(argv[i]);
			if(n < 0){
				printf("Hai inserito un valore negativo (%d)\n\n", n);
			}
			else{
				contaBit=1;
				int n1=n;
				while(n1 > 2){
					n1=n1/2;
					contaBit++;
				}
				printf("Numero: %d, Bit necessari: %d\n\n", n, contaBit);
			}
		}
	}
	return 0;
}

//SOL il ciclo va avanti finchè num è diverso da 0, inoltre contabit deve partire da 0 non 1

## Contenuto di poianaGruppi.c

//poiana sebastian 23.11.2024
/*insei*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char* argv[]){
	if(argc == 2){
		int contaFin=0, i=1;
		bool cond;
		do{
			cond=false;
			while(cond==false && i<strlen(argv[1])){
				if((argv[1][i] != argv[1][i-1]) && (argv[1][i] != '1' || argv[1][i] != '0')){
					cond=false;
					if(argv[1][i] == '1' || argv[1][i] == '0'){
					contaFin++;
					}
				}
				i++;
			}
		}while(i<strlen(argv[1]));
		cond=false;
		for(int j=0; j<strlen(argv[1]) && cond==false; j++){
			if(argv[1][i] != '1' || argv[1][i] != '0'){
				cond=true;
			}
		}
		if(cond==false){
			printf("%s | numero di gruppi consecutivi: 0", argv[1]);
		}
		else{
			printf("%s | numero di gruppi consecutivi: %d", argv[1], contaFin);	
		}
	}
	else{
		printf("errore");
	}
	return 0;
}

//SOL bravo ma estremamente complesso, alcuni controlli inutili

## media
//poiana sebastian 19.11.2024
/*Es 1:scrivi un programma che accetti una lista di stringhe come argomenti tramite linea di comando e calcoli la media della lunghezza delle stringhe*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	int n=0, max=0;
	double media;
	if(argc <=2){
		printf("\nERRORE\n");
		return 1;
	}
	else{
		for(int i=1; i<argc; i++){
			n=n+strlen(argv[i]);
			if(max < strlen(argv[i])) max=strlen(argv[i]);
		}
		media=n/(argc-1);
		printf("La media delle lunghezze delle stringhe e': %f", media);
		printf("\nLe parole pi� lunghe sono: ");
		for(int i=1; i<argc; i++){
			if(max == strlen(argv[i])) printf("%c ", argv[i]);
		}
		return 0;
	}
}


//SOL bravo ma stampi una stringa come se fosse un carattere


## primi
//poiana sebastian 19.11.2024
/*Es 2: scrivi un programma che accetti una lista di numeri interi come argomenti tramite linea di comando e identifichi quali numeri sono primi tra quelli forniti*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
	if(argc <= 1){
		printf("\nERRORE\n");
		return 0;
	}
	else{
		int contaDiv;
		float vet[argc-1], div, prova;
		bool cond=false;
		for(int i=0; i<argc || cond == false; i++){
			vet[i]=atoi(argv[i+1]);
			prova=vet[i];
			if(vet[i] < 0){
				printf("\nHai inserito un valore negativo\n");
				cond=true;
			}
		}
		if(cond == false){
			printf("I valori primi che hai inserito sono: ");
			for(int i=0; i<argc-1; i++){
				contaDiv=0;
				div=2;
				while(div<=vet[i]/2 && contaDiv==0){
				if((int)vet[i]%(int)div == 0) contaDiv++;
				div++;
				}
			if(contaDiv == 0) printf("%d ", (int)vet[i]);
			}
		}
		return 0;
	}
}

//SOL accedi a celle di memoria non accessibili
