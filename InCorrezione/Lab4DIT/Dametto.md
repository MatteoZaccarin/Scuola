# File di Dametto

## Contenuto di DamettoBit.c

//Antonio.dametto 4^dit 23/11/2024

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc,char*argv[]){
	int bitnecessari(int n){
		int bit=0;
		do{bit++;n>>=1;}
		while(n>0);
		return bit;
	}
	
	int main(int argc,char*argv[]){
		int i=1;
		for(i;i<argc;i++){
			int n=atoi(argv[i]);
			if((n>0||strcmp(argv[1],"0")==0)&& n>=0){
				printf("numero:%d,bit necessari:%d\n",n,bitnecessari(n));
				
			}else{
				printf("non e' valido:%s\n",argv[i])
				
			}
		
}
	return 0;
}

//SOl non compila nemmeno

## Contenuto di DamettoMedia.c

//Antonio Dametto 4^dit 19/11/2024
//es.1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char* argv[]){
	if(argc>1){
		printf("il programma controllala media della lunghezza delle stringhe bel vettore argv[]");
		float media=0;
		int i=1,conta;
		for(i;i<argc;i++){
			media+=strlen(argv[i]);
			printf("stringan%d.%s,i,argv[i]");
			conta++;
			
		}
		printf("la media e'%.1f",media/conta);
		
	}else{
		printf("errore sul paraMETRO");
	}
	
	
	return 0;
}

//SOL cosí come hai fatto non va, inizializza conta a 0 e gestisci meglio le stampe, float e int usano un numero di Byte diverso quindi attento con le conversioni 
//implicite

## gruppi
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


//SOL nome sbagliato, non voglio vedere return diversi dall'1
