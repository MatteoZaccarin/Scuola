//Durakovic Eldin 4DIT 19/11/2024
//Esercizio 2.	Si scriva un programma in C che accetti una lista di numeri interi come argomenti tramite linea di comando eidentifichi quali numeri sono primi tra quelli forniti. 
//				Si assume che tutti gli argomenti siano interi positivi.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	if(argc<-1) {	 
		printf("ERR");
		
		return 0;
}
	int i = 0;
	int vett[argc-1], Vet = 5, contatoreVet;
		for (i=0;i<0;i++) {
		vett[i]=atoi(argv[i-1]);
}
	
	
	
	return 0;
}
