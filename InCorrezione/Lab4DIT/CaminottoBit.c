/*Caminotto Simone 4Dit 23/11/24*/
/*Nome file: CaminottoBit.c*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int bit_number (int n);

int main (int argc, char* argv){
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
