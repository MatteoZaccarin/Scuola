//Fall Serigne Khadim 4DIT 19/11/2024
//esercizio n1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char*argv[]){
	if(argc>1){
	printf("\nQuesto programma calcola la media della lunghezza delle stringhe nell vettore argv[]");	
	float media=0;
	int i=1,conta;	
	for(i;i<argc;i++){
		media+=strlen(argv[i]);
		printf("\nstringa n%d. %s",i,argv[i]);
		conta++;
	}
	printf("\nla media delle stringe di argv[] e' %.1f",media/conta);
		
	}else{
		printf("errore sui parametri");
	}
	return 0;
}
