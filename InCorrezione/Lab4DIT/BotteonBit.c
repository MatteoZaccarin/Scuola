//Botteon Andrea 4^DIT 23/11/024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[]){
	int num,conta=0;
	if(argc>1){
		for(int i=0; i<argc; i++){
			num=atoi(argv[i]);
			if(num<0){
				printf("Il numero e' negativo ");
			}
			int conta=0;			
			while(num>0){
				num=num/2;
				conta++;
			}
			printf("%s servono %d bit ",argv[1],conta);
		}
	}else{
		printf("Parametri insufficienti");
	}
	
	return 0;
}
