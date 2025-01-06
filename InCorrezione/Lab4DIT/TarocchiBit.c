//Tarocchi Luca 23/11/2024
//TarocchiBit.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char*argv){
	int nBit,i,num,potenza=2,j=1;
	int numParametri=argc-1;
	for (i=0;numParametri>0;numParametri--){
		num=atoi(&argv[numParametri]);
		if(numParametri<0){
			printf("il numero inserito è negativo");
		}
		else{
			while(nBit==0){
				potenza=potenza*2;
				j++;				//tengo conto del numero di volte in cui ho moltiplicato il 2 come indice della potenza
				if(potenza>=num){	//se la potenza di 2 è maggiore del numero il numero di bit corrisponde all'indice della potenza
					nBit=j;
				}
			}
			printf("Numero: %d, Bit necessari: %d",num,nBit);
		}
	}
	return 0;
}
