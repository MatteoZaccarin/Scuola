//Fall Serigne Khadim 4DIT 19/11/2024
//esercizio n2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char*argv[]){
	if(argc>1){
	printf("_________________________________________________________\n");	
	printf("                 Fall Serigne Khadim\n");	
	printf("_________________________________________________________\n");	
	printf("Questo programma individua i numeri primi tra i parametri\n");	
	int i=1,posizione=1,cPrimi;
	for(i;i<argc;i++){
		int numero=atoi(argv[i]),j=1,conta=0;
		for(j;j<=numero;j++){
			if(numero%j==0){
				conta++;
			}
		}
		if(conta==2){
				printf("%d^ numero primo: [%d]\n",posizione,numero);
				posizione++;
				cPrimi++;
		}
	}	
	if(cPrimi==0){
		printf("\nnel vettore argv[] non sono presenti numeri primi.");
	}
	}else{
		printf("errore sui parametri");
	}
	return 0;
}
