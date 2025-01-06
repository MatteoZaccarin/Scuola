//Tarocchi Luca 23/11/2024
//TarocchiGruppi.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char*argv){
	int contaGruppi,i,num;
	int numParametri=strlen(&argv[0]);
	for (i=0;numParametri>0;numParametri--){
		num=atoi(&argv[0][numParametri]);
		if(num==0 || num==1){	//se il numero è binario conteggio un gruppo
			contaGruppi++;
			while(num==argv[numParametri+1]){ //se il numero successivo è uguale lo salto contandolo nel gruppo gia conteggiato
				numParametri--;
				}
			}
		}
	}
	if(contaGruppi>0){
	printf("Numero di gruppi consecutivi: %d",contaGruppi);
	}
	else{
		printf("Non sono stati inseriti numeri binari all'interno della stringa");
	}
	return 0;
}
