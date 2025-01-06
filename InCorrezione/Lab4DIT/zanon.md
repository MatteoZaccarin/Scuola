# File di zanon

## Contenuto di zanonBit.c

//Gianluca Zanon 4 dit 23/11/2024
//es1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	int bit=0, num, i;
	if(argc>1){
		for(i=1; i<argc; i++){
		num=atoi(argv[i]);
		if(num==0){
			printf("numero: %d , bit neccessari: 1\n", atoi(argv[i]), bit);
		}
		if(num>0){
			while(num!=0 && num>0){
			num=num/2;
			bit=bit+1;
			}
			printf("numero: %d , bit neccessari: %d\n", atoi(argv[i]), bit);
			bit=0;
		}
		}
	}	
	return 0;
}

## Contenuto di zanonGruppi.c

//Gianluca Zanon 4 dit 23/11/2024
//es2
//L'HO FATTO CON UN SOLO PARAMETRO COME STRINGA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	int num, gruppo, i;
	if(argc>1){
		for(i=1; i<argc; i++){
			num=atoi(argv[i]);
			if(num==0 && argv[i+1]==1){
				gruppo=gruppo+1;
			}
			if(num==1 && argv[i+1]==0){
				gruppo=gruppo+1;
			}
			if(num==1 && argv[i+1]==1){
				gruppo=gruppo+1; 
			}
			if(num==0 && argv[i+1]==0){
				gruppo=gruppo+1;
			}
		}
		printf("numero gruppi consecutivi: %d", gruppo);	
	}	
	return 0;
}

## Contenuto di zanonMedia.c

//Gianluca Zanon 4 dit es1
/*scrivi un programma in c che accetti una lista di stringhe come argomenti 
tramite linea di comando e calcoli la media della lunghezza delle stringhe e stampare le stringhe*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	float media, lungh;
	int i, j, slun, scambia;
	if(argc>=2){
		for(i=1; i<argc; i++){
			lungh=lungh+strlen(argv[i]);
		}
		media=lungh/i;
		printf("la lunghezza media delle stringhe e': %f", media);
		for(j=1; j<argc-1; j++){
			if(strlen(argv[j])>strlen(argv[j+1])){
				slun=argv[j];
				printf("\nla stringa piu' lunga e': %s", slun);
			}else{
				argv[j]=argv[j+1];
			}
		}
	}
	return 0;
}

## Contenuto di zanonPrimi.c

//Gianluca Zanon 4 dit es2
/*si scriva in c un programma che accetti una lista di numeri interi come argomenti tramite 
linea di comando e identifivhi quali numeri sono primi tra quelli forniti*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	int nprimo, resto, n, i;
	if(argc>=2){
		printf("i numeri primi sono: ");
		for(i=1; i<argc; i++){
			n=atoi(argv[i]);
			if(n==2){
				printf("%d ", n);
			}
			if(n==3){
				printf("%d ", n);
			}
			resto=n%2;
			if(resto!=0){
				printf("%d ", n);
			}
		}	
	}
	return 0;
}
