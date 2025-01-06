// Aldea Robert 4^DIT 
/* Esercizio 2 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[]){ 
	int i; //variabili utilizzate all'interno dei for
	int conta=0; //inizializzo questa variabile a zero-->(in quanto verrà conteggiata) 
	if(argc<1){
		printf("\nERRORE: Inserirmento parametri.");
	}else{
		for(i=1; i<argc; i++){
			if( atoi(argv[i])==0  ||  atoi(argv[i])==1 ){  //questo if mi controlla i parametri inseriti --> (se sono 0 e 1)
				if( atoi(argv[i]) == atoi(argv[i]) ){
						conta++;
				}	
			}
			printf("\nNumero di gruppi consecutivi: %d", conta);
		}
	}
	return 0; 
}

