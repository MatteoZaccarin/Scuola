# File di variola.

## Contenuto di variola.Gruppi.c

//Mattia Variola
//Es2 con stringa intera
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char*argv[]){
	if(argc==2){
		int i=0;
		int conta=0;
		for(i=0;i<strlen(argv[1]);i++){
			if(argv[1][i]==argv[1][i+1]){
				if(argv[1][i+1]==argv[1][i+2]){
					conta++;
				}
			}
		}
		printf("Numero di gruppi consecutivi (3 numeri consecutivi identici): %d", conta);
	}
	else
	{
		printf("Il numero di parametri e errato.");
	}
	return 0;
}
