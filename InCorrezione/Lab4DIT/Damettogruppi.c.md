# File di Damettogruppi.c

## Contenuto di Damettogruppi.c

//Antonio.dametto 4^dit 23/11/2024
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char*argv[]){
	if(argc!=2){
		printf("utilizzo:%s <sequenza>\n",argv[0]);
			return 1;
	}
	char *seq=argv[1];
	int gruppi=0,valido=0,i=0;
	for(i;seq[i]!='\0';i++){
		if(seq[i]=='1'|| seq[i]=='0'){
			if(!valido|| seq[i]!=seq[i-1])gruppi++;
			valido=1;
		}
	}
	if(gruppi==0){
		printf("Nessun gruppo trovato,\n");
	}else{
		printf("numero di gruppi consecutivi:%d\n",gruppi);
	}
	return 0;
}
