# File di fall

## Contenuto di fallGruppi.c

//Fall Sergine Khadim 4DIT 23/11/2024
//es1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char* argv[]){
	if(argc>1){
		char* stringa=argv[1];
		int gruppi=0, valido=0,i=0;
		for(i;stringa[i]!='/0';i++){
			if(stringa[i]=='1'||stringa[i=='0']){
				
			}
			
		}
		
		
	
		
		
		
		
	}else{
		printf("errore sui parametri.");
	}	
	return 0;	
}

## Contenuto di fallMedia.c

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

//SOL inizializza conta

## Contenuto di fallPrimi.c

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

//SOL, vi ho fatto vedere un modo piú efficiente

## bit
//Fall Sergine Khadim 4DIT 23/11/2024
//es1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[]){
	if(argc>1){
    	int nbit,i=1;	
		for(i;i<argc;i++){
			nbit=0;
			int num=atoi(argv[i]);
			while(num>=0){
				nbit++;
				num=num-2;
			}
			printf("numero: %d, bit necessari: %d\n", atoi(argv[i]), nbit);
		}	
		}else{
		printf("errore nei parametri");	
	}		
	return 0;
}

//SOL nome sbagliato, hai sbagliato bisogna usare il fratto, comunque la condizione é sbagliata nell' if