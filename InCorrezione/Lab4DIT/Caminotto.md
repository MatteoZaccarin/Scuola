# File di Caminotto

## Contenuto di CaminottoBit.c

/*Caminotto Simone 4Dit 23/11/24*/
/*Nome file: CaminottoBit.c*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int bit_number (int n);

int main (int argc, char* argv[]){
	//controllo che siano stati forniti i parametri
	if(argv==1){
		printf("\nParametri non forniti");
	}
	else{
		//creo una variabile parametri contenente l'effettivo numero di parametri
		int parametri=argc-1;
		int n, bit_n;
		//finch� ho parametri controllo quanti bit ci vogliono per rappresentarlo in binario (partendo dal fondo del vettore
		while(parametri>0){
			//casto il risultato di atoi a intero e lo assegno a n
			n=(int)atoi(&argv[parametri+1]);
			//se il numero � negativo do errore
			if(n<0){
				printf("\nIl numero %d � minore di 0", n);
			}
			//altrimenti richiamo bit_number
			else{
				bit_n=bit_number(n);
				printf("\nIl numero di bit necessari per rappresentare il numero %d �:\t%d", n, bit_n);	
			}
			//diminuisco parametri
			parametri--;
		}
	}
	return 0;
}

int bit_number (int n){
	//caso n = 0 bit necessari 1
	if(n==0){
		return 1;
	}
	//caso n = 1 bit necessari 1
	if(n==1){
		return 1;
	}
	//altrimenti parto dalla potenza di 2 2^1 e se essa � minore di n passo alla successiva potenza di 2
	//NB se pow_result � uguale a n devo utilizzare la potenza di 2 successiva per questo il while � fin che (pow_result-1<n)
	else{
		int pow_index=1, pow_result=2;
		while(pow_result-1<n){
			pow_result=pow(n, pow_index++);
		}
		//ritorno il risultato
		return pow_index;
	}
}

//SOL, estremamente complesso, non serviva pow, inoltre devo modificare argv per farlo andare

## Contenuto di CaminottoGruppi.c

/*Caminotto Simone 4Dit 23/11/24*/
/*Nome file:CaminottoGruppi.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv){
	//un solo parametro
	//controllo se sono stati passati i parametri
	if(argc==1){
		printf("\nnessun parametro fornito");
	}
	else{
		//l lunghezza stringa
		//gruppi n gruppi
		// last_char ultimo char 0 o 1 letto
		int l, gruppi;
		char last_char;
		//prendo l
		l=strlen(&argv[1]);
		//finche ho celle continuo
		while(l>0){
			//se il carattere attuale � uno o zero e � diverso da last_char allora � finito un gruppo
			if(argv[1][l] != last_char && (argv[1][l] == '0' || argv[1][l] == '1') {
				gruppi++;
				last_char=argv[1][l];
			}
			//diminuisco l
			l--;
		}
		//stampo il numero di gruppi
		printf("\nIl numero di gruppi distinti di 0 e 1 �\t%d", gruppi);
		
		//ora controllo se ci sono zeri o uno
		l=strlen(&argv[1]);
		//i � un indice
		int i=0;
		while(l>0){
			if(argv[1][l]=='0'){
				i++;
			}
			if(argv[1][l]=='1'){
				i++;
			}
		}
		//se l'indice � 0 no 0 o 1
		if(i==0){
			printf("\nErrore nessuno 0 o 1 inserito");
		}
	}
	return 0;
}

//SOL c'é un loop sul secondo while, utilizzi variabili senza averle mai dichiarate
## Contenuto di CaminottoMedia.c

/*Caminotto Simone 4Dit 19/11/2024*/
/*Es 1: Calcolare la media della lunghezza delle stringhe passate come parametri*/
/*Nome file: CaminottoMedia.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv){
	//controllo ci siano almeno due parametri ovvero il numero minimo di informazioni per fare la media
	if(argc<=2){
		printf("\nNon abbastanza parametri passare minimo 2 parametri");
		return 1;
	}
	else{
		int i, l;
		double somma=0; //somma � un double perch� devo prevedere numeri non interi (per la media)
		for(i=1; i<=argc-1; i++){
			//aggiungo a somma la lunghezza della stringa a posizione i
			somma=somma+strlen(&argv[i]);
			//rimuovo da somma il carattere terminatore della stringa
			somma--;
		}
		//in questo momento i � uguale al numero di parametri da prendere in considerazione cio� argc-1
		somma=somma/i;
		//stampo a schermo somma che in questo momento contiene la media delle lunghezze
		printf("\nLa media �:\t%d", somma);
		printf("\nLe stringhe che superano la media sono:");
		for(i=1; i<=argc-1; i++){
			//assegno a l la lunghezza della stringa
			l=strlen(&argv[i]);
			//rimuovo il carattere terminatore
			l--;
			//la confronto con somma (in cui � contenuta la media)
			if(l>somma){
				//se � maggiore la stampo a schermo
				printf("\n\t-%s", argv[i]);
			}
		}
	}
	return 0;
}

//SOL, non voglio alcun return al di fuori del return 0 alla fine del main, inoltre argv é un vettore

## Contenuto di CaminottoPrimi.c

/*Caminotto Simone 4Dit 19/11/2024*/
/*Es 2: Avendo una lista di numeri interi passati come parmetri stampa a schermo i numeri primi*/
/*Nome file: CaminottoPrimi.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool primo_check(int);

int main (int argc, char* argv){
	//controllo se sono stati passati parametri
	if(argc==1){
		printf("\nInserire parametri");
		
	}
	else{
		int primo, i;
		for(i=1; i<=argc-1; i++){
			primo=atoi(&argv[i]);
			primo=primo_check(primo);
			if(primo==1){
				//se � primo converto nuovamente argv[i] in intero e lo stampo a schermo
				primo=atoi(&argv[i]);
				printf("%d\t", primo);
			}
			else if(primo==0){
				//il numero non � primo
				printf("-\t");
			}
			else{
				//se arrivo qui c'� un errore
				printf("ERRORE ACCORSO per argv[%d]\nTERMINAZIONE...", i);
				return 1;
			}
		}
	}
	return 0;
}

bool primo_check(n){
	int t;
	if(n==1){
		//� primo per forza
		return 1;
	}
	for(t=1; t<n/2; t++){
		if(n%t==0){
			return 0; //se il resto della divisione per t (t numero compreso tra 1 e n/2) risulta zero il numero non � primo e ritorno 0 (FALSE)
		}
	}
	//se sono arrivato fin qui allora il numero � primo
	return 1; //ritorno 1 (TRUE)
}

//SOL va solo dopo aver sistemato tutti gli argv e non hai inserito il tipo di n nella funzione bool primo check