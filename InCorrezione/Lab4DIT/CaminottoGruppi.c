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
			//se il carattere attuale è uno o zero e è diverso da last_char allora è finito un gruppo
			if(argv[1][l] != last_char && (argv[1][l] == '0' || argv[1][l] == '1') {
				gruppi++;
				last_char=argv[1][l];
			}
			//diminuisco l
			l--;
		}
		//stampo il numero di gruppi
		printf("\nIl numero di gruppi distinti di 0 e 1 è\t%d", gruppi);
		
		//ora controllo se ci sono zeri o uno
		l=strlen(&argv[1]);
		//i è un indice
		int i=0;
		while(l>0){
			if(argv[1][l]=='0'){
				i++;
			}
			if(argv[1][l]=='1'){
				i++;
			}
		}
		//se l'indice è 0 no 0 o 1
		if(i==0){
			printf("\nErrore nessuno 0 o 1 inserito");
		}
	}
	return 0;
}
